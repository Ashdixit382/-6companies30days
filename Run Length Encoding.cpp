/*You are required to complete this function */
#include <string>

std::string encode(std::string src) {
    if (src.empty()) {
        return ""; // or handle the empty string case according to your requirements
    }

    std::string s = "";
    int i = 0;
    int cnt = 1;

    for (i = 0; i < src.length() - 1; i++) {
        if (src[i] == src[i + 1]) {
            cnt++;
        } else {
            s.push_back(src[i]);
            std::string val = std::to_string(cnt);
            s.append(val);
            cnt = 1;
        }
    }

    s.push_back(src[i]);
    std::string val = std::to_string(cnt);
    s.append(val);

    return s;
}