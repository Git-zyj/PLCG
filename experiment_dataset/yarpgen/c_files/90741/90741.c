/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_14 += (((min((arr_6 [i_0] [i_1] [i_2] [i_0]), (arr_6 [i_0] [i_1] [17] [i_2]))) ? 2414822110 : -19));
                    var_15 = (!var_6);
                    var_16 = (min(((2147483647 ? -3084644594894938380 : var_2)), (((93 ? 0 : 162)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_17 -= ((((9284316451113820068 << (arr_7 [i_0] [i_0] [i_0]))) < (((23 ? var_12 : var_11)))));
                    arr_10 [i_3] [i_1] [i_1] [i_0] = var_4;
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    var_18 = (((((var_4 / var_0) * 24506)) / -6905858830269195227));
                    var_19 = ((((((arr_14 [i_0] [i_0] [i_1] [i_4]) && (((var_0 ? 32767 : 758371112)))))) | -126));
                }
                var_20 = (min(var_20, ((((((-(max(var_0, var_9))))) ? (max(8716517247489600660, -21564)) : ((max(((((arr_13 [i_0] [i_0] [i_0] [i_0]) << 1))), -1409730263122750786))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {

        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            arr_20 [i_5] [i_5] [i_5] = 4294967295;
            var_21 = 1437388088;
        }
        arr_21 [i_5] = var_8;
        arr_22 [i_5] = 18446744073709551609;
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        arr_27 [i_7] = 15814776807791869378;
        var_22 = (((((-9736 ? (arr_24 [i_7]) : (arr_23 [i_7])))) ? (max(var_3, -1682024299)) : (((arr_8 [i_7] [i_7] [i_7]) ? var_9 : (arr_8 [i_7] [i_7] [i_7])))));
        arr_28 [i_7] = (((arr_11 [i_7]) ? (max(((-41 ? -1930079485 : -24507)), ((19226 ? -15290 : 24492)))) : 74));
        var_23 = (max((arr_23 [i_7]), (var_5 & 9604138705588773941)));
        arr_29 [i_7] = ((((((max(var_1, 3475684968))) ? var_8 : (min(var_10, 2034769858835193038)))) / (((2147483647 + (((arr_0 [i_7] [18]) / (arr_14 [i_7] [7] [i_7] [i_7]))))))));
    }
    var_24 = 13291570725919041840;
    #pragma endscop
}
