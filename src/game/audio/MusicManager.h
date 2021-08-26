#ifndef GAME_SAPPER_SRC_GAME_AUDIO_MUSIC_MANAGER_H
#define GAME_SAPPER_SRC_GAME_AUDIO_MUSIC_MANAGER_H

#include <SFML/Audio.hpp>
#include <string>


namespace Game {
    namespace Audio {
        class MusicManager {
        public:
            MusicManager(const MusicManager&) = delete;
            MusicManager(MusicManager&&) = delete;
            MusicManager& operator=(const MusicManager&) = delete;
            MusicManager& operator=(MusicManager&&) = delete;

            static MusicManager& getInstance();
            bool playMusic(const std::string& path);

        private:
            MusicManager() = default;

            sf::Music m_music;
        };
    }
}


#endif // GAME_SAPPER_SRC_GAME_AUDIO_MUSIC_MANAGER_H
