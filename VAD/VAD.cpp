// VAD.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "webrtc/common_audio/vad/include/webrtc_vad.h"

extern "C"
{

	__declspec(dllexport) void WebRtcVadFree(VadInst* handle)
	{
		WebRtcVad_Free(handle);
	}
	
	__declspec(dllexport) VadInst* WebRtcVadCreate()
	{
		return WebRtcVad_Create();
	}

	__declspec(dllexport) int WebRtcVadInit(VadInst* handle)
	{
		return WebRtcVad_Init(handle);
	}

	__declspec(dllexport) void WebRtcVadSetMode(VadInst* handle, long mode)
	{
		WebRtcVad_set_mode(handle, mode);
	}

	__declspec(dllexport) int WebRtcVadProcess(VadInst* handle, int fs, int16_t* audio_frame, int frame_length)
	{
		int result;

		result = WebRtcVad_Process(handle, fs, audio_frame, frame_length);

		return result;
	}
	
}