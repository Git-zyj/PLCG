/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 *= (arr_0 [6]);
        arr_2 [i_0] = ((+(min((arr_0 [5]), -40502562))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1] = (((arr_5 [i_0] [i_0]) ? (((arr_5 [i_0] [i_1]) ^ (var_15 >> var_11))) : (((min(var_2, -2))))));
            var_18 = 1;
        }
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_19 = ((((133 ? 59140 : 0)) < 9703461345538221776));
        arr_11 [i_2] [i_2] = (arr_9 [6] [7]);
        arr_12 [i_2] [i_2] = ((152 ? 0 : 1));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_20 = ((((((arr_8 [i_3]) << (-7845452238089464766 + 7845452238089464772)))) ? (max(-4226, var_12)) : (((234 ^ (arr_8 [i_4]))))));
                    arr_18 [i_2] [i_2] [6] = ((((((((arr_15 [i_4]) || (arr_10 [i_2])))) % (arr_14 [i_2]))) > -21566));
                    var_21 = ((((((~var_6) ^ (~127)))) ? (((min(64358, ((max(228, 228))))))) : ((~(((arr_15 [i_4]) & var_5))))));
                }
            }
        }
    }
    #pragma endscop
}
