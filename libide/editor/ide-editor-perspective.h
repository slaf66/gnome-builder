/* ide-editor-perspective.h
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

#ifndef IDE_EDITOR_PERSPECTIVE_H
#define IDE_EDITOR_PERSPECTIVE_H

#include <gtk/gtk.h>

#include "diagnostics/ide-source-location.h"
#include "workbench/ide-layout.h"
#include "workbench/ide-perspective.h"

G_BEGIN_DECLS

#define IDE_TYPE_EDITOR_PERSPECTIVE (ide_editor_perspective_get_type())

G_DECLARE_FINAL_TYPE (IdeEditorPerspective, ide_editor_perspective, IDE, EDITOR_PERSPECTIVE, IdeLayout)

void ide_editor_perspective_focus_location                (IdeEditorPerspective *self,
                                                           IdeSourceLocation    *location);
void ide_editor_perspective_focus_buffer_in_current_stack (IdeEditorPerspective *self,
                                                           IdeBuffer            *buffer);

G_END_DECLS

#endif /* IDE_EDITOR_PERSPECTIVE_H */
