/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_15 [i_3] [i_0] [i_3] = (16128 - 16128);
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [11] = ((((min(var_8, 12902))) ? (min((arr_13 [i_1] [i_3] [i_0] [i_1] [i_4]), var_3)) : (((arr_13 [i_4] [10] [i_0] [i_4] [i_4]) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_1] [14] [i_3] [i_0])))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    {
                        var_13 = (max(var_13, ((((0 ? 41486 : 0))))));
                        var_14 = 22;
                    }
                }
            }
            var_15 = (max(var_15, (((!((((((arr_11 [2] [0] [2] [i_1] [i_1]) ? var_2 : 49407))) && (!16103))))))));
        }
        var_16 = (max(var_16, (((~((24050 ? 1 : 11290345709459714591)))))));
    }
    var_17 = 6186582191392869937;
    var_18 ^= ((var_7 ? ((var_6 ? (~1) : ((var_11 ? 1 : var_1)))) : (1305415708 | -1)));

    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_19 = ((1 ? 24071 : 1));
        var_20 = (min(var_20, (((252 ? (((!((max(24061, (arr_26 [i_7 - 1]))))))) : 1)))));
    }
    #pragma endscop
}
