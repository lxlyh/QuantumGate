// This file is part of the QuantumGate project. For copyright and
// licensing information refer to the license file(s) in the project root.

#pragma once

#include <QuantumGate.h>

class MinimalExtender final : public QuantumGate::Extender
{
public:
	MinimalExtender();
	~MinimalExtender();

protected:
	const bool OnStartup();
	void OnPostStartup();
	void OnPreShutdown();
	void OnShutdown();
	void OnPeerEvent(QuantumGate::PeerEvent&& event);
	const std::pair<bool, bool> OnPeerMessage(QuantumGate::PeerEvent&& event);
};

