/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (max((var_9 / var_6), (((var_18 >> ((((var_13 >> (var_17 + 21511))) - 100902)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_0] [i_1] [i_2] = (147 / var_1);
                    var_20 = (max(var_20, ((max((arr_4 [i_0 + 1] [i_0]), (arr_4 [i_0 - 3] [i_0]))))));
                    var_21 ^= (((((min((arr_4 [i_0] [i_0]), var_16)))) | (((var_7 & 106) ? (((arr_0 [4]) >> (((arr_4 [i_0] [i_0]) + 256174838)))) : (((arr_2 [i_2]) ? -32766 : (arr_6 [i_2] [i_2] [i_1] [i_0])))))));
                }
            }
        }
    }
    var_22 *= var_13;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                arr_14 [i_3] [i_3] = (((arr_8 [i_3 + 2] [i_3 + 2]) ? (var_9 - 2147483647) : (((((arr_6 [12] [i_4] [i_4] [14]) ? (arr_9 [i_3]) : var_6)) + -32738))));
                var_23 *= (max((arr_3 [i_3]), -32760));
            }
        }
    }
    #pragma endscop
}
