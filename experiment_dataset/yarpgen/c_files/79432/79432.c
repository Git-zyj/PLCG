/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (((((1852012948604081209 ? var_4 : ((((arr_1 [12]) ? var_8 : 3670016)))))) ? (((max(var_10, (arr_0 [i_0]))))) : (((((65526 ? 223 : (arr_2 [i_0] [i_0])))) & 15))));
        var_12 = (max(var_12, (((((min(20, ((33 ? (arr_0 [i_0]) : var_9))))) ? (arr_1 [13]) : (((min(57316, -3725997190679737812)))))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = ((max(((((arr_5 [i_1]) ? (arr_4 [i_1]) : var_3))), (var_6 - 4))));
        arr_7 [i_1] [i_1] = (min(((68 ? (arr_4 [i_1]) : ((var_1 ? 31 : 4194304)))), ((max(151, ((max(1, (arr_4 [1])))))))));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_10 [i_2] = (((((arr_5 [0]) > 1))));
            arr_11 [i_2] = (max(((min(0, 10))), 68));
            arr_12 [i_1] = ((max((((1 ? 246 : 1010068598))), (max((arr_8 [i_1] [i_2] [i_1]), var_9)))));
            arr_13 [21] = (((min((arr_9 [i_1] [i_1]), 31))));
        }
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        arr_16 [i_3 + 2] [i_3 + 2] = (((((max(4294967295, var_5)))) ? (38 % var_7) : (((min(var_4, (arr_5 [4])))))));
        var_13 -= ((((min(((1 ? (arr_9 [i_3] [i_3 - 1]) : var_4)), (var_9 > 127)))) + (211 <= var_9)));
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        var_14 = (((min(((((arr_17 [i_4]) ? var_4 : var_3))), 1)) & (((((1 ? 1855751843 : -5617)))))));
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    {
                        var_15 = (min(var_15, 1));
                        var_16 = (max(var_16, (((((((arr_14 [i_4 + 2]) ? var_7 : 84)))) ? (((1855751845 ? 65535 : 5))) : (((((var_10 ? var_3 : (arr_0 [i_4 + 2]))))))))));
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_17 = (max(var_17, (((((14150371597658898954 ? 60362 : 18446744073709551615)) * (arr_8 [i_4] [i_4] [i_8]))))));
            var_18 ^= ((((arr_17 [0]) | (183 | var_8))));
            arr_29 [i_4] [i_4] = ((((((((min((arr_27 [i_4]), 91)))) >= 2486812313920671229))) > ((max(231, 5173)))));
        }
    }
    var_19 = (max(((3419148451 ? (max(755661327, var_5)) : ((max(var_8, var_11))))), ((((var_10 & var_8) ? (((174 ? 186 : var_2))) : 1)))));
    #pragma endscop
}
