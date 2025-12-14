/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = 63;
        var_20 ^= var_5;
        var_21 = (max((((((65473 << (var_7 - 8021)))) ? ((-1 | (arr_1 [17]))) : ((((arr_0 [i_0]) > (arr_1 [i_0])))))), ((((((arr_1 [i_0]) ? (arr_0 [i_0]) : var_6))) ? ((min(65535, 59))) : (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_22 = -7;
            arr_8 [i_1] [i_1] = (((arr_4 [i_1]) < (arr_3 [i_2])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_15 [9] [9] [7] [i_4] [i_3] [i_1] = (i_1 % 2 == 0) ? ((((((arr_12 [i_1] [i_1 - 1]) + 2147483647)) << (((((arr_12 [i_1] [i_1 - 1]) + 23)) - 7))))) : ((((((arr_12 [i_1] [i_1 - 1]) + 2147483647)) << (((((((((arr_12 [i_1] [i_1 - 1]) + 23)) - 7)) + 75)) - 17)))));
                        var_23 = arr_4 [i_1];
                        var_24 = var_7;
                        var_25 |= ((-(arr_13 [i_1 - 1])));
                    }
                }
            }
            var_26 = (min(var_26, (arr_14 [i_1] [i_1] [13] [i_2])));
            var_27 = (max(var_27, (arr_10 [i_1] [i_1 - 1] [i_1] [i_1 + 1])));
        }
        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            var_28 = ((~(arr_16 [i_5 - 2])));
            var_29 = var_12;
            arr_18 [i_1] = (1152912708513824768 || 127);
        }
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            var_30 = (((arr_7 [i_1] [i_1]) || var_14));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        var_31 = (!var_3);
                        var_32 &= (((arr_7 [i_1] [i_7]) >> (65525 - 65481)));
                        arr_26 [i_1 - 1] [15] [i_6] [18] [i_1] [i_8] = -1;
                    }
                }
            }
        }
        arr_27 [i_1] [i_1] = (var_17 || -1119429010461167287);
        var_33 = (max(var_33, -1));
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        arr_31 [i_9] = (min(-7789265740992958610, ((var_13 ? 4889089389719961592 : (-9223372036854775807 - 1)))));
        var_34 = ((max(((((arr_1 [i_9]) ? 61 : var_3))), var_11)) / (min((1152912708513824768 / 41636), (min(var_10, var_14)))));
    }
    var_35 = var_11;
    #pragma endscop
}
