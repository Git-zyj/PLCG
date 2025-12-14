/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_10 = (max(2810300936, (arr_3 [i_2])));
                    var_11 = (max(var_11, 114));
                    var_12 = ((((max((((!(arr_5 [i_2] [i_1] [i_0])))), (arr_1 [i_0] [16])))) ? -91 : ((3499202237 % (arr_1 [i_1] [i_1])))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_13 *= (((~(arr_5 [i_3] [i_3] [i_3]))) & (((arr_5 [9] [i_3] [i_3]) - (arr_5 [i_3] [i_3] [i_3]))));
        var_14 = (max(var_14, ((((arr_4 [i_3] [2] [i_3]) * (((arr_4 [i_3] [i_3] [0]) ^ (arr_4 [i_3] [i_3] [i_3]))))))));
        var_15 = (+((((1072693248 ? (arr_4 [i_3] [i_3] [i_3]) : (arr_7 [i_3]))) >> (((0 - -100) - 38)))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_13 [i_4] = ((~(max((arr_2 [i_4] [i_4]), (((arr_11 [i_4] [i_4]) ? -95 : (arr_3 [i_4])))))));
        var_16 = max((max(4294967295, 786776671999492622)), (arr_4 [i_4] [i_4] [1]));

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_17 = (((max((arr_1 [i_4] [i_5]), (arr_1 [i_4] [i_5])))) ? ((((arr_1 [i_4] [i_4]) % (arr_1 [i_4] [i_4])))) : (min((arr_1 [i_4] [i_4]), 11482552606628270724)));
            var_18 = (min(var_18, (((((((((14600054667925349974 ? (arr_2 [i_4] [i_5]) : (arr_12 [i_5]))) + 9223372036854775807)) << (4294967274 - 4294967274)))) ? ((min(6964191467081280885, (arr_14 [i_4] [12] [7])))) : (arr_12 [i_4])))));
            arr_16 [i_4] [i_4] = (((((max(0, 0)) < (arr_10 [i_4]))) ? ((min((((arr_14 [i_4] [i_5] [i_4]) ? (arr_14 [i_4] [i_4] [i_4]) : (arr_0 [i_4]))), 4294967295))) : (max(((3268383824020018003 ? (arr_12 [i_4]) : 13813433010232642955)), ((((arr_5 [i_4] [i_4] [i_4]) % 399301583887486852)))))));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 18;i_7 += 1)
                {
                    {
                        var_19 = (arr_12 [i_4]);
                        var_20 = (max(var_20, ((min((((((4294967289 ? (arr_1 [i_4] [i_6]) : 6)) ^ -6))), 14600054667925349953)))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                arr_28 [i_4] [3] [i_8] [i_4] = ((!(arr_0 [i_8])));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 18;i_11 += 1)
                    {
                        {
                            var_21 = (max(var_21, -18446744073709551615));
                            var_22 -= (((arr_18 [i_10 - 1] [i_10] [i_10] [i_11 - 4]) - (((arr_25 [12] [12]) * 2))));
                        }
                    }
                }

                for (int i_12 = 1; i_12 < 16;i_12 += 1)
                {
                    var_23 = (min(var_23, (((2147483648 & (arr_34 [i_12] [i_12 - 1] [12] [i_12 - 1]))))));
                    var_24 = 32765;
                }
            }
            var_25 -= ((!(arr_14 [i_4] [i_4] [i_4])));
            var_26 = ((arr_14 [i_4] [i_8] [i_8]) - (arr_14 [i_4] [i_8] [i_8]));
            arr_35 [i_4] = ((arr_32 [i_4] [i_4] [i_8] [i_4] [i_8]) >> (((arr_1 [i_4] [i_8]) + 25988)));
        }
    }
    #pragma endscop
}
