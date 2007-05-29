/*
  pygame - Python Game Library
  Copyright (C) 2007 Marcus von Appen

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Library General Public
  License as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Library General Public License for more details.

  You should have received a copy of the GNU Library General Public
  License along with this library; if not, write to the Free
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#include "surface.h"

static int
surface_fill_blend_add (SDL_Surface *surface, SDL_Rect *rect, Uint32 color)
{
    Uint8 *pixels;
    int width = rect->w;
    int height = rect->h;
    int skip;
    int bpp;
    int n;
    SDL_PixelFormat *fmt;
    Uint8 sR, sG, sB, sA, cR, cG, cB, cA;
    Uint32 pixel;
    Uint32 tmp;
    int result = -1;

    bpp = surface->format->BytesPerPixel;
    fmt = surface->format;
    pixels = (Uint8 *) surface->pixels + surface->offset +
        (Uint16) rect->y * surface->pitch + (Uint16) rect->x * bpp;
    skip = surface->pitch - width * bpp;

    switch (bpp)
    {
    case 1:
    {
        /* TODO */
        break;
    }
    default:
    {
        GET_PIXELVALS (cR, cG, cB, cA, color, fmt);
        printf ("Color: %d, %d, %d, %d, BPP is: %d\n", cR, cG, cB, cA, bpp);
        while (height--)
        {
            LOOP_UNROLLED4(
            {
                GET_PIXEL (pixel, bpp, pixels);
                GET_PIXELVALS (sR, sG, sB, sA, pixel, fmt);
                BLEND_ADD (tmp, cR, cG, cB, cA, sR, sG, sB, sA);
                CREATE_PIXEL(pixels, sR, sG, sB, sA, bpp, fmt);
                pixels += bpp;
            }, n, width);
            pixels += skip;
        }
        result = 0;
        break;
    }
    }
    return result;
}

static int
surface_fill_blend_sub (SDL_Surface *surface, SDL_Rect *rect, Uint32 color)
{
    Uint8 *pixels;
    int width = rect->w;
    int height = rect->h;
    int skip;
    int bpp;
    int n;
    SDL_PixelFormat *fmt;
    Uint8 sR, sG, sB, sA, cR, cG, cB, cA;
    Uint32 pixel;
    Uint32 tmp;
    int result = -1;

    bpp = surface->format->BytesPerPixel;
    fmt = surface->format;
    pixels = (Uint8 *) surface->pixels + surface->offset +
        (Uint16) rect->y * surface->pitch + (Uint16) rect->x * bpp;
    skip = surface->pitch - width * bpp;

    switch (bpp)
    {
    case 1:
    {
        /* TODO */
        break;
    }
    default:
    {
        GET_PIXELVALS (cR, cG, cB, cA, color, fmt);
        printf ("Color: %d, %d, %d, %d, BPP is: %d\n", cR, cG, cB, cA, bpp);
        while (height--)
        {
            LOOP_UNROLLED4(
            {
                GET_PIXEL (pixel, bpp, pixels);
                GET_PIXELVALS (sR, sG, sB, sA, pixel, fmt);
                BLEND_SUB (tmp, cR, cG, cB, cA, sR, sG, sB, sA);
                CREATE_PIXEL(pixels, sR, sG, sB, sA, bpp, fmt);
                pixels += bpp;
            }, n, width);
            pixels += skip;
        }
        result = 0;
        break;
    }
    }
    return result;
}

static int
surface_fill_blend_mult (SDL_Surface *surface, SDL_Rect *rect, Uint32 color)
{
    Uint8 *pixels;
    int width = rect->w;
    int height = rect->h;
    int skip;
    int bpp;
    int n;
    SDL_PixelFormat *fmt;
    Uint8 sR, sG, sB, sA, cR, cG, cB, cA;
    Uint32 pixel;
    Uint32 tmp;
    int result = -1;

    bpp = surface->format->BytesPerPixel;
    fmt = surface->format;
    pixels = (Uint8 *) surface->pixels + surface->offset +
        (Uint16) rect->y * surface->pitch + (Uint16) rect->x * bpp;
    skip = surface->pitch - width * bpp;

    switch (bpp)
    {
    case 1:
    {
        /* TODO */
        break;
    }
    default:
    {
        GET_PIXELVALS (cR, cG, cB, cA, color, fmt);
        printf ("Color: %d, %d, %d, %d, BPP is: %d\n", cR, cG, cB, cA, bpp);
        while (height--)
        {
            LOOP_UNROLLED4(
            {
                GET_PIXEL (pixel, bpp, pixels);
                GET_PIXELVALS (sR, sG, sB, sA, pixel, fmt);
                BLEND_MULT (cR, cG, cB, cA, sR, sG, sB, sA);
                CREATE_PIXEL(pixels, sR, sG, sB, sA, bpp, fmt);
                pixels += bpp;
            }, n, width);
            pixels += skip;
        }
        result = 0;
        break;
    }
    }
    return result;
}

