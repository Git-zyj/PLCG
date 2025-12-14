/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_15;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [9] [i_1] [i_1] [i_2 - 3] = (((var_2 + (arr_4 [i_0 - 3]))) >= (max((((!(arr_3 [i_1 + 2] [i_1 + 2])))), var_6)));
                    var_17 = ((((min(var_10, (arr_4 [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
