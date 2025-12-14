/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = (((((((max(3775469088, var_17))) ? 628788895 : (arr_4 [i_0] [i_0] [i_2])))) ? var_3 : ((((max(var_9, (arr_4 [10] [i_1 + 2] [5])))) ? ((max(-32762, -69))) : -8143))));
                    var_20 |= (((((-8143 + 2147483647) << (((((arr_7 [i_0] [i_1 + 2] [i_2]) ? (arr_4 [i_2] [i_1 - 2] [i_0]) : var_8)) + 1494956501)))) & (min((((arr_9 [i_0] [i_1] [i_0]) ? 3718 : var_9)), 0))));
                }
            }
        }
    }
    var_21 = ((53 && ((min((((var_8 ? 29196 : var_1))), ((61802 ? var_5 : 6323066672678460381)))))));
    var_22 = (min((((-8143 ? 16380 : -25554))), (52647 % var_12)));
    var_23 = max(((var_7 ? var_17 : var_11)), (!var_18));
    var_24 = 25554;
    #pragma endscop
}
