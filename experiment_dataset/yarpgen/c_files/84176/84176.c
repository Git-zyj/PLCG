/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = max((arr_0 [i_0]), ((((arr_4 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
                arr_7 [i_0] = min(var_5, (((-11462 ? 0 : (((arr_1 [i_0] [i_1 - 2]) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0])))))));
                var_12 = (min(var_12, var_5));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_13 = (max(var_13, ((((min(0, (arr_0 [i_3]))) * (((arr_6 [i_3]) % (arr_6 [i_3]))))))));
                arr_12 [i_2] = (((((((!(arr_1 [i_2] [i_3]))) ? (arr_9 [i_2] [i_2]) : (arr_5 [i_2] [i_2] [i_2])))) | (min((~0), (min(var_1, (arr_6 [i_2])))))));
            }
        }
    }
    #pragma endscop
}
