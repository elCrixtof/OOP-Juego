#ifndef STATEGAME_HPP
#define STATEGAME_HPP

#include "window.hpp"
#include "r_path.hpp"
#include "input.hpp"
#include "state.hpp"
#include "entity.hpp"
#include "sprite.hpp"
#include "playercontrol.hpp"
#include "resources.hpp"

class GameState : public State {
public:
    GameState(ResourcePath& path, Resources<sf::Texture>& textureAllocator);

    void init() override;
    void terminate() override;

    void ProcessInput() override;
    void Update(float dTime) override;
    void Draw(Window& window) override;
    void LateUpdate(float dTime) override;

private:
    std::shared_ptr<Entity> player;
    ResourcePath& path;
    Resources<sf::Texture>& textureAllocator;
    Input input;
};
#endif
