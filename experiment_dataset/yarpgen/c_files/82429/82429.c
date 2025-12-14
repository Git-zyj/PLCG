/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] = (0 ? (((!(arr_0 [i_0])))) : (arr_5 [i_0] [i_0]));
                var_20 = (((arr_2 [i_1]) >> var_4));
                var_21 *= var_3;
            }
        }
    }
    #pragma endscop
}
