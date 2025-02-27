/**************************************************************************************************
 * Copyright (c) 2021 Calypso Networks Association https://calypsonet.org/                        *
 *                                                                                                *
 * See the NOTICE file(s) distributed with this work for additional information regarding         *
 * copyright ownership.                                                                           *
 *                                                                                                *
 * This program and the accompanying materials are made available under the terms of the Eclipse  *
 * Public License 2.0 which is available at http://www.eclipse.org/legal/epl-2.0                  *
 *                                                                                                *
 * SPDX-License-Identifier: EPL-2.0                                                               *
 **************************************************************************************************/

#pragma once

namespace calypsonet {
namespace terminal {
namespace reader {
namespace selection {
namespace spi {

/**
 * Selection scenario implemented and provided by a card extension.
 *
 * <p>Performed by the CardSelectionManager, one or more selections could be made.
 *
 * @since 1.0.0
 */
class CardSelection {
 public:
  /**
     * 
     */
  virtual ~CardSelection() = default;
};

}  // namespace spi
}  // namespace selection
}  // namespace reader
}  // namespace terminal
}  // namespace calypsonet
