/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 ^= ((29921 ^ (((0 | (arr_1 [i_0] [14]))))));
        arr_2 [i_0] = (min((-2147483647 - 1), 1));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_11 = (min(var_11, (((~(arr_0 [i_1] [i_1]))))));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_13 [i_2] [2] [i_4] = ((-var_5 * ((1 * (arr_12 [i_3 + 4] [i_2] [i_2] [1])))));
                        var_12 = (min(var_12, (((((((arr_9 [1] [i_3 + 2] [1]) <= (arr_9 [1] [i_3 + 3] [1])))) >> ((35921 ? (1 * 0) : (arr_8 [i_1] [i_3 + 3]))))))));
                    }
                }
            }
            var_13 = 86;
            var_14 -= ((!((max((-2147483647 - 1), 121)))));
        }
        var_15 = (((((var_5 ? (arr_12 [i_1] [i_1] [8] [i_1]) : -35336))) ? 17361641172372265326 : ((var_8 & (arr_12 [i_1] [i_1] [1] [i_1])))));
    }
    var_16 = ((-((-var_6 ? ((max(1, 1))) : 127))));
    var_17 = (max(var_17, ((min((+-4085106943), (((-((38 ? var_5 : 1))))))))));
    #pragma endscop
}
