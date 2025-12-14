/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (((var_8 ? ((var_1 ? -3086810729264291205 : var_13)) : (var_5 + var_9))));
    var_15 = ((((((7057619446307174116 < 1) ? 72 : 0))) ? (((!((min(-3086810729264291205, 1811)))))) : ((var_11 ? (!var_11) : var_13))));
    var_16 = ((var_9 ? ((((var_5 ? var_12 : var_5)))) : (((!var_10) ? 3086810729264291204 : 1))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = 134217664;
        var_17 = (max(var_17, ((((1 ? -3086810729264291205 : -828449869))))));
        var_18 = (-1812 || 0);
        arr_4 [i_0] [i_0] = -var_4;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((((var_1 ? ((min(-86, -26377))) : (max((arr_2 [i_2]), (arr_6 [i_0]))))) | ((var_7 >> (((((arr_7 [i_0] [i_1] [i_2 + 2]) ? var_4 : var_8)) - 502151132))))));
                    var_19 = (((((113 ? 1677168110 : -1167))) || (((arr_5 [i_2 - 1] [i_2 - 4] [i_2]) >= (arr_5 [i_2 - 3] [i_2 + 4] [i_2 + 3])))));
                }
            }
        }
    }
    #pragma endscop
}
