/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-83 ? ((((max(0, 16915002393785324065)) == (21975 + 34)))) : (((((max(0, var_11))) || var_1)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            var_21 &= ((((min((1 != var_0), (max(1, 518267890))))) ^ 3622218289224601810));
            var_22 = (min(var_22, (arr_4 [i_1 + 1] [i_0])));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_23 &= (((arr_3 [i_3]) >= (arr_9 [i_4] [i_2] [i_2] [i_0] [i_0])));
                        arr_11 [i_0] [i_2] [17] = (max(((max(239, (arr_9 [i_4] [i_2] [i_3] [i_2] [i_0])))), (min(var_10, (arr_9 [i_4] [i_2] [i_2] [i_2] [i_0])))));
                        arr_12 [i_0] &= max((((((var_15 ? -684779140728291001 : 0))) ? (arr_4 [i_0] [i_4]) : (((arr_7 [i_0] [i_0]) - (-127 - 1))))), (min((arr_7 [i_4] [i_4]), ((min(var_7, (arr_2 [i_2])))))));
                        var_24 &= ((((max(((-27922 ? (arr_8 [i_0] [i_2] [i_3] [i_4]) : (arr_4 [i_0] [i_3]))), var_15))) ? (((((4294967295 ? (arr_2 [i_2]) : -601))) ? (min((arr_7 [i_4] [i_4]), 172460479)) : (arr_4 [i_2] [i_3]))) : (((max((arr_10 [i_3] [i_3] [i_3]), ((max((arr_9 [i_2] [i_3] [i_3] [i_4] [i_3]), (arr_0 [i_0]))))))))));
                    }
                }
            }
            arr_13 [i_2] = (((min((arr_4 [i_0] [i_2]), (arr_4 [i_2] [i_0]))) ? (((((max((arr_0 [i_0]), 43560)))) % (max(614889055971357267, var_0)))) : (arr_1 [i_0])));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_18 [i_0] [2] [i_5] = ((((min((((arr_7 [i_0] [i_5]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : -3622218289224601810)), (arr_6 [i_0] [i_0] [i_0])))) && (arr_10 [i_0] [i_0] [i_0])));
            var_25 = (max(var_25, ((min((((max((arr_5 [i_5]), (arr_9 [i_0] [i_5] [i_0] [i_0] [1]))))), (max((((arr_1 [i_5]) ? var_1 : 0)), ((0 + (arr_6 [i_0] [i_0] [i_5]))))))))));
        }
        var_26 = 7214646768714799272;
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] &= (min(((((min(17557161123144989618, var_17))) ? (min(3650526926054227789, 21975)) : 0)), ((min(2356639357, (arr_19 [i_6]))))));
        var_27 = (max((max(((max(66, var_0))), (max(2356639357, 0)))), 65535));
        arr_22 [i_6] [i_6] = 4534302658992883518;
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
    {
        var_28 &= ((((max(((min((arr_24 [i_7]), 95))), (min(var_16, (arr_25 [i_7])))))) ? ((min((min((arr_23 [22]), (arr_19 [i_7]))), (((0 ^ (arr_25 [i_7]))))))) : (max((arr_26 [i_7]), ((max(-1, var_4)))))));
        arr_27 [i_7] = (max((min((arr_26 [i_7]), (arr_25 [i_7]))), (arr_25 [i_7])));
        var_29 = (min(((var_4 ? (min((arr_19 [i_7]), (arr_24 [i_7]))) : (((arr_26 [i_7]) ? var_5 : -2634338627343563314)))), (min((arr_25 [i_7]), (max(var_19, (arr_23 [i_7])))))));
        var_30 = (min((((4113204966 ? (arr_20 [i_7] [i_7]) : (arr_19 [i_7])))), (min((arr_26 [i_7]), var_7))));
    }
    var_31 = var_11;
    #pragma endscop
}
