/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_18 -= var_3;
                var_19 = (max(var_19, (((((((((1887399891 ? -1887399891 : 255))) ? (min(-1887399917, var_11)) : (!var_16)))) ? (((((var_2 ? var_7 : var_13))) ? (((arr_2 [i_0]) ? var_14 : 14085167861280567258)) : (max(var_1, 2725600731)))) : (!var_3))))));
                arr_4 [i_0] [i_0] = (((max((min(9223372036854775798, -1887399905)), (min(var_8, -1887399872))))) ? -121 : (((arr_2 [i_1 + 1]) ? (var_3 ^ 48771685) : ((18798 ? 3719000932 : var_3)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (max(((var_13 ? (arr_13 [i_3 + 1] [i_4]) : 3632459049)), ((((arr_13 [i_1 + 2] [i_1 + 2]) ? (arr_13 [i_2 - 1] [i_1 + 1]) : var_7)))))));
                                var_21 = (max(var_21, (max((((((min(var_17, 5947400876675270345))) ? 1 : 46737))), (min((min(-37, 18446744073709551615)), (((-(arr_7 [0]))))))))));
                                var_22 -= ((((((((arr_9 [i_0] [i_0] [i_0] [i_0]) / 662508247)) ^ var_11))) ? (((((var_15 ? (arr_8 [i_4]) : var_14))) ? ((((-1887399918 && (-2147483647 - 1))))) : (max((arr_9 [i_1] [i_1] [1] [11]), var_7)))) : 29987));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_23 |= -var_8;
                            arr_21 [i_5] [i_1] [i_5] [i_6] = (min(((var_14 ? var_10 : 0)), (((max(1887399918, var_5))))));
                            var_24 = (max(var_24, (((((max(724583737, var_17))) ? (max(-1887399917, 3278335755261762430)) : ((((~var_4) ? var_15 : (~46738)))))))));
                        }
                    }
                }
            }
        }
    }
    var_25 = (min((((((31038 ? var_7 : var_9))) ? ((max(var_7, 1895618853))) : 9223372036854775785)), (3493283433 < var_2)));
    #pragma endscop
}
