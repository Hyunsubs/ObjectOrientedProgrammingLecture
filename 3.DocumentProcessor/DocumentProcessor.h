#pragma once

#include "IDocumentProcess.h"
#include "DocumentProcess.h"
#include "Document.h"
#include <vector>
#include <functional>

// 문서를 처리하는 처리자 클래스.
class DocumentProcessor
{
public:
    // 문서 처리에 사용될 함수 포인터를 추가하는 함수
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