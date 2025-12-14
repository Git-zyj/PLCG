/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 += ((+((((~16301) != (((!(arr_4 [i_1])))))))));
                arr_5 [i_0] [i_1] [i_0 - 3] = (min((!-439729099), (min(((min((arr_4 [i_0]), var_14))), var_0))));
                var_21 = ((((-(arr_1 [i_1])))));
            }
        }
    }
    var_22 = var_4;
    #pragma endscop
}
