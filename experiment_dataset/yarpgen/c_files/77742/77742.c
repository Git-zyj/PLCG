/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = ((((((((-(arr_0 [i_0])))) ? ((6264 ? 15298 : 96)) : 10))) ? (((((var_0 ? var_13 : 45558))) - var_16)) : ((((((var_1 ? 0 : 5184284233778937506))) ? 16714 : ((min(var_14, 49941))))))));
                var_18 = (min((((arr_4 [i_0 - 2] [i_0]) & ((3958154510871894605 ? var_1 : 3)))), (((-(arr_1 [i_0 + 1] [i_1]))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    {
                        var_19 = (max(16138, ((((min((arr_11 [i_3] [i_3] [i_5]), (arr_10 [i_2] [i_3])))) ? ((((arr_4 [i_3] [i_5 + 1]) != 51640))) : ((((arr_11 [i_5] [i_3] [i_2]) && (arr_8 [i_2] [i_2] [10]))))))));
                        var_20 = (arr_6 [i_5]);
                    }
                }
            }
        }
        arr_15 [i_2] = (((((min(38714, var_10))) >= var_0)));
        var_21 = (min(var_21, (((arr_8 [i_2] [i_2] [8]) ? (((arr_3 [i_2] [i_2]) ? (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_7 [i_2] [i_2]))) : (((~(((arr_0 [i_2]) + (arr_1 [i_2] [i_2]))))))))));
        var_22 = ((((((!var_1) ? (arr_14 [6]) : ((var_10 ? var_16 : 32767))))) ? (max(7961439480930088745, (arr_0 [i_2]))) : (16383 && -22)));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_23 = ((~(!6619229195279155095)));
        var_24 = var_12;
        arr_18 [i_6] [i_6] = (arr_2 [i_6]);
    }
    var_25 = var_13;
    var_26 = var_10;
    var_27 = 4755365460546435402;
    #pragma endscop
}
