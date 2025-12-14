/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((((!1936) ^ var_5))), (max((32768 - var_7), (min(1940, var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((((min(((min(-4696, var_8))), (min(var_1, var_6))))) ? (((47141 / 2338621950) * (2139194709 >= var_7))) : (((((((0 ? 9 : 1936))) <= (min(0, (arr_3 [i_1]))))))))))));
                arr_4 [i_0] [i_1] [i_1] = (((arr_3 [i_0]) ? (max((0 - 5559582863263310872), 0)) : 1));
            }
        }
    }
    var_20 = ((-2139194709 ? ((var_4 ? -1098 : var_12)) : 255));
    #pragma endscop
}
