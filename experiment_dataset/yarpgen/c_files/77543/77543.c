/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((var_9 & ((var_8 ? -16715 : var_0)))), (~var_2)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 *= (max(((((var_8 / 1938120674) != (((arr_0 [i_1]) ? 5490006893254376446 : (arr_1 [i_0])))))), (((arr_0 [i_2 - 1]) | 102))));
                    var_12 = (max(((var_7 / (arr_5 [i_0] [i_0] [i_2 - 2]))), (((arr_4 [i_2]) ? 1300147819 : (arr_4 [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
