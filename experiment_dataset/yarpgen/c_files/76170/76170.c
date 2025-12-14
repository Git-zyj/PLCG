/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((0 <= 562949953355776) ? (-562949953355777 <= 13584606915901838775) : ((var_11 ? var_4 : var_3)))));
    var_16 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [5] = ((var_4 ? 562949953355778 : ((~(((arr_1 [4]) ? (arr_0 [i_0]) : 0))))));
                var_17 = ((-4294967295 ? 8848 : ((25211 ? 6372097043281377444 : -40361035))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_18 *= ((((((((-1317114527 ? var_0 : (arr_0 [i_2])))) ? (arr_7 [7] [9] [i_2]) : (arr_1 [i_1 + 2])))) ? ((((!(((12074647030428174171 ? var_13 : var_3))))))) : ((((((arr_6 [i_0] [i_0]) - 29898))) - (251 + 12074647030428174171)))));
                            arr_11 [i_0] [14] [i_0] [i_3] = (max((((max((arr_6 [i_0] [i_0]), var_11)))), (arr_3 [i_2] [i_0])));
                            var_19 = ((((((((arr_3 [i_2] [i_1 + 2]) + 2147483647)) << (((((arr_3 [i_0 + 2] [i_2 + 1]) + 731271632)) - 1))))) ? (((arr_3 [i_0 + 1] [i_1 + 1]) | 1)) : (arr_3 [i_1 + 2] [i_2 + 1])));
                            arr_12 [i_0 - 3] [i_0] [i_0 - 3] [i_2] [19] = (((((arr_0 [i_0]) ? (!0) : (arr_7 [i_3] [i_1 - 1] [6]))) * (arr_8 [13] [i_0] [13] [i_0])));
                        }
                    }
                }
                arr_13 [i_0] [i_1] = (max((((var_9 ^ (arr_9 [i_0] [i_0] [i_1 + 2] [i_0] [11])))), (arr_1 [i_1 - 2])));
            }
        }
    }
    #pragma endscop
}
