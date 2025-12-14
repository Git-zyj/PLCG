/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, 4294967295));
    var_20 = var_7;

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_21 = (min(var_21, var_14));
            var_22 = (min(var_22, var_2));
            var_23 = (((arr_1 [i_0 - 1] [i_0 + 3]) ? 36865 : ((65535 ? (-32767 - 1) : 132))));

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_24 ^= 26;
                            var_25 = ((var_1 ? ((var_17 | (((arr_8 [i_3] [i_3] [i_3] [i_3] [i_3]) ? (arr_8 [i_0 - 3] [i_1 - 1] [i_2] [i_3] [i_4]) : (arr_2 [i_1]))))) : (arr_5 [i_0] [i_1] [i_4 + 2])));
                            var_26 = (max(var_26, ((max((min((arr_11 [i_0 - 4] [i_0] [i_0 - 4] [i_0] [i_0] [i_0]), (~var_4))), (((min((arr_9 [i_0] [i_2] [i_0] [i_2] [0] [i_4]), var_7)))))))));
                        }
                    }
                }
                var_27 = ((-(arr_10 [i_2] [i_2] [i_1 + 1] [i_1 + 1] [i_0])));
            }
            var_28 |= (((arr_6 [i_0 + 1]) && (arr_6 [i_0 + 1])));
        }
        for (int i_5 = 4; i_5 < 15;i_5 += 1)
        {
            var_29 = ((~(arr_14 [i_5])));
            var_30 |= ((((~(arr_1 [i_0 - 3] [i_5]))) >= ((((arr_7 [i_0] [i_5 - 2] [i_0] [i_0 - 4]) && ((((arr_0 [i_0] [i_0]) ? (arr_6 [i_0 - 3]) : (arr_15 [i_0])))))))));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_31 += (max(((min((arr_6 [i_0 - 3]), (arr_6 [i_0 - 4])))), (max(((~(arr_12 [i_6] [i_6] [i_6]))), (arr_17 [i_6] [i_6] [i_6])))));

            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_32 = 65535;
                var_33 = (max(var_33, ((((((arr_16 [i_0 - 2] [i_0 - 1] [i_7]) ? (arr_16 [i_6] [i_0 + 3] [i_0 + 3]) : (arr_16 [i_0 - 4] [i_0 - 2] [i_0 - 4]))) >= (arr_16 [i_0] [i_0 - 2] [i_0]))))));
                var_34 = ((-(((arr_3 [i_0 + 3] [i_0 + 3] [i_0]) | (arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 1])))));
                var_35 = (max((((((-28345 ? 1882135350 : 255))) ? ((((-273 == (arr_0 [i_0] [i_6]))))) : (arr_2 [i_6]))), ((min(249, var_11)))));
            }
        }
        var_36 = (max(2080374784, 4061428231));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_37 |= -247;
        var_38 = (max((((arr_10 [i_8] [i_8] [i_8] [i_8] [i_8]) ? ((((arr_22 [i_8]) >> (((arr_3 [i_8] [i_8] [i_8]) - 28985))))) : 0)), (arr_20 [i_8] [i_8])));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_39 ^= (arr_24 [i_9] [10]);
        var_40 = (((arr_13 [i_9] [i_9]) ? (arr_25 [i_9]) : -var_14));
        var_41 = (arr_8 [i_9] [i_9] [i_9] [i_9] [i_9]);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        var_42 = ((4294967295 ? 0 : -251));
        var_43 = (arr_10 [i_10] [i_10] [i_10] [i_10] [i_10]);
    }
    var_44 = (max(var_44, var_3));
    #pragma endscop
}
