/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-var_0 ? ((49670 ? 1 : -11)) : 11));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 += (min((min(11, ((-1391412088 ? 1099873244 : 94)))), ((min(var_2, ((var_5 ? 11 : 11)))))));
        var_12 = (((((((var_1 ? var_3 : var_3))) >= var_7)) ? (~var_1) : ((var_5 ? ((var_1 ? var_0 : 2510347328333743474)) : (((min(var_0, var_6))))))));
        arr_2 [i_0] [i_0] = var_9;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [3] [i_1] [i_0] = ((((((var_7 * 11) ? 2147483647 : 5378951457403897929))) ? ((((min(var_3, var_8))))) : (max(-24, (max((-9223372036854775807 - 1), var_8))))));
            arr_6 [4] [i_0] = (-((11376 - ((min(-11531, var_6))))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_13 = (9223372036854775807 <= 915650619);
            var_14 = (((var_7 << (((var_8 + 1505864913) - 9)))));
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_15 = (max(var_15, ((((max(var_1, var_0)))))));

        /* vectorizable */
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            var_16 = ((2147483647 ? -2147483647 : 4294967295));
            var_17 = (var_5 * 162);
            arr_13 [i_4] [12] = -var_5;
            var_18 = ((46177 * ((-2147483647 ? var_5 : var_6))));
        }
    }
    var_19 &= (max(9223372036854775807, ((((var_4 & var_2) ? ((var_2 ? var_2 : 252)) : var_4)))));
    var_20 = (min(var_2, (((((11376 ? var_0 : 2147483647))) ? (((1 ? var_3 : var_6))) : (61487 & 3368709274)))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_21 = (2147483647 <= var_7);
                    var_22 = (max(var_22, (((((max((!15696194572471495041), (max(var_3, var_5))))) ? var_6 : var_2)))));
                    arr_21 [i_6] [i_6] [9] = (8632864415979742634 && 1);
                }
            }
        }
    }
    #pragma endscop
}
