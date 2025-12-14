/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [17] [i_1] [i_1] = ((arr_1 [i_0]) / var_9);
                arr_7 [i_0] [i_1] [13] = ((-var_0 ? ((min(((~(arr_4 [i_1] [i_1]))), (~var_5)))) : (min((arr_5 [i_1]), (arr_3 [i_1] [9] [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                {
                    var_15 = ((((min((((arr_2 [i_3]) ? 227 : (arr_3 [i_2] [i_3] [i_3]))), (((4080 ? 0 : (arr_5 [i_2]))))))) ? (arr_13 [4] [i_3] [i_4] [i_2]) : (((arr_3 [i_2] [i_2] [i_3 - 1]) ^ (arr_3 [i_2] [i_2] [i_3 + 1])))));
                    var_16 ^= 3177687105935472845;
                }
            }
        }
    }
    #pragma endscop
}
