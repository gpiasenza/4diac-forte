/*******************************************************************************
 * Copyright (c) 2006 - 2011 ACIN, Profactor GmbH
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *   Alois Zoitl, Rene Smodic, THomas Strasser, Gerhard Ebenhofer, Ingo Hegny,
 *   Martin Melik Merkumians
 *    - initial API and implementation and/or initial documentation
 *******************************************************************************/
#include "GEN_PUBLISH_fbt.h"

DEFINE_GENERIC_FIRMWARE_FB(GEN_PUBLISH, g_nStringIdGEN_PUBLISH)

GEN_PUBLISH::GEN_PUBLISH(const CStringDictionary::TStringId paInstanceNameId, forte::core::CFBContainer &paContainer):
             forte::com_infra::CCommFB( paInstanceNameId, paContainer, forte::com_infra::e_Publisher){
}