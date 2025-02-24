#include <iostream>

#include "Document.h"
#include "DocumentProcessor.h"
#include "DocumentProcess.h"

#include "SpellcheckProcess.h"
#include "RepaginateProcess.h"
#include "TranslateIntoFrenchProcess.h"

// 문서 처리자를 구성하는 함수.
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
    // 문서 객체 생성.
    Document doc1("Jake Oh", "2025.02.13", "C++ Programming");
    Document doc2("Ian Tim", "2024.01.31", "Hello Iphone");

    // 문서 처리자 객체 생성 (팩토리 패턴).
    DocumentProcessor* processor = Configure();

    // 문서 처리.
    std::cout << "문서1 처리\n";
    processor->Process(doc1);
    std::cout << "\n";

    std::cout << "문서2 처리\n";
    processor->Process(doc2);

    // 메모리 해제.
    delete processor;
    std::cin.get();
}