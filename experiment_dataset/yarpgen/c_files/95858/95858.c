/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((var_5 / (70368744177663 * -1)));
    var_11 = (((!(var_5 * 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    var_12 = (arr_4 [i_0] [i_2]);
                    var_13 = ((max((arr_5 [i_0] [1] [i_2]), 0)));
                    var_14 = -var_1;
                    arr_9 [i_0] [i_0] [i_1] [i_2 - 1] = (((~(arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_0]))));
                    var_15 = (((((-(arr_7 [9] [i_1] [i_0]))) / ((var_3 ? var_4 : (arr_3 [i_0]))))));
                }
                var_16 = ((-471583953 && (arr_0 [i_0])));
            }
        }
    }
    #pragma endscop
}
