#ifndef CGO_FFMPEG_VIDEO_H
#define CGO_FFMPEG_VIDEO_H

#include "ffmpeg.h"

int extract_video_image(AVFrame **frame, AVFormatContext *avfc,
			AVCodecContext *avcc, const int stream);

#endif
