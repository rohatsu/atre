#pragma once

#include <SDL.h>
#include "Chips.hpp"
#include "ANTIC.hpp"

namespace atre
{
class IO
{
	GTIA _GTIA;
	ANTIC _ANTIC;
	POKEY _POKEY;
	PIA _PIA;

	static std::map<SDL_Scancode, byte_t> _scanCodes;

	SDL_Window *_window;
	SDL_Renderer *_renderer;
	SDL_Texture *_texture;

	CPU *_CPU;

  public:
	void KeyboardInput(const std::string &input);

	IO(CPU *cpu, Memory *memory);

	void Initialize();
	void Refresh(bool cpuRunning);
	void Destroy();

	void Tick();
	void Reset();
	void Write(word_t reg, byte_t val);
	byte_t Read(word_t reg);
};
} // namespace atre
