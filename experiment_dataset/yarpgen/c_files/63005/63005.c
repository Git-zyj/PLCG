/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((-((1 ? -1 : var_5))))) ? (((var_3 ? var_1 : (!67)))) : ((((min(3510914087, 1883427596))) ? (509387803 != -1) : (min(var_5, 3510914096))))));
        var_12 = (min((((~((max(46019, 112)))))), (min(46010, (min(-685454557, 3510914087))))));
        var_13 = var_8;
        var_14 = ((((((min(957647213, var_9)) + var_0))) | ((-6335566336162698617 ? var_4 : -4509771095792177499))));
        arr_4 [i_0] = ((((min((var_2 / 3510914087), ((max(-685454557, var_6)))))) ? 681156600 : (((var_0 ? var_1 : -651110760525609667)))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = ((11147 == (-85 - 5787410165698501818)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_15 &= var_11;
                        arr_17 [i_4] [i_2] [i_3] [i_4] = ((((((max(var_3, 255)) <= 784053207)))));
                        arr_18 [i_4] [0] [i_2] [i_4] = ((1 << (1609982452 - 1609982426)));
                    }
                }
            }
        }
    }
    var_16 = (8372224 ? 0 : -15495);
    var_17 = (min(((min(1346094192, -31))), (((max(37996, 7828847415740441244)) ^ (var_8 == -28396)))));
    #pragma endscop
}
