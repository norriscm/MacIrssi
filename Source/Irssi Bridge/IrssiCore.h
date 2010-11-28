/*
 IrssiCore.h
 Copyright (c) 2010 Matt Wright.
 
 MacIrssi is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 2 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <Cocoa/Cocoa.h>

struct _GMainLoop;

@interface IrssiCore : NSObject {
  struct _GMainLoop *glibRunloop;
}

+ (id)initialiseCore;
+ (void)deinitialiseCore;
+ (id)sharedCore;

- (void)runloopOneshot;

- (void)forceUTF8Charset;
- (NSString*)findThemeByName:(NSString*)name;

@end
