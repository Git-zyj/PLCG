/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= min(var_16, (max(var_0, var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (((((!((min(43538, 3307409993735607031)))))) >> (1358183426307594060 - 1358183426307594033)));
                arr_6 [i_1] [i_1] = (min((((min(3307409993735607031, var_15)))), (min(((9223372036854775807 ? 3307409993735607009 : var_15)), ((min(0, var_16)))))));
                arr_7 [i_1] [i_1] [i_1] = (((((((min(1358183426307594075, -1601719768))) * (min(var_7, -1))))) ? 224 : 32767));

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    arr_12 [i_1] = ((((min(var_8, var_1))) ? 15139334079973944591 : (arr_2 [i_1 - 1])));
                    var_19 = 139;
                }
                arr_13 [i_1] = ((var_11 >= (((((766981443 ? 2064587291303082547 : var_15))) ? (!139) : ((var_2 ? 1 : var_2))))));
            }
        }
    }
    #pragma endscop
}
