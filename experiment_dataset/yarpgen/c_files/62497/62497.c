/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((!((max(4245534058, 3981043138))))))) >= (((((9716 ? 4804647490776533793 : 13642096582933017822))) ? ((var_0 ? var_9 : var_4)) : var_6))));
    var_13 = var_11;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : ((13642096582933017845 ? 13642096582933017822 : 4804647490776533793))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_14 *= (((arr_12 [6] [i_3] [i_1 - 1] [i_1 - 1] [6]) > (arr_12 [6] [i_1 + 2] [i_1] [i_1 - 1] [4])));
                            var_15 = (min(var_15, ((((arr_7 [i_1] [i_1] [0]) ? (arr_7 [i_0] [i_1 - 1] [6]) : (arr_12 [8] [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1]))))));
                            var_16 = ((2047 ? ((0 ? 0 : -119)) : -104));
                            var_17 = (((arr_4 [i_2] [i_1 - 1] [0]) ? (arr_0 [i_3 - 1] [i_1 + 1]) : (arr_3 [i_3 - 1] [i_0] [i_3 + 1])));
                            var_18 = (((arr_10 [i_3 - 1] [i_3 - 1] [i_1 + 1] [i_1] [i_1 + 2]) ? (arr_10 [i_3 - 1] [i_3 + 2] [i_1 + 2] [i_0] [i_0]) : (arr_10 [i_3 - 1] [i_3 - 1] [i_1 - 1] [4] [4])));
                        }
                        var_19 = (min(114, 512173887));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 11;i_6 += 1)
            {
                {
                    var_20 = (min((min((arr_0 [1] [i_0]), (arr_8 [i_0]))), -104));
                    var_21 &= ((((min((arr_16 [i_5]), (arr_16 [i_5])))) ? (min(2147483647, 22429)) : -122));
                    arr_19 [i_0] [11] [i_5] [i_0] = ((18446744073709549580 >> (-114 + 131)));
                    arr_20 [i_0] = ((arr_18 [i_0]) || (arr_0 [i_0] [i_6 + 2]));
                }
            }
        }
        arr_21 [i_0] = ((((((((~(arr_8 [i_0])))) ? (((arr_5 [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((65 ? 101 : 65535))) : (((arr_4 [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [6])))));
    }
    var_22 = var_4;
    var_23 += ((((min((!var_4), var_11))) ? (((((var_1 ? var_7 : var_4))) / ((var_2 ? var_0 : var_9)))) : (var_11 + var_7)));
    #pragma endscop
}
