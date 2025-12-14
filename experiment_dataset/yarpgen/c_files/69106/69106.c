/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (((((((8 ? 21620 : (arr_1 [i_2] [13])))) || (((var_2 ? 1 : (arr_0 [i_0] [i_0])))))) ? ((((!(-127 + var_3))))) : (min((6688641507332037773 | 21646), (((55264 <= (arr_2 [i_0]))))))));
                    var_15 = ((~(((!(~1))))));
                }
            }
        }
    }
    var_16 = (max(10268, ((((var_13 > 7866075436905967710) == 17)))));

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_17 = -36;

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_12 [i_3] [i_3] = (max(195, 10291));
            arr_13 [i_3] = var_7;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        var_18 += (!5984);
                        arr_20 [i_6] &= 124;
                    }
                }
            }
        }
        var_19 |= (~1);
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_23 [i_7] [i_7] = ((((-9223372036854775807 - 1) ? -1 : 11)));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_28 [i_7] [i_7] [i_8] [i_7] |= ((((((var_2 ^ var_3) ? ((max(29, var_7))) : (var_11 != var_6)))) ? (((!29) ? -32744 : (~44634))) : 245));
                    var_20 = (min(((0 ? (var_12 * 32767) : (1 != 63))), (((max(2667069584, 1))))));
                    arr_29 [i_7] = ((!(arr_24 [i_8])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 13;i_12 += 1)
                {
                    {
                        var_21 = 1;
                        arr_38 [7] [7] [i_7] [i_12] = (((arr_14 [i_7] [i_7] [i_7] [i_7]) | ((((1898508757 ? var_10 : -113)) % var_1))));
                    }
                }
            }
        }
        var_22 = (min(var_22, (((((arr_36 [2] [4] [2]) / (max(var_2, var_7))))))));
    }
    #pragma endscop
}
