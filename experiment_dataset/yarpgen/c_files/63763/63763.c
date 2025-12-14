/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_13 *= (((max((min((arr_1 [1]), (arr_6 [0] [i_0]))), ((((arr_9 [i_0 + 1] [i_0 + 1] [9]) || var_10))))) | (max(((1 ? (arr_8 [i_1] [i_1 - 1] [1] [i_2]) : var_1)), 26078))));
                        var_14 *= ((!(((-26080 ? (arr_8 [i_0] [i_1] [i_0] [i_3]) : 1977590888)))));
                        arr_10 [i_0] [i_1 - 1] [10] [i_0] = (min(0, (max((arr_6 [i_0] [1]), (min(var_4, (arr_9 [i_3] [i_0] [i_0])))))));
                    }
                }
            }
        }
        var_15 = ((max(2127951320811983971, 34660)));
        arr_11 [0] = (((((-((min((arr_1 [i_0 + 1]), 1)))))) ? ((((108 ? (arr_3 [3]) : var_6)) + ((var_11 % (arr_0 [i_0]))))) : ((var_11 ? (arr_1 [1]) : ((var_11 ? (arr_5 [1] [i_0]) : 165))))));
    }
    var_16 = ((((((((108 ? var_5 : var_5))) ? (1473201740 ^ var_2) : (var_8 / var_10)))) ? ((((min(var_4, var_8))) ? (min(var_7, 255)) : ((var_0 ? 2127951320811983971 : var_12)))) : (max(((var_2 ? var_10 : var_3)), ((0 ? 14300333268169441284 : var_7))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                var_17 = ((((-(((arr_2 [4] [i_4]) + 59911)))) - 1));
                var_18 = (((arr_16 [i_4] [i_4]) * ((((arr_5 [i_5] [i_4]) / ((167 ? -26067 : (arr_3 [i_5]))))))));
            }
        }
    }
    #pragma endscop
}