static int
surface_fill_blend_min (SDL_Surface *surface, SDL_Rect *rect, Uint32 color)
{
    Uint8 *pixels;
    int width = rect->w;
    int height = rect->h;
    int skip;
    int bpp;
    int n;
    SDL_PixelFormat *fmt;
    Uint8 sR, sG, sB, sA, cR, cG, cB, cA;
    Uint32 pixel;
    Uint32 tmp;
    int result = -1;

    bpp = surface->format->BytesPerPixel;
    fmt = surface->format;
    pixels = (Uint8 *) surface->pixels + surface->offset +
        (Uint16) rect->y * surface->pitch + (Uint16) rect->x * bpp;
    skip = surface->pitch - width * bpp;

    switch (bpp)
    {
    case 1:
    {
        /* TODO */
        break;
    }
    default:
    {
        GET_PIXELVALS (cR, cG, cB, cA, color, fmt);
        printf ("Color: %d, %d, %d, %d, BPP is: %d\n", cR, cG, cB, cA, bpp);
        while (height--)
        {
            LOOP_UNROLLED4(
            {
                GET_PIXEL (pixel, bpp, pixels);
                GET_PIXELVALS (sR, sG, sB, sA, pixel, fmt);
                BLEND_MIN (cR, cG, cB, cA, sR, sG, sB, sA);
                CREATE_PIXEL(pixels, sR, sG, sB, sA, bpp, fmt);
                pixels += bpp;
            }, n, width);
            pixels += skip;
        }
        result = 0;
        break;
    }
    }
    return result;
}

static int
surface_fill_blend_max (SDL_Surface *surface, SDL_Rect *rect, Uint32 color)
{
    Uint8 *pixels;
    int width = rect->w;
    int height = rect->h;
    int skip;
    int bpp;
    int n;
    SDL_PixelFormat *fmt;
    Uint8 sR, sG, sB, sA, cR, cG, cB, cA;
    Uint32 pixel;
    Uint32 tmp;
    int result = -1;

    bpp = surface->format->BytesPerPixel;
    fmt = surface->format;
    pixels = (Uint8 *) surface->pixels + surface->offset +
        (Uint16) rect->y * surface->pitch + (Uint16) rect->x * bpp;
    skip = surface->pitch - width * bpp;

    switch (bpp)
    {
    case 1:
    {
        /* TODO */
        break;
    }
    default:
    {
        GET_PIXELVALS (cR, cG, cB, cA, color, fmt);
        printf ("Color: %d, %d, %d, %d, BPP is: %d\n", cR, cG, cB, cA, bpp);
        while (height--)
        {
            LOOP_UNROLLED4(
            {
                GET_PIXEL (pixel, bpp, pixels);
                GET_PIXELVALS (sR, sG, sB, sA, pixel, fmt);
                BLEND_MAX (cR, cG, cB, cA, sR, sG, sB, sA);
                CREATE_PIXEL(pixels, sR, sG, sB, sA, bpp, fmt);
                pixels += bpp;
            }, n, width);
            pixels += skip;
        }
        result = 0;
        break;
    }
    }
    return result;
}

int
surface_fill_blend (SDL_Surface *surface, SDL_Rect *rect, Uint32 color,
                    int blendargs)
{
    int result = -1;
    int locked = 0;

    /* Lock the surface, if needed */
    if (SDL_MUSTLOCK (surface))
    {
        if (SDL_LockSurface (surface) < 0)
            return -1;
        locked = 1;
    }

    switch (blendargs)
    {
    case PYGAME_BLEND_ADD:
    {
        result = surface_fill_blend_add (surface, rect, color);
        break;
    }
    case PYGAME_BLEND_SUB:
    {
        result = surface_fill_blend_sub (surface, rect, color);
        break;
    }
    case PYGAME_BLEND_MULT:
    {
        result =  surface_fill_blend_mult (surface, rect, color);
        break;
    }
    case PYGAME_BLEND_MIN:
    {
        result =  surface_fill_blend_min (surface, rect, color);
        break;
    }
    case PYGAME_BLEND_MAX:
    {
        result =  surface_fill_blend_max (surface, rect, color);
        break;
    }
    default:
    {
        result = -1;
        break;
    }
    }
    return result;
}