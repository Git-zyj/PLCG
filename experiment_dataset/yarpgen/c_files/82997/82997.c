/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    var_21 = (min(var_21, ((min((max((max(var_0, var_1)), var_2)), var_18)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min(20, 183));
                arr_7 [i_0] [i_0] [i_0 - 1] = (max(54, 2433));
            }
        }
    }
    var_22 = (max(var_9, var_5));
    var_23 = (min((min(((max(54, 1923465441))), var_8)), ((max((min(var_1, var_7)), ((max(16, 54))))))));
    #pragma endscop
}
