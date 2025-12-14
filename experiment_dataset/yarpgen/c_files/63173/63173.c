/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 1023;
        var_17 = -44;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (arr_6 [i_1] [14] [i_1]);
                    var_19 = ((~((((arr_6 [i_1] [i_1] [i_1]) <= 18003)))));
                }
            }
        }
    }
    var_20 = ((!((min(var_3, -44)))));
    #pragma endscop
}
