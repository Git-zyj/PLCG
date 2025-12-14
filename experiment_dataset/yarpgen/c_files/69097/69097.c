/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((((((var_10 > var_8) == (32748 ^ var_0))))) % ((var_12 ? var_1 : (((max(182, var_2)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 += (arr_0 [i_1]);

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, ((max((((var_9 > (arr_9 [i_1] [16] [i_2 - 1] [i_1] [i_1 - 1] [i_2 - 1])))), -32459)))));
                        var_17 -= (-(((arr_3 [i_1 + 1]) ? (arr_3 [i_1 - 3]) : (arr_3 [i_1 - 2]))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        var_18 = (min(var_18, (((var_9 != (((arr_12 [i_0] [i_1 - 3] [0] [i_4] [i_1]) ? 4402291329472904888 : var_6)))))));
                        var_19 = (~14044452744236646727);
                        var_20 = 4402291329472904888;
                        var_21 = ((((var_5 ? 14044452744236646704 : (arr_1 [i_1]))) >> (var_11 - 8044)));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_16 [17] [i_1] [i_2 - 1] = -284738280468367770;

                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            arr_19 [i_0] [i_6] [i_0] = 110;
                            arr_20 [24] [i_0] [i_1 - 2] [i_2 + 1] [i_6] [11] [i_6 + 1] = (arr_18 [i_0] [i_1 - 2] [i_2 - 1] [i_5] [i_2 - 1] [i_6 - 1] [i_6 - 1]);
                        }
                        for (int i_7 = 3; i_7 < 22;i_7 += 1)
                        {
                            arr_24 [i_7] [i_1] [i_2 - 1] = (arr_7 [11] [i_2 + 1] [i_1 - 1] [i_5]);
                            arr_25 [i_0] [i_7] [i_0] [14] [i_0] [i_0] = (arr_7 [i_0] [12] [i_2] [i_5]);
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_22 = arr_4 [i_1 - 2] [i_5] [1];
                            var_23 = (max(var_23, (((arr_18 [i_1 - 2] [i_1 - 1] [i_1] [i_1] [i_1 - 2] [i_1 - 1] [i_2 - 1]) != 17593329021564159153))));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        arr_33 [i_0] [i_0] [i_9] [i_0] [i_0] = (((((arr_10 [i_0] [i_1 + 1] [i_0]) ? 10152998391120415082 : 12))) ? var_6 : ((((arr_23 [i_9]) < var_10))));
                        arr_34 [i_0] [i_0] [i_9] [3] [i_0] = (((arr_30 [i_9]) ^ (arr_31 [i_0] [3] [i_2 - 1] [8] [i_9])));
                        var_24 *= ((!(arr_12 [i_0] [i_1 - 1] [i_2 + 1] [i_9] [14])));
                        arr_35 [i_9] [i_1] [i_0] [i_9] = var_2;
                        arr_36 [i_0] [i_1] [i_2] [i_9] = (arr_3 [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 24;i_11 += 1)
                        {
                            {
                                arr_41 [11] [i_1 - 3] [i_2] [i_10] [21] [i_10] = (max(((((arr_10 [i_2] [i_2 + 1] [i_2 - 1]) == (arr_8 [i_1])))), (max(var_12, ((max(65518, (arr_26 [i_10] [i_11]))))))));
                                var_25 = (min(var_25, (((!(((max(25054, (arr_30 [i_1 - 2]))))))))));
                                var_26 = -21;
                            }
                        }
                    }
                    var_27 = (max(var_27, ((((284738280468367757 % var_0) <= (((-(arr_38 [i_0])))))))));
                    var_28 = ((((((((max(1, -11636)))) > (((arr_9 [i_0] [i_0] [24] [i_2] [i_2] [1]) ? 8589934591 : 115))))) >> (((min((((arr_27 [i_0] [i_0] [5] [i_1 - 1] [i_1] [16]) ? var_6 : (arr_21 [i_0] [i_0] [10] [i_0] [i_2 - 1]))), (((~(-32767 - 1)))))) - 32755))));
                }
            }
        }
    }
    var_29 = (~var_1);
    #pragma endscop
}
