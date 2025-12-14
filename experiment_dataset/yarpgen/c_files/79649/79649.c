/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_15 |= ((((((min(-19091, 24766))) ? var_6 : (!24766))) == -19091));
        var_16 ^= ((!((((arr_2 [i_0 + 4] [12]) | (arr_2 [i_0 - 3] [10]))))));
        var_17 = ((~((var_5 ? (min(16656600422133465751, 1790143651576085865)) : ((min(var_3, var_11)))))));
        var_18 = (max(var_18, (arr_2 [i_0] [0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            {
                var_19 |= -592479693;
                var_20 &= 32714;
                var_21 = 0;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 20;i_5 += 1)
                            {
                                var_22 = (max(var_22, ((((arr_14 [i_1] [i_1] [2] [i_3] [i_4] [i_5 - 1]) ? ((3723661348064348245 ? (arr_13 [i_1 - 1] [i_5] [i_1 - 1] [1]) : (arr_7 [i_4]))) : 4667)))));
                                var_23 -= 1125801838;
                                var_24 -= (~var_10);
                                var_25 += 962112415;
                            }
                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                var_26 = (((arr_7 [i_1]) ? (((((99 ? 1790143651576085883 : 35573))) ? (((arr_9 [i_1] [12] [i_6]) ? 58569 : (arr_10 [i_1] [i_1]))) : 65527)) : (~5408621992441381198)));
                                var_27 |= ((((((min(var_0, (arr_6 [i_6])))) > var_14)) ? (((((~(arr_16 [i_1] [i_4] [i_1] [i_1] [i_1])))) ? 1 : ((var_6 ? var_8 : var_7)))) : var_9));
                                var_28 = (((arr_5 [i_1] [i_6]) || (arr_11 [i_1] [i_1] [i_4] [i_6])));
                                var_29 = ((((max(-14571, (arr_9 [i_1] [i_2] [13])))) << (0 < var_13)));
                            }
                            for (int i_7 = 1; i_7 < 20;i_7 += 1)
                            {
                                var_30 = 1;
                                var_31 = (arr_11 [i_1] [i_1] [i_4] [i_7]);
                                var_32 = ((!(arr_14 [i_7] [i_7 + 3] [1] [i_7 + 3] [14] [i_7])));
                            }
                            var_33 = 10904;
                            var_34 = (arr_6 [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_35 -= (!-var_12);
    #pragma endscop
}
