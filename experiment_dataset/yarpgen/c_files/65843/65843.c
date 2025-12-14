/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 &= (-69 * -1985);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = (max((((((max(var_14, var_14)))) | 2147221504)), ((max(((1966 ? 1960 : -1993)), (1993 * -1975))))));
                arr_8 [i_1] [i_0] [i_1] = (min((max(-var_5, ((((arr_3 [i_1] [i_0] [i_1]) << (var_0 - 3455845683)))))), (((!((var_12 == (arr_1 [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
