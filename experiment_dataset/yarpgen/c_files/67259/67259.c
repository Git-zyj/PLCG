/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (~(~var_6));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_11 -= 1978019911;
            arr_8 [2] [i_0] = (min((2083109442 < -17763), (((arr_0 [i_0] [i_1]) / (arr_0 [i_0] [i_1])))));
        }
        arr_9 [i_0] = ((((var_6 ? ((((arr_3 [i_0]) ? (arr_0 [i_0] [i_0]) : 818376471))) : var_2)) > ((((arr_6 [i_0] [i_0]) | (arr_3 [i_0]))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = var_4;
        arr_13 [1] = (arr_2 [i_2]);
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_17 [i_3] [i_3] = (min(((-1303716259 ? (arr_15 [i_3] [i_3]) : ((var_8 & (arr_15 [i_3] [i_3]))))), ((max(853175081775969924, 148)))));
        arr_18 [19] = (arr_16 [i_3]);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_12 = -1303716249;
        arr_22 [i_4] = (max((((var_4 && -853175081775969950) ? -253648948 : var_9)), (((arr_19 [i_4] [i_4]) | (((arr_19 [i_4] [i_4]) ? var_10 : (arr_20 [i_4])))))));
        arr_23 [i_4] = ((min(var_5, 2752)));
    }
    var_13 = (((var_6 && 126) ? (~1561882664855254305) : 52));
    var_14 = ((!((((167 ? -2147483641 : 186))))));
    #pragma endscop
}
