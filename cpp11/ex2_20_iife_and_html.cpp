// ex2_20_iife_and_html.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>
#include <string>

void ValidateHTML(const std::string&) { }

std::string BuildAHref(const std::string& link, const std::string& text) {
    const std::string html = [&link, &text] {
        const auto& inText = text.empty() ? link : text;
        return "<a href=\"" + link + "\">" + inText + "</a>";
    }(); // call!

    ValidateHTML(html);
    
    return html;
}

int main() {
    try {
        const auto ahref = BuildAHref("www.leanpub.com", "Leanpub Store");
        std::cout << ahref;
    }
    catch (...) {
        std::cout << "bad format...";
    }        
}

