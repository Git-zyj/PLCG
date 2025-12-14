/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_6 [i_1] [i_0] = (~var_9);
            arr_7 [i_0] = var_5;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] = ((var_3 ? ((-(arr_2 [i_0]))) : var_9));
                        arr_15 [2] [i_1] [i_2] &= ((~(((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 1674090299 : (~var_9)))));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_19 [i_4] = ((0 ? var_3 : (((((7682618808886963704 ? 255 : 63059))) ? (arr_8 [i_0] [i_0]) : 1700239931))));
            arr_20 [i_0] = ((((((var_0 < (arr_11 [7] [i_4] [i_4] [i_0] [i_4]))) ? (arr_1 [i_4]) : var_5)) == var_4));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_27 [i_6] [8] [i_6] [i_7] = (((((0 ? -7682618808886963705 : (((161399845 ? 65535 : -63)))))) ? var_2 : var_9));
                        arr_28 [i_7] [i_6 - 1] [i_5] [i_0] = (((((((16 ? 244 : 465380385))) ? 2280658525 : 65528)) / var_4));
                        arr_29 [i_0] [i_0] [3] = ((-((((((var_6 ? (arr_3 [i_0] [i_0] [i_6]) : (arr_13 [i_5] [i_7])))) && (((-1274549381 ? 244 : 2280658539))))))));
                        var_12 = ((7682618808886963704 ? 8926757598396399343 : 65535));
                        arr_30 [i_0] [i_5] [i_0] = (var_10 ? var_0 : ((2367303835 ? 5519707911228969651 : 79645959)));
                    }
                }
            }
            arr_31 [i_0] [i_5] = (arr_1 [i_0]);
            arr_32 [i_5] = (((((~(arr_22 [i_5])))) ? ((-(arr_4 [i_0]))) : (((!(arr_22 [i_0]))))));
            arr_33 [i_0] [i_0] = (!65535);
            arr_34 [i_0] [i_0] [i_5] = (((((arr_17 [i_5]) ? var_8 : (((2701 ? 109 : 2280658527)))))) ? ((-(!var_8))) : ((var_1 ^ (var_10 || var_10))));
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            arr_37 [i_0] [i_8] [i_8] = var_0;
            var_13 += (((arr_9 [i_8] [i_0] [i_0]) ? (arr_23 [i_0] [i_8] [i_8 + 3] [i_0]) : (arr_9 [i_0] [i_8] [i_8])));
            arr_38 [i_0] [i_8 - 1] [i_8] = (arr_21 [i_0] [1] [1]);
            arr_39 [i_0] [i_8] [i_0] &= var_1;
        }
        arr_40 [i_0] = (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
