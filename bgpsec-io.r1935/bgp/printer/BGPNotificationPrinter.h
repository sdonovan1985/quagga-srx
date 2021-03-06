/**
 * This software was developed at the National Institute of Standards and
 * Technology by employees of the Federal Government in the course of
 * their official duties. Pursuant to title 17 Section 105 of the United
 * States Code this software is not subject to copyright protection and
 * is in the public domain.
 *
 * NIST assumes no responsibility whatsoever for its use by other parties,
 * and makes no guarantees, expressed or implied, about its quality,
 * reliability, or any other characteristic.
 *
 * We would appreciate acknowledgment if the software is used.
 *
 * NIST ALLOWS FREE USE OF THIS SOFTWARE IN ITS "AS IS" CONDITION AND
 * DISCLAIM ANY LIABILITY OF ANY KIND FOR ANY DAMAGES WHATSOEVER RESULTING
 * FROM THE USE OF THIS SOFTWARE.
 *
 *
 * This software might use libraries that are under GNU public license or
 * other licenses. Please refer to the licenses of all libraries required
 * by this software.
 *
 * Contains functionality to print update messages
 * 
 * @version 0.1.1.0
 * 
 * Changelog:
 * -----------------------------------------------------------------------------
 *  0.1.1.0 - 2016/03/25 - borchert
 *            * Removed unused header file.
 *          - 2016/03/21 - borchert
 *            * Created File.
 */
#ifndef BGPNOTIFICATIONPRINTER_H
#define	BGPNOTIFICATIONPRINTER_H

#include "bgp/BGPHeader.h"

/**
 * Print the BGP Update Message
 * 
 * @param notification The update message as complete BGP packet. 
 * 
 */
void printNotificationData(BGP_NotificationMessage* notification);

#endif	/* BGPNOTIFICATIONPRINTER_H */

