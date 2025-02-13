#pragma once

#include "IDocumentProcess.h"
#include "DocumentProcess.h"
#include "Document.h"
#include <vector>
#include <functional>

// ������ ó���ϴ� ó���� Ŭ����.
class DocumentProcessor
{
public:
    // ���� ó���� ���� �Լ� �����͸� �߰��ϴ� �Լ�
    void AddDocumnetProcess(std::function<void(const Document&)> process)
    {
        processes.emplace_back(process);
    }


    void Process(const Document& document)
    {
        for (auto& process : processes)
        {
            process(document);
        }
    }

private:
    std::vector<std::function<void (const Document&)>> processes;
};