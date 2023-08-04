#pragma once

class GUI {
public:
	void render() noexcept;
	//bool show_app_style_editor{ false };
	bool is_open{ true };
private:
	char str_buffer[256];
};
