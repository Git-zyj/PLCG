/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (var_0 ^ 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((max(((!(arr_0 [i_1 - 2] [i_1 - 1]))), (max((arr_0 [i_1 + 1] [i_1 + 1]), (arr_0 [i_1 - 2] [i_1 - 1]))))))));
                var_20 *= ((((arr_2 [i_0] [i_0] [i_1 - 1]) ? var_10 : var_3)));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_2] [i_1] = (!1);
                    var_21 = (max((((arr_5 [i_1 - 1] [i_1] [i_2]) - var_11)), ((((arr_6 [i_2] [i_2] [i_2]) ? -7738519729515822108 : 1)))));
                }
                var_22 = ((1 ? 1 : (((((1 ? 17397688705089288752 : 1049055368620262864))) ? 1 : (arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_1 + 1])))));
            }
        }
    }
    #pragma endscop
}
