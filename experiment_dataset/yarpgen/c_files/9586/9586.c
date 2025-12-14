/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (min(((max(((var_5 >> (((arr_1 [i_0]) - 1468382148)))), 14358))), (max((arr_0 [i_0] [i_0]), (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((min((var_13 && var_5), ((min((arr_1 [11]), 60981))))))));
                    var_18 = (max(var_18, (((!((max(4165583060274447354, 122880))))))));
                }
            }
        }
    }
    var_19 = (min(-var_0, (((9946327501630082042 <= -4165583060274447354) + var_10))));
    #pragma endscop
}
