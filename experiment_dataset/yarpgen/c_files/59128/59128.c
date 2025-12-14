/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = ((((max(var_8, var_4))) ? (((var_1 ? ((var_3 ? 20366 : 170)) : ((2147483624 >> (5033520524904652703 - 5033520524904652685)))))) : (max(var_5, 3185527055))));
                    arr_7 [i_0 - 1] [i_0 - 1] [i_1] [i_0] = (max(3128779104, 4191795847546642267));
                }
            }
        }
    }
    var_11 = ((((max(((2374508914 ? var_0 : var_4)), var_0))) ? (max(1109440225, -10942)) : ((-var_5 ? var_8 : 1890729326))));
    #pragma endscop
}
