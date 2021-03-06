/* ide-preferences-bin.h
 *
 * Copyright (C) 2015 Christian Hergert <chergert@redhat.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef IDE_PREFERENCES_BIN_H
#define IDE_PREFERENCES_BIN_H

#include <gtk/gtk.h>

#include "search/ide-pattern-spec.h"

G_BEGIN_DECLS

#define IDE_TYPE_PREFERENCES_BIN (ide_preferences_bin_get_type())

G_DECLARE_DERIVABLE_TYPE (IdePreferencesBin, ide_preferences_bin, IDE, PREFERENCES_BIN, GtkBin)

struct _IdePreferencesBinClass
{
  GtkBinClass parent_class;

  void     (*connect)    (IdePreferencesBin *self,
                          GSettings         *settings);
  void     (*disconnect) (IdePreferencesBin *self,
                          GSettings         *settings);
  gboolean (*matches)    (IdePreferencesBin *self,
                          IdePatternSpec    *spec);

  gpointer _reserved1;
  gpointer _reserved2;
  gpointer _reserved3;
  gpointer _reserved4;
  gpointer _reserved5;
  gpointer _reserved6;
  gpointer _reserved7;
  gpointer _reserved8;
};

G_END_DECLS

#endif /* IDE_PREFERENCES_BIN_H */
