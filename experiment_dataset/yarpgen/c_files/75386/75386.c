/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] = (arr_3 [i_0] [i_1]);
                var_12 ^= (((arr_2 [i_1]) * ((((arr_3 [11] [i_1]) && var_1)))));
                var_13 = (min(var_13, ((((((arr_0 [i_0] [i_0]) << (((arr_0 [i_1] [i_1]) - 79)))) - (((arr_2 [i_1]) ^ (arr_2 [i_1]))))))));
                var_14 = ((!((((min(1800884114771156788, (arr_5 [i_1] [i_1]))) - (arr_2 [i_1]))))));
                var_15 = (7331378903033580663 == 288230376151711743);
            }
        }
    }
    var_16 = ((((min(var_8, var_8))) == (-15282 > 5469545600656453652)));
    #pragma endscop
}
