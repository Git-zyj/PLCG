/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_2, (min(5, 0))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = (var_13 ^ var_1);
            var_17 *= ((-(var_15 - var_1)));
            var_18 = (!var_8);
            var_19 = (min(var_19, (((595202609 ? -127 : var_2)))));
            arr_6 [i_1] = (!var_10);
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            var_20 = ((-71 ? (-127 - 1) : var_14));
            arr_9 [i_2 + 1] &= ((var_15 ? 26 : 1));
        }
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_16 [i_4] = (var_0 - var_15);
                        arr_17 [i_0 + 1] [i_4] = 61403;
                    }
                }
            }
            var_21 = var_9;
            arr_18 [i_0] = -28263;
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_22 = (min(var_22, (((1 ? 32767 : var_14)))));
            var_23 = ((var_1 ? var_8 : var_3));
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        var_24 = ((var_10 ? var_9 : (var_1 == 255)));
                        var_25 = (max(var_25, (((2929814338 ? var_14 : var_3)))));
                        var_26 = -21125;
                        var_27 = (min(var_27, (((((125 ? 131064 : 0)) + 27411)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                {
                    var_28 = (max(var_28, var_14));
                    var_29 = ((var_9 == (!230)));
                }
            }
        }
        var_30 = var_1;
    }
    for (int i_11 = 3; i_11 < 20;i_11 += 1) /* same iter space */
    {
        arr_34 [i_11 + 2] = (((((var_2 ? 1270895223 : 32))) ? 0 : 27421));
        var_31 *= -27427;
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                {
                    var_32 = (min(var_12, var_0));
                    var_33 = (max(var_33, (((((-(var_8 - 2527422104)))) ^ (((min(4757586316598636632, 246)) % 42117))))));
                    arr_39 [i_13] [i_12] [i_12] [i_11] = (((~-1) % 27395));
                }
            }
        }
        var_34 = (((((10 - var_12) ? 653251583905502397 : var_1))) ? (((!((min(var_9, var_8)))))) : -var_5);
    }
    var_35 = ((0 <= (!var_0)));
    var_36 = (min(var_14, (var_9 ^ var_7)));
    var_37 = (min(var_37, ((min((((595202609 < 1) << (!var_8))), (!var_11))))));
    #pragma endscop
}
