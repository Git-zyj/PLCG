/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((-var_0 ? ((((435215463 && (var_6 && 3859751833))))) : (min((var_2 && var_8), (min(var_4, var_8))))));
    var_11 *= (min((min((~var_1), (435215463 & 435215472))), (435215451 * var_1)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 += (~(((arr_4 [i_0 - 3]) - (arr_4 [i_0 - 3]))));
                var_13 = (max(((((((435215436 ? (arr_3 [10] [i_1]) : (arr_4 [i_0])))) || ((3859751824 <= (arr_1 [i_1])))))), 3859751844));
            }
        }
    }
    var_14 = var_7;
    #pragma endscop
}
