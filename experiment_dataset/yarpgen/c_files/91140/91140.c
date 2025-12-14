/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_16, (!1023)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 = (max((!var_1), var_18));
        var_22 = ((9739420458009878045 ? (arr_1 [i_0] [i_0]) : (!1)));
        var_23 = ((+(((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_24 = (max(((var_12 ? 1 : (arr_1 [i_1] [i_1]))), ((((arr_0 [i_1] [15]) ? (max(3049183832529675316, 1)) : ((var_2 ? var_0 : var_2)))))));
        var_25 += (((((1 ? 159 : (max(-8956199122206060091, -20))))) ? -118 : ((max((arr_2 [i_1] [i_1]), (174 < var_14))))));
        arr_5 [i_1] = (min(var_12, (((65515 ? 97 : ((max(1, -59))))))));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        arr_8 [i_2] = ((1374753932 ? 162 : 1));
        var_26 = ((((175 != ((var_8 ? (arr_2 [i_2] [i_2]) : (arr_1 [i_2 + 1] [i_2]))))) ? var_13 : ((((-1000511998 || ((min(var_19, (arr_2 [i_2] [i_2 - 1]))))))))));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_27 ^= ((5318638795045055179 ? (arr_2 [10] [i_6]) : var_5));
                            var_28 = var_10;
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_29 |= (((-3049183832529675316 + 9223372036854775807) >> (18446744073709551615 - 18446744073709551568)));
                            var_30 += arr_14 [i_5] [0] [i_5];
                        }
                        var_31 = ((-((var_13 ? (arr_19 [i_2] [11] [i_2] [i_5]) : var_9))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_32 = ((((((arr_0 [3] [i_8]) ? 0 : var_12))) ? var_8 : 52748));
        arr_23 [i_8] = (arr_2 [i_8] [i_8]);
        arr_24 [i_8] [i_8] = var_8;
    }
    #pragma endscop
}
