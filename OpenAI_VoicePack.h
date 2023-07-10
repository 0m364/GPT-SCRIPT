#ifndef OPENAI_VOICE_PACKAGE_H
#define OPENAI_VOICE_PACKAGE_H

#include <string>
#include <vector>
#include <cpprest/http_client.h>
#include <cpprest/filestream.h>

class OpenAIVoicePackage {
public:
    OpenAIVoicePackage(const std::string& apiKey);

    std::vector<uint8_t> synthesizeSpeech(const std::string& text);
    void speak(const std::string& text);

private:
    std::string apiKey;
    web::http::client::http_client httpClient;

    std::vector<uint8_t> downloadSpeech(const web::uri& uri);
};

#endif  // OPENAI_VOICE_PACKAGE_H
