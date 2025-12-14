/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = var_8;
                    arr_9 [i_1] = (max(var_10, (((~((var_6 ? 3694781662 : (arr_8 [i_0] [i_0] [i_1] [i_1]))))))));
                }
            }
        }
    }
    var_13 -= (max(((var_7 ? var_9 : var_1)), var_8));
    var_14 = ((!((min((~var_10), ((var_9 ? var_10 : var_6)))))));
    #pragma endscop
}
