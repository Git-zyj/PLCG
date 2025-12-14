/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 *= (!(((234881024 ? (arr_0 [i_0 - 1]) : 4060086274))));
                var_18 = ((((((11414 && (arr_4 [i_0 - 2] [i_1]))) ? (((arr_4 [i_0] [i_1]) ? (arr_0 [6]) : -6532122484333903413)) : (0 & 2024789746))) ^ (164375172 / var_11)));
                arr_5 [i_1] [i_0] = (arr_3 [i_0 - 1] [i_0 + 1]);
                arr_6 [i_1] [i_1] [i_0] = (max(var_10, ((((arr_1 [i_0 + 1]) != (((arr_0 [i_1]) >> (-164375173 + 164375190))))))));
            }
        }
    }
    var_19 = ((-(((89 * var_12) ? ((var_10 >> (var_13 - 99))) : ((var_2 ? var_0 : -21482))))));
    var_20 = ((-21461 ? 43138 : 805614471800194849));
    var_21 = (((((((min(56, var_10)))) <= (980617205 % 6532122484333903405))) ? (((((min(-15473, var_0))) ? 32767 : (max(var_3, 933382726))))) : (((14 ? var_11 : 9192840924293339337)))));
    var_22 = var_8;
    #pragma endscop
}
