/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"
#include "drivers/dma.h"

#include "drivers/timer.h"
#include "drivers/timer_def.h"

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {

    DEF_TIM(TIM12, CH2, PB15, TIM_USE_PWM | TIM_USE_PPM, 0, 0),
    DEF_TIM(TIM8,  CH1, PC6,  TIM_USE_PWM,               0, 0),
    DEF_TIM(TIM8,  CH2, PC7,  TIM_USE_PWM,               0, 0),
    DEF_TIM(TIM8,  CH4, PC9,  TIM_USE_PWM,               0, 0),
    DEF_TIM(TIM8,  CH3, PC8,  TIM_USE_PWM,               0, 0),

    DEF_TIM(TIM4,  CH3, PB8,  TIM_USE_MOTOR,             0, 0),
    DEF_TIM(TIM2,  CH4, PA3,  TIM_USE_MOTOR,             0, 1),
    DEF_TIM(TIM3,  CH2, PB5,  TIM_USE_MOTOR,             0, 0),
    DEF_TIM(TIM4,  CH4, PB9,  TIM_USE_MOTOR,             0, 0),
    DEF_TIM(TIM9,  CH2, PE6,  TIM_USE_MOTOR,             0, 0),
    DEF_TIM(TIM3,  CH1, PB4,  TIM_USE_MOTOR,             0, 0),
//11
    DEF_TIM(TIM10, CH1,  PB8,  0, 0, 0),
    DEF_TIM(TIM5,  CH4,  PA3,  0, 0, 0),
    DEF_TIM(TIM9,  CH2,  PA3,  0, 0, 0),
    DEF_TIM(TIM11, CH1,  PB9,  0, 0, 0),
    DEF_TIM(TIM1,  CH1N, PB13, 0, 0, 0),
    DEF_TIM(TIM1,  CH2N, PB14, 0, 0, 0),
    DEF_TIM(TIM8,  CH2N, PB14, 0, 0, 0),
    DEF_TIM(TIM12, CH1,  PB14, 0, 0, 0),
    DEF_TIM(TIM1,  CH3N, PB15, 0, 0, 0),
    DEF_TIM(TIM8,  CH3N, PB15, 0, 0, 0),
    DEF_TIM(TIM3,  CH1,  PC6,  0, 0, 0),
    DEF_TIM(TIM3,  CH2,  PC7,  0, 0, 0),
    DEF_TIM(TIM3,  CH4,  PC9,  0, 0, 0),
    DEF_TIM(TIM3,  CH3,  PC8,  0, 0, 0),
};