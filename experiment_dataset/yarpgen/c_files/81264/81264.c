/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_1, var_13));
    var_15 = (1 >> 1);
    var_16 = ((((((var_13 ? var_1 : 1)))) ? 0 : (((var_6 && var_4) ? (!var_0) : var_6))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0 + 2] = (((((min((arr_0 [3] [i_0]), var_8))) ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 - 1] [i_0 + 1]))));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = var_4;
            var_17 = (min(var_17, ((max(3927772409893780562, 17)))));
            var_18 = ((~(max((min(var_2, 2509186046)), ((min(var_0, var_3)))))));
        }
        var_19 = (((((min(264227403, var_6))) ? 91 : (max((arr_1 [i_0]), var_1)))) - (max(var_12, ((((arr_0 [i_0] [i_0]) || (arr_0 [i_0] [i_0])))))));
        var_20 = (min((!8), (var_9 != -var_0)));
    }
    for (int i_2 = 3; i_2 < 7;i_2 += 1)
    {
        var_21 = var_11;
        arr_8 [i_2] = 708133353;
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        var_22 = ((11131475768260756347 / (min(((13 ? 1785781252 : 112634492371670996)), (24 ^ -8)))));
        arr_11 [5] |= (((arr_9 [i_3]) != -30169));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        var_23 = ((((((((var_3 ? var_3 : -112))) ? var_5 : (((arr_14 [i_4]) - (arr_12 [i_4])))))) & (((-(arr_9 [i_4]))))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    var_24 = 1785781249;
                    arr_20 [i_4] [i_5] [8] [i_4] |= (max(((3927772409893780583 ? (((max((arr_13 [17] [i_5]), (arr_13 [i_6] [i_5]))))) : ((4190728477 ? 1837750045 : 0)))), (!var_3)));
                    arr_21 [i_4] [22] [i_5] = ((~((((min(var_7, var_9))) ? (~var_2) : (arr_12 [i_4])))));
                    var_25 *= max((~18446744073709551598), (((var_1 % (arr_9 [i_4])))));
                    arr_22 [12] [i_5] [i_5] [i_6] = (((89 ? (arr_14 [i_5 - 1]) : (arr_14 [i_5 + 1]))));
                }
            }
        }
        var_26 = (max(var_26, ((max((((!var_7) & (!var_6))), ((((((max(5, 30168)))) >= 16))))))));
        var_27 = (max(var_27, (((((-(max(var_0, 1228396631)))) | ((((((min((arr_13 [i_4] [i_4]), 112))) != (!18068377322489586837))))))))));
    }
    var_28 = (max(var_28, (((((((max(var_4, -30892)) % var_0))) ? ((max(var_12, (min(669084280, 144))))) : 12192878182995484708)))));
    #pragma endscop
}
