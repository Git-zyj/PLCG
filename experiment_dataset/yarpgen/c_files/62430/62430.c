/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min((((var_10 + 9223372036854775807) >> ((((var_12 >> (var_10 + 2799724319501355078))) - 44839937463158710)))), var_2);
    var_21 = (max((7542825442049185085 | var_18), (min((max(var_12, (-9223372036854775807 - 1))), ((var_18 >> (var_17 + 1095720595)))))));
    var_22 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1 - 1] [i_1 - 1] [8] = (((((((min((-9223372036854775807 - 1), (arr_0 [i_1 - 2] [i_1]))) + 9223372036854775807)) + 9223372036854775807)) >> (((min(10903918631660366508, (max(15219155101734432747, var_13)))) - 10903918631660366491))));
                var_23 = ((((var_8 >> (var_14 - 17900021075510472573))) >> (!3768000001647251138)));
                var_24 *= (((((max(9223372036854775807, 9223372036854775791)) >> ((((9223372036854775788 >> (((arr_0 [i_0] [i_1]) + 1751289871)))) - 1073741761))))) ? ((min((min(3768000001647251138, var_17)), (((247311721 >> (-2097152 + 2097178))))))) : ((((~(arr_4 [i_1 - 1]))) >> (-10903918631660366523 - 7542825442049185033))));
            }
        }
    }
    #pragma endscop
}
