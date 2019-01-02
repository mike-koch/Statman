#pragma once

#include <stdafx.h>

class ZGameStats;
class ZGameStatsManager;
class ZTypeRegistry;
class ZGameTimeManager;
class ZHitman5Module;

class HM5Pointers
{
public:
	HM5Pointers();
	~HM5Pointers();

protected:
	bool Setup();

public:
	// _g_pGameStatsSingleton
	ZGameStats* g_pGameStatsSingleton;

	// _g_pGameStatsManagerSingleton
	ZGameStatsManager* g_pGameStatsManagerSingleton;

	// _g_pTypeRegistry
	ZTypeRegistry** g_pTypeRegistry;

	// _g_pGameTimeManagerSingleton
	ZGameTimeManager** g_pGameTimeManagerSingleton;

	// _g_pHitman5Module
	ZHitman5Module** g_pHitman5Module;
};