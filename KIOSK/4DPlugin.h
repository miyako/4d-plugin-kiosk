/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : KIOSK
 #	author : miyako
 #	2013/05/23
 #
 # --------------------------------------------------------------------------------*/


void InitPlugin();
void DeinitPlugin();

// --- KIOSK
void KIOSK_SET_MODE(sLONG_PTR *pResult, PackagePtr pParams);
void KIOSK_Get_mode(sLONG_PTR *pResult, PackagePtr pParams);

#if VERSIONWIN
#include <windows.h>
#define HKCU HKEY_CURRENT_USER
LPCWSTR KEY_DisableTaskMgr = L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System";
LPCWSTR VAL_DisableTaskMgr = L"DisableTaskMgr";
#endif