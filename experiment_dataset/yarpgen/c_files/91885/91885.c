/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((-608989378 + 2147483647) << (12 - 12)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, 35184372088831));
                    var_22 += (((((min((arr_0 [i_2 - 3]), (arr_0 [i_2 + 2]))))) % var_15));
                }
            }
        }
    }
    var_23 = (((min(32542, ((3479370902 ? var_7 : 32556))))) % (min(var_13, (min(var_8, var_18)))));
    #pragma endscop
}
