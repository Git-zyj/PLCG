/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = 568468301;
                    var_13 = (((((var_6 != 9270) ? var_3 : (!1056243823))) - -1056243823));
                }
            }
        }
    }
    var_14 = var_10;
    var_15 = max((1056243823 || var_11), (min(((-8203 ? var_6 : 52270571)), ((max(-25054, var_5))))));
    var_16 = var_6;
    #pragma endscop
}
