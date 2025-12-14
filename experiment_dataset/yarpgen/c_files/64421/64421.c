/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] = (((((arr_3 [i_2] [i_2]) ? 4 : (arr_4 [i_0] [i_1 + 2] [i_2 - 1])))));
                    var_13 = (max(var_13, ((((arr_6 [i_0] [i_1 - 3] [i_2]) ? ((min((arr_6 [i_0] [i_1 - 3] [i_2]), 0))) : ((min((arr_6 [12] [i_1 + 3] [i_2]), (arr_6 [i_0] [i_1 - 1] [i_2 + 2])))))))));
                }
            }
        }
    }
    var_14 = ((((((((min(9581, -7181)))) * ((var_2 ? 9748713042918332634 : var_10))))) ? 1503 : var_3));
    var_15 = (((((var_1 ? var_12 : var_4))) == var_7));
    var_16 -= (max(((((min(var_5, 12629584401460423396))) ? (min(var_2, 15910029172951367473)) : ((1511 ? 8698031030791218979 : 59)))), ((min(var_6, ((((-2147483647 - 1) >= var_4))))))));
    #pragma endscop
}
