/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_10;
    var_14 = var_12;
    var_15 = ((var_2 ? ((((max(var_0, 0))) ? var_2 : var_12)) : 28557));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_16 = ((343592077087497692 ? 15 : 45871));
        var_17 ^= (((max(6637818949652727763, (min(8955521229493393027, var_12)))) != -3648236031316630143));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_18 = (max(var_18, 90));
                        var_19 = 17429525435303265129;
                    }
                }
            }
            arr_15 [i_1 + 1] = 1;
            arr_16 [i_1] [i_2] = var_0;
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_20 = ((!(((var_5 ? var_9 : (arr_12 [i_5] [i_5] [i_5] [i_1 - 3] [i_1]))))));
            arr_19 [i_1] = var_8;
            arr_20 [i_5] [i_1 - 1] [i_1] = ((1 ? 1 : 510811196));
        }
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                {
                    var_21 = 1;
                    var_22 = (min(var_22, (((~(arr_6 [i_6 - 3]))))));
                    var_23 = (max(var_23, 1));
                }
            }
        }
    }
    var_24 = ((max(-3835175646415541536, ((2893523212 ? 15765548345570978029 : 255)))));
    #pragma endscop
}
