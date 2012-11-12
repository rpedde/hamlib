/*
 * Copyright (C) 2012 Ron Pedde <ron@pedde.com>
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

#ifndef _THD72_H_
#define _THD72_H_

typedef struct thd72_vo_t {
    int vfo;
    freq_t freq;
    int step;
    int shift;
    int reverse;
    int tone;
    int ct;
    int dsc;
    int split_tone;
    int tone_idx;
    int ct_idx;
    int dsc_idx;
    int split_tone_setting; /* 0: off, 1: tone/dcs, 2:dcs/ctc, 3: tone/ctc */
    freq_t offset;
    int mode;
} thd72_vo_t;

extern int thd72_get_fo(RIG *rig, vfo_t vfo, thd72_vo_t *fo);
extern int thd72_get_mode(RIG *rig, vfo_t vfo, rmode_t *mode, pbwidth_t *width);
extern int thd72_get_freq(RIG *rig, vfo_t vfo, freq_t *freq);
extern int thd72_set_freq(RIG *rig, vfo_t vfo, freq_t freq);
extern int thd72_set_mode(RIG *rig, vfo_t vfo, rmode_t mode, pbwidth_t width);
extern int thd72_get_ctcss_sql(RIG *rig, vfo_t vfo, tone_t *tone);
extern int thd72_set_ctcss_sql(RIG *rig, vfo_t vfo, tone_t tone);
extern int thd72_get_ctcss_tone(RIG *rig, vfo_t vfo, tone_t *tone);
extern int thd72_set_ctcss_tone(RIG *rig, vfo_t vfo, tone_t tone);
extern int thd72_get_func(RIG *rig, vfo_t vfo, setting_t func, int *status);
extern int thd72_set_func(RIG *rig, vfo_t vfo, setting_t func, int status);

#endif /* _THD72_H_ */
