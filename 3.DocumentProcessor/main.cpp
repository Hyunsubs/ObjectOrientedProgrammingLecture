#include <iostream>

#include "Document.h"
#include "DocumentProcessor.h"
#include "DocumentProcess.h"

#include "SpellcheckProcess.h"
#include "RepaginateProcess.h"
#include "TranslateIntoFrenchProcess.h"

// ���� ó���ڸ� �����ϴ� �Լ�.
DocumentProcessor* Configure()
{
    DocumentProcessor* processor = new DocumentProcessor();
    processor->AddDocumnetProcess(DocumentProcess::TranslateIntoFrench);
    processor->AddDocumnetProcess(DocumentProcess::SpellCheck);
    processor->AddDocumnetProcess(DocumentProcess::Repaginate);

    return processor;
}

int main()
{
    // ���� ��ü ����.
    Document doc1("Jake Oh", "2025.02.13", "C++ Programming");
    Document doc2("Ian Tim", "2024.01.31", "Hello Iphone");

    // ���� ó���� ��ü ���� (���丮 ����).
    DocumentProcessor* processor = Configure();

    // ���� ó��.
    std::cout << "����1 ó��\n";
    processor->Process(doc1);
    std::cout << "\n";

    std::cout << "����2 ó��\n";
    processor->Process(doc2);

    // �޸� ����.
    delete processor;
    std::cin.get();
}