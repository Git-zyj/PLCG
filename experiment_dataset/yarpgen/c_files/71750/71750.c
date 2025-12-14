/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((((max(var_15, var_9))) ? var_5 : (max((max(var_6, 2926673785)), (~var_2))))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 ^= ((min(var_7, 2926673794)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 ^= ((((((((2926673794 ? var_15 : var_18))) ^ (268435200 | -349340260)))) || -var_5));
                    var_22 = (((((min(var_5, 65535)))) ? ((var_12 + ((var_8 ? var_0 : var_14)))) : (max((3736037925 >= 3736037925), ((var_0 >> (var_15 + 2125511603)))))));
                }
            }
        }
        var_23 = (3736037924 >> 1);
        arr_7 [i_0] = var_2;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        var_24 = ((68157628 / (var_2 | var_3)));
        var_25 = ((var_16 ? -558929366 : (1807411599 <= 818891751)));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            {
                arr_18 [1] [1] [i_4] = -1055132322;
                var_26 = (min(((-349340262 ? 1050721470 : 0)), 818891763));
                var_27 = 1;
            }
        }
    }
    var_28 = (max(var_28, ((min(1, 1368293486)))));
    var_29 &= ((var_14 ? var_9 : ((var_15 ? var_8 : var_1))));
    #pragma endscop
}
