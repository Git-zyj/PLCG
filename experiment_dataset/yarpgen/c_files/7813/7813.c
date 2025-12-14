/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [1] = (((max(1997582495, ((((arr_1 [i_0] [i_0]) != 1))))) | ((65535 & (~29609)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = ((arr_0 [i_0]) ? (((arr_1 [i_0] [i_0]) ^ (arr_3 [i_0] [i_0] [i_0]))) : ((((arr_0 [i_0]) || var_7))));
            arr_7 [i_0] = 0;
            var_19 = (max(var_19, (((-var_15 ? (((var_1 <= (arr_0 [2])))) : 65535)))));
        }
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_20 = (max(var_20, (((((max((arr_1 [i_4] [i_4]), (arr_1 [i_4] [i_4])))) ? ((var_13 ^ ((((arr_4 [i_4] [i_4]) ? (arr_15 [i_2]) : var_5))))) : (arr_5 [i_2] [i_3]))))));
                    var_21 = (((((((1 != (arr_15 [i_2]))) ? 20109 : ((var_3 ? 65535 : -1))))) != ((((min(1997582487, 5))) & (var_5 % 4510313258793308996)))));
                }
            }
        }
        arr_16 [i_2] = ((((((10 / (arr_1 [i_2] [12])))) - 4294967290)) - (((-9652 ? 65415 : (1997582489 / 1)))));
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = (max(((min(((max((arr_0 [i_5]), (arr_18 [i_5] [i_5])))), var_15))), (arr_10 [i_5 - 2])));
        arr_20 [12] |= (((min(10925194876069154871, ((((arr_14 [i_5 - 1]) ? 15496 : 65521))))) / 12752321208605049592));

        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {
            var_22 += (((((-(((arr_9 [i_5]) ? (arr_9 [i_5]) : (arr_8 [i_5])))))) ? (((arr_18 [i_5] [i_6]) ^ (!0))) : ((~(arr_13 [1] [1] [i_6])))));
            var_23 *= (max(1, -8));
            var_24 = (((2 < 2177210059) ? -88 : 15490));
            arr_24 [i_5] [i_6] [i_5] = (4199190651961960385 != 274877906943);
            var_25 |= (arr_4 [i_6] [i_6]);
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
        {
            var_26 = (((arr_1 [i_5] [i_5]) <= ((1454383066 << (16093772016407648638 - 16093772016407648633)))));
            var_27 = (arr_4 [i_5] [i_7]);
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 8;i_8 += 1)
    {
        var_28 ^= (arr_23 [i_8 - 1]);
        var_29 = (min(var_29, ((((!1413856360) ? (((var_5 ? (arr_0 [i_8]) : (arr_28 [i_8 - 2])))) : (~2259707840))))));
        var_30 = (arr_26 [i_8]);
    }
    var_31 = ((((max(var_17, (8092 * 12372998354869178662)))) && ((((var_3 && var_12) - ((var_0 ? var_8 : 1198304250)))))));
    var_32 ^= (-3 - var_9);
    #pragma endscop
}
