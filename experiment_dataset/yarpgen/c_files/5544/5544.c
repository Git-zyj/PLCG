/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] = (!112);
                    var_20 &= (((arr_2 [i_2 - 1] [i_2 + 3] [i_2 + 2]) ? var_11 : (arr_1 [i_0])));
                    var_21 = (min(var_21, ((min((min(18446744073709551615, ((min((arr_2 [i_0] [i_1] [6]), (arr_1 [1])))))), var_10)))));
                }
            }
        }
    }
    var_22 = ((var_10 && ((((var_8 < -1758818772) ? (max(var_19, 0)) : var_9)))));
    #pragma endscop
}
