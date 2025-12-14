/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!var_13) + (((min(var_11, 32)))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_15 *= (((!1342) ? 4961103352975196441 : ((((max((arr_0 [i_0]), var_0)))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_16 = ((1525049194 ? ((var_2 ^ (var_12 ^ -791674875012081034))) : ((((var_8 < (!377212562256546401)))))));
                        var_17 = (arr_0 [i_0]);
                    }
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_18 = (min(var_18, var_10));
        var_19 = ((var_4 < (((arr_1 [i_4 - 3] [i_4 - 2]) ? (arr_5 [4] [i_4 - 2] [i_4]) : (arr_1 [i_4 - 3] [i_4])))));
        var_20 = ((max(var_2, (arr_10 [i_4] [i_4 + 1]))));
    }
    var_21 = (min((min(var_1, var_10)), ((((var_4 < var_12) < (!1))))));
    #pragma endscop
}
