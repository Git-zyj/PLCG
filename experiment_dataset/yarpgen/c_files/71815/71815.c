/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] [i_1] = (((((((-123 ? 0 : var_14))) ? (arr_7 [i_1 - 1] [4]) : (arr_4 [i_0 - 2]))) * ((((min(255, 52)))))));
                arr_9 [i_0] [i_0] [i_1] = (arr_6 [i_1] [i_0]);
                var_19 += 4294967295;
            }
        }
    }
    #pragma endscop
}
