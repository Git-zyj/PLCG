/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((var_1 && var_8) ? var_1 : var_9));
    var_21 |= (max((var_2 != var_4), ((-((var_8 ? 1648395780 : 17251579573835381911))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((arr_2 [i_0]) ? ((1648395780 / (arr_2 [i_0]))) : (((var_13 ? var_4 : var_3))));
                    arr_9 [i_0] [i_0 - 1] [i_0] = ((min(var_8, var_14)));
                    var_22 ^= (min(var_11, (max(var_5, 2147483647))));
                }
            }
        }
    }
    var_23 = (min(var_23, (((!(((var_3 ? ((max(4194303, 60073))) : ((29 ? 16360386753123751965 : 5463))))))))));
    var_24 = var_9;
    #pragma endscop
}
