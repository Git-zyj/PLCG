/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = (((((max(9223372036854775807, var_2)) ^ 9223372036854775807)) - 1997));
                var_13 = ((-((149 >> (((arr_0 [i_0]) - 16874323546237462401))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_14 = (min((min(((min(65535, 204))), (min((arr_0 [i_2]), var_10)))), ((max(var_7, (arr_5 [i_2]))))));
                    var_15 = (1996 ? 9223372036854775780 : (((-7 ? var_8 : -9223372036854775780))));
                    var_16 = ((((max((arr_10 [i_2] [i_3 + 1] [i_4] [i_4]), var_10))) ? (!9223372036854775792) : ((-1433750495 ? -1433750488 : (arr_10 [i_2] [i_3 + 1] [9] [i_4])))));
                    arr_12 [i_4] [i_2] [i_2] [i_2] = 0;
                }
            }
        }
    }
    var_17 = 17598;
    #pragma endscop
}
