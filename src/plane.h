/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG Player.
// 
// EasyRPG Player is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// EasyRPG Player is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

#ifndef _PLANE_H_
#define _PLANE_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "bitmap.h"
#include "color.h"
#include "tone.h"
#include "drawable.h"

////////////////////////////////////////////////////////////
/// Plane class
////////////////////////////////////////////////////////////
class Plane : public Drawable {
public:
	Plane();
	~Plane();

	void Draw(int z_order);

	Bitmap* GetBitmap() const;
	void SetBitmap(Bitmap* nbitmap);
	bool GetVisible() const;
	void SetVisible(bool nvisible);
	int GetZ() const;
	void SetZ(int nz);
	int GetOx() const;
	void SetOx(int nox);
	int GetOy() const;
	void SetOy(int noy);
	double GetZoomX() const;
	void SetZoomX(float nzoom_x);
	double GetZoomY() const;
	void SetZoomY(float nzoom_y);
	int GetOpacity() const;
	void SetOpacity(int nopacity);
	int GetBlendType() const;
	void SetBlendType(int nblend_type);
	Color GetColor() const;
	void SetColor(Color ncolor);
	Tone GetTone() const;
	void SetTone(Tone ntone);

	unsigned long GetId() const;
	DrawableType GetType() const;

private:
	DrawableType type;
	unsigned long ID;
	Bitmap* bitmap;
	bool visible;
	int z;
	int ox;
	int oy;
	double zoom_x;
	double zoom_y;
	int opacity;
	int blend_type;
	Color color;
	Tone tone;

	Bitmap* plane;
	bool needs_refresh;

	void Refresh();
};

#endif