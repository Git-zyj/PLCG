/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = (((var_13 ? var_12 : var_6)));
                    var_17 = 0;
                    var_18 ^= var_7;
                    arr_9 [i_0] [i_1] [i_2] = var_14;
                    arr_10 [i_0] [i_0] [i_0] [i_2] = var_5;
                }
            }
        }

        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            var_19 = (min(var_19, var_12));
            var_20 = var_13;
            var_21 &= ((3973324241161994608 ? -3973324241161994609 : -1));
            var_22 = var_15;
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_15 [i_0] [i_0] [i_0] &= (((var_14 | var_2) ? var_6 : ((var_4 ? var_12 : -3973324241161994612))));
            var_23 = ((-(var_10 / var_12)));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_24 = (((((var_12 ? (((-16 ? var_1 : 1554017949))) : (-16 * var_4)))) ? ((var_3 ? 127 : (~var_9))) : var_9));
            var_25 = (((var_9 + var_9) ? var_11 : var_7));
        }
        var_26 = (!var_3);
        var_27 *= var_4;
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_28 = (max(var_14, (max(var_11, var_14))));
            var_29 = ((-3973324241161994609 ? ((((8840337208689430525 ? var_14 : 1)) + (var_0 & var_11))) : var_13));
            var_30 = ((var_10 ? (((-((var_0 ? var_13 : 3131856249))))) : ((((max(110, 1))) ? ((1 ? -1 : -3973324241161994604)) : var_5))));
            var_31 = ((((((((var_6 ? 4194303 : 65535))) ? ((max(var_6, 0))) : ((var_12 ? var_12 : 60237))))) ? ((((var_10 && 4176941406) ? (((max(63, var_1)))) : var_9))) : 51));
        }
        var_32 = (min(var_32, var_14));
        var_33 = var_4;
        var_34 |= (((3131856261 ? -3973324241161994608 : (-127 - 1))));
    }
    var_35 = ((var_11 ? 1 : (~var_1)));
    var_36 = ((127 >> (((-127 - 1) + 141))));
    #pragma endscop
}
