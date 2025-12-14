/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((var_11 ? 14363101705196577162 : -3249892164109540574))) ? 14403815556834409280 : (((-3249892164109540574 ? 13 : 1649267441664)))))) ? var_8 : var_6));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_21 = 63;
        var_22 = (max(var_22, (min((((((var_13 ? 524256 : 9205357638345293824))) ? (min(var_10, var_4)) : 163)), (min(var_13, ((max(0, 188)))))))));
        var_23 = ((((min(-6794945653594803411, 67))) ? var_6 : (max((max(var_7, var_9)), (((var_6 ? 65511 : var_9)))))));
        var_24 = (max(var_24, ((min(((var_2 ? (min(67, var_10)) : (4294967295 == var_17))), (min(var_8, 2374726245368707859)))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_4 [14] |= ((var_18 ? (max((min(188, 0)), (min(var_16, var_8)))) : ((((var_13 ? 524243 : -202476297540547471)) << (((min(var_5, var_3)) - 5856927330945373519))))));
        var_25 *= (max(((var_19 ? var_5 : -2374726245368707859)), (min(534773760, var_19))));
        arr_5 [i_1] [i_1] = (max(((((min(0, 5164862873769447836))) ? -164024276 : (max(var_0, var_16)))), ((max(0, 65528)))));
        var_26 = (max((min(0, var_6)), (5726277311903044527 | 529596440028830034)));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_27 += ((((min(1, 0))) ? (var_3 / 26136) : ((var_18 ? 15 : 63))));
        var_28 = (max(var_28, ((min(-4861201097410830256, 216613289)))));
        var_29 = ((var_6 ? (min(var_5, 28)) : var_3));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_30 += (0 < 0);
        var_31 ^= (-6269879454984853409 ? ((min(43, -1))) : 11893654099680426610);
        var_32 = max((min(var_7, 8388352)), ((var_9 ? var_18 : var_2)));
    }
    var_33 &= -3066289859965613718;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                var_34 = (min(((min(1799970664, 199))), var_11));
                arr_16 [i_4] [i_4] &= (min(var_12, (min(((min(85, 536870784))), (0 % var_5)))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_24 [i_4] [i_7] [i_7] [i_7] [i_7] = 17219064699282873076;
                                var_35 = ((1 ? (((var_12 ? 252 : (min(-6084925212582905989, 1458349546699891442))))) : ((((min(var_1, var_3))) ? var_4 : (min(1, 72057594037403648))))));
                                var_36 = (max(var_36, ((min((max(var_10, 16128)), (14 && var_1))))));
                                var_37 = (max(var_37, ((min(((var_5 ? -4569207757461166459 : 0)), -1604043030)))));
                                var_38 = 29;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
