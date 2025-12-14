/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (((((min(var_1, 1)))) == (min(((~(arr_0 [i_0]))), ((((arr_0 [i_0]) ? 650349965 : var_4)))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 = (((((((min(var_15, var_8))) ? (max(650349947, (arr_8 [i_0] [i_1] [4] [i_3]))) : 1))) ? ((4294967295 ? (2332726280 ^ -1253245570) : (arr_11 [i_4 - 1] [i_3] [i_2 - 2] [i_2 - 2] [i_1 + 2]))) : var_6));
                                var_18 &= (((!1) ? (((max(0, (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((arr_13 [i_0] [i_1 - 3] [i_2 - 2] [i_3] [i_2 - 2]) ? 9200304308845537191 : (arr_13 [i_0] [22] [8] [i_3] [i_4 + 1])))));
                                arr_14 [i_2] [i_0] [i_0] [i_0] [i_2] [8] = ((1749008793 ? ((1 ? 1 : 128)) : ((min((arr_11 [i_0] [i_0] [i_4] [i_4 - 1] [i_0]), (arr_10 [i_4] [i_4 - 1] [i_0] [i_4] [i_0] [i_0] [i_0]))))));
                                arr_15 [2] [2] &= -32508;
                            }
                        }
                    }
                    var_19 |= ((-35 ? 1 : -7845));
                }
            }
        }
        var_20 ^= 149;
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_21 [i_6] = 255;
            var_21 = 650349976;
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {
                    arr_27 [i_8] [i_8] [i_5] = (min(((~(((arr_18 [i_5] [i_5]) ? 121 : -15484)))), var_15));
                    var_22 = ((-121 ? (arr_8 [20] [i_7] [1] [i_7]) : (arr_25 [i_5] [13] [i_8])));
                    var_23 = var_11;
                    var_24 = (min((arr_25 [i_7 - 1] [i_7 + 1] [i_8]), ((~(arr_10 [i_7 - 1] [i_7 - 1] [i_8] [i_7 - 1] [i_8] [i_7 + 1] [i_7 - 1])))));
                }
            }
        }
        arr_28 [i_5] [i_5] = ((max((var_6 * 8), var_11)));
        arr_29 [i_5] = ((((max((arr_8 [20] [i_5] [i_5] [21]), 81877705))) ? ((min(var_6, (arr_22 [i_5])))) : (((arr_3 [16]) ? (arr_3 [14]) : (min(-1, 129))))));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {

        for (int i_10 = 1; i_10 < 23;i_10 += 1)
        {
            var_25 = (i_9 % 2 == 0) ? (((((min(((min(65535, 53))), ((-(arr_6 [i_10])))))) ? (((max((arr_9 [i_9] [i_9] [i_9] [i_9]), (arr_30 [i_9] [i_9]))) >> ((min(1, (arr_32 [i_9])))))) : 9223372036854775802))) : (((((min(((min(65535, 53))), ((-(arr_6 [i_10])))))) ? (((((max((arr_9 [i_9] [i_9] [i_9] [i_9]), (arr_30 [i_9] [i_9]))) + 9223372036854775807)) >> ((min(1, (arr_32 [i_9])))))) : 9223372036854775802)));
            var_26 = (min(((((arr_12 [i_10 - 1] [i_10 + 1] [i_10 + 1]) && (arr_12 [i_10 - 1] [i_10 + 1] [i_10 + 1])))), (arr_12 [i_10 - 1] [i_10 + 1] [i_10 + 1])));
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    {
                        var_27 = 127;
                        var_28 = (min(var_28, var_5));
                    }
                }
            }
        }
    }
    var_29 = (max(((52886 ? var_0 : var_9)), var_14));
    var_30 = ((~(1374417004 % 650349965)));
    var_31 = (var_5 * var_7);
    var_32 = min(var_9, (28725 <= 28425));
    #pragma endscop
}
