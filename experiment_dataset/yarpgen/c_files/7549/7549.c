/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = ((((max((max((arr_3 [i_0 - 1] [i_1] [i_0]), var_3)), var_10))) ? ((~(arr_3 [i_0] [i_1 - 2] [i_0 - 1]))) : (+-867517767)));
                var_13 = var_4;
            }
        }
    }
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            {
                var_15 ^= (-127 - 1);
                var_16 = (max(((~(arr_4 [i_2] [i_3]))), (((!(arr_7 [i_2]))))));
                var_17 = ((~(arr_3 [i_2] [i_3] [i_2])));
            }
        }
    }
    #pragma endscop
}
