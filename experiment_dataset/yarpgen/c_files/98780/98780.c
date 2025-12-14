/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((min(var_9, (min(107, -99))))), 11633261852676377556));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        var_13 += 1;

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_7 [i_1] [i_1] = -104;
            var_14 *= var_4;
            var_15 *= (max(1, (max(-978236167, 1))));
            arr_8 [i_1] [i_1] [i_0] = ((min(125, var_9)));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0 - 1] [i_2] [i_0] = (min(-63, (min(var_5, ((var_6 ? var_5 : 32764))))));
            arr_12 [i_0] [i_0] [i_2] &= 25678;
        }
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        var_16 += min((((var_5 ? 1 : var_9))), ((((min(-27, -4534801109551441578))) ? (min(1, 2308485003527142272)) : ((-50 ? 6551 : var_10)))));
        var_17 = (min((max(((max(1, var_0))), ((var_10 ? 25678 : 4642854124485924339)))), (((var_0 ? -7757077623682757203 : (min(-3648966802022589009, var_8)))))));
        var_18 = 3648966802022589008;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_19 = 1;
        arr_19 [i_4] [i_4] = (min((min(var_11, var_5)), 1));
        var_20 = ((-1 ? 2017612633061982208 : -21157));
        var_21 = (max((min(-6878388273996380203, 32501)), 1697429867098434705));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    arr_28 [i_5] [i_6] [i_6] [i_6] = (min((max(12961921614410453870, 1)), ((max(-2748014247222343811, 843661743)))));
                    arr_29 [i_6] [i_6] [i_6] = ((((((((-3143926063464902847 ? 11694 : 510))) ? 306779360 : 32764))) ? ((min(var_0, -5408618793392053541))) : 16749314206611116903));
                    var_22 = min((((((var_5 ? 9 : 1))) ? (((max(0, 1)))) : (max(1, 6568698937447153812)))), 10445);
                    arr_30 [i_7] [i_6] [i_6] [i_5] = (min((max(((var_0 ? 32606 : 9223372036854775805)), ((min(31, 1))))), 1));
                }
            }
        }
    }
    var_23 = 8379586538982854504;
    #pragma endscop
}
