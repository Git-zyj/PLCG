/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [6] [6] = (-(arr_1 [i_0]));
                arr_5 [i_1] [4] = ((((var_12 - (arr_3 [i_1]))) >= ((var_10 ? (arr_2 [5] [4] [i_1]) : var_17))));
                var_18 = (max(var_18, 2572532588));
            }
        }
    }
    var_19 = min((min(var_14, var_14)), var_0);
    var_20 &= var_7;
    #pragma endscop
}
