/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_16 ^= (arr_0 [i_0 - 1] [10]);

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_17 = (max(var_17, 0));
            var_18 &= ((((max(1, 1)))) > (min((arr_1 [i_0 + 1]), (((arr_3 [i_0] [i_1 + 3] [i_0 + 2]) ? var_9 : var_1)))));
            var_19 = (((((((3383662011 ? 911305270 : 32766)) <= (arr_1 [i_0])))) << ((((var_12 ? (arr_0 [i_0] [1]) : ((~(arr_0 [i_0] [1]))))) - 32))));
            arr_4 [i_0] = ((~(arr_0 [i_0] [i_0])));
        }

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_20 = ((-((32767 ? 32751 : 251))));
            var_21 &= (arr_7 [i_2]);
            var_22 = (max(var_22, (((((max(var_11, (arr_7 [i_0])))) || ((((arr_0 [i_0] [14]) ? ((4294967295 ? (arr_3 [i_0] [i_0] [i_2]) : (arr_7 [i_2]))) : (arr_8 [i_2] [i_2] [10])))))))));

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_23 = (max(var_23, (arr_15 [i_3] [i_3])));
                        var_24 = ((~((((arr_3 [i_2] [i_3] [i_5]) == 7)))));
                        var_25 = ((42539 ? ((((((var_13 ? (arr_16 [i_0] [i_0]) : var_14))) ? 1 : (((arr_7 [i_0 - 1]) / (arr_13 [i_0] [14])))))) : ((((max(251, (arr_7 [i_5])))) ? (arr_14 [i_2] [i_4] [i_3] [i_4] [i_5]) : (arr_1 [i_0 + 2])))));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        arr_21 [11] [11] [i_3] [i_0] [i_6] [i_6] [i_2] = (arr_11 [i_2] [i_2] [i_2]);
                        arr_22 [i_0] [i_2] [i_2] [i_2] [i_2] = (arr_19 [i_4] [i_2] [i_3] [i_4] [i_6] [i_0] [2]);
                        var_26 = ((~((~((~(arr_10 [i_3])))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_27 = (max(var_27, ((((((~(arr_8 [10] [i_2] [i_7])))) ? (arr_7 [i_4]) : (arr_17 [4] [i_2] [i_7] [i_2] [i_2] [i_2] [i_2]))))));
                        var_28 = (arr_1 [i_0 + 1]);
                    }

                    for (int i_8 = 4; i_8 < 15;i_8 += 1)
                    {
                        var_29 = (max(var_29, (((14435 ? 911305285 : 911305285)))));
                        var_30 = (arr_9 [i_2] [i_3] [i_0]);
                        var_31 = (3829435122 + 3603282813);
                        var_32 -= var_0;
                    }
                    var_33 = (((min((arr_18 [i_0]), (arr_23 [i_0 + 1] [i_0 - 1])))) ? ((((arr_12 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 1]) ? (arr_23 [i_0 + 2] [i_0 + 1]) : (arr_12 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 2])))) : ((-(arr_25 [i_0 + 1]))));
                }

                for (int i_9 = 4; i_9 < 15;i_9 += 1)
                {
                    arr_31 [i_0] [i_0] = (((arr_8 [i_9 - 2] [i_0] [i_0]) % 3829435116));
                    var_34 = ((!(arr_15 [i_0 + 1] [i_0 - 1])));
                    var_35 = (arr_18 [i_0]);
                }
                for (int i_10 = 0; i_10 < 0;i_10 += 1)
                {
                    var_36 = (min(var_36, var_9));
                    var_37 = ((~(((((-(arr_11 [i_0] [i_0] [i_0])))) ? ((-(arr_14 [i_3] [i_3] [i_3] [i_3] [i_3]))) : (((min((arr_7 [i_0]), (arr_23 [i_3] [i_10])))))))));
                    arr_34 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = 18446744073709551601;
                }
                arr_35 [i_0] [i_3] = (max(((((max((arr_15 [i_3] [i_3]), (arr_0 [i_0] [i_0])))) ? 0 : (arr_30 [i_0] [i_0] [i_3] [i_3] [i_3]))), ((max(((((arr_1 [i_0 - 1]) <= 10199541640624719189))), var_13)))));
            }
        }
    }
    var_38 ^= (-(((var_6 && (!var_9)))));
    #pragma endscop
}
