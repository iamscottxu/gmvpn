/*
 *  GmVPN -- An application to securely tunnel IP networks
 *             over a single TCP/UDP port, with support for SSL/TLS-based
 *             session authentication and key exchange,
 *             packet encryption, packet authentication, and
 *             packet compression.
 *
 *  Copyright (C) 2010-2021 Fox Crypto B.V. <openvpn@foxcrypto.com>
 *
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2
 *  as published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

/**
 * @file
 * External Multiplexer module documentation file.
 */

/**
 * @addtogroup external_multiplexer External Multiplexer module
 *
 * The External Multiplexer is the link between the external network
 * interface and the other OpenVPN modules.  It reads packets from the
 * external network interface, determines which remote OpenVPN peer and
 * VPN tunnel they are associated with, and whether they are data channel
 * or control channel packets.  It then passes the packets on to the
 * appropriate processing module.
 *
 * This module also handles packets traveling in the reverse direction,
 * which have been generated by the local control channel or which have
 * already been processed by the \link data_control Data Channel Control
 * module\endlink and are destined for a remote host reachable through a
 * VPN tunnel.
 */
