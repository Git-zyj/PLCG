/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_20 = (((((((123 ? -1626857477 : 1557563943)) - (1557563962 / 2737403357)))) * (((arr_2 [i_0]) / (arr_0 [i_0])))));
        var_21 ^= ((((((arr_2 [10]) ? (((arr_1 [0] [9]) ? var_14 : var_18)) : (((886327943 ? var_10 : (arr_0 [i_0]))))))) ? (~-1960288055) : ((((((arr_0 [i_0]) | (arr_2 [i_0])))) ? (((((arr_0 [i_0]) && (arr_0 [i_0]))))) : var_5))));
        var_22 = (((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) % (arr_1 [i_0] [i_0]))) : (((arr_1 [i_0] [13]) | (arr_1 [i_0] [i_0]))));
        arr_3 [16] [i_0] |= (((1501023479 & 15656204345405089247) ? (((arr_0 [i_0]) | (arr_2 [i_0]))) : var_9));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1 - 1] [i_1] = (((arr_7 [i_0] [i_0] [i_2 + 1] [i_2]) ^ ((~(arr_7 [i_0] [i_0] [17] [11])))));
                    arr_12 [i_1] [14] [i_2] = (((max((arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2]), (arr_7 [i_2] [i_2] [i_2 + 2] [i_2]))) > (arr_1 [i_1 - 2] [i_1 - 2])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = ((arr_2 [i_3]) % (3140415482 / 1557563935));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                {
                    var_23 = (((((-(arr_14 [i_4 - 1] [i_5 - 1])))) ? (arr_8 [i_3] [14] [i_3] [i_3]) : (((-(((arr_4 [i_3] [i_3]) ? 1073479680 : var_16)))))));
                    arr_21 [i_5 - 1] [6] [6] = 0;
                    var_24 = (min(var_24, (((((!((min((arr_14 [i_3] [i_3]), var_12))))) ? var_10 : var_7)))));
                    var_25 ^= (((arr_17 [i_3] [i_3]) & ((~(arr_15 [i_3])))));
                    arr_22 [i_3] [i_3] [i_3] = ((((((min(var_6, 2737403357))) & (max(1679272587, var_12))))) ? (((~(~var_7)))) : ((max(-96, var_13))));
                }
            }
        }
    }
    var_26 = (max(var_26, (((var_16 ? (min(95, 0)) : var_7)))));
    var_27 += var_13;
    var_28 = (((((var_13 << (var_9 - 345661789)))) ? var_4 : (min(((var_10 ? var_10 : var_19)), 3055804026))));
    #pragma endscop
}
