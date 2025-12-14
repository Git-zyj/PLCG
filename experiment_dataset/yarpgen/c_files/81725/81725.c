/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_1 / var_4) ? 28 : (16072468485412203862 == var_9)))) ? (((((var_3 ? var_4 : 28))))) : (((~var_0) ? (var_9 == 3071905307) : ((var_0 ? var_2 : -4521344060326744777))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_12 = ((-((123 ? (arr_1 [i_0] [i_1]) : var_9))));
                    var_13 = ((((((-20 ? var_10 : 0)) | (((var_9 ? (arr_3 [i_0] [i_1]) : var_6))))) & (((((((arr_0 [i_1] [i_2]) ? var_8 : (arr_6 [i_2] [i_0])))) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_2] [i_1]))))));
                    var_14 = (((var_0 == 0) ? (var_7 & 0) : (((((var_6 - (arr_4 [i_1] [i_1] [i_2])))) ? (var_1 && var_4) : (19 - 13010070939439718067)))));
                    var_15 = -13010070939439718067;
                }
                var_16 |= (((~13010070939439718067) > ((((var_8 + 2147483647) << (((((~var_6) + 1536994979)) - 29)))))));
                arr_7 [i_1] [i_1] [i_1] = (((((((arr_5 [i_1] [i_1] [i_0]) + var_10)) + var_7)) - (((~(((arr_2 [i_0] [i_1]) | -421579858)))))));
                var_17 = (((((var_0 - 19) + (arr_2 [i_0] [i_1]))) + (((-(arr_0 [i_1] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
