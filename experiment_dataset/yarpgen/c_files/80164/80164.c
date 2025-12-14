/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~40305);

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_12 = ((96 ? (min(var_0, ((6 ? 12902291748171532085 : 3196156664836384808)))) : (min((((73 >> (((arr_1 [i_0 + 1]) - 64387))))), ((164 ? (arr_1 [i_0 - 1]) : var_4))))));
        var_13 *= (arr_1 [i_0 + 1]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (max(var_14, (((~((((843892519961733645 ? 90 : 32764)) * (((!(arr_2 [i_1])))))))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    arr_8 [i_1] = ((2816 ? -1355175423 : -7));
                    arr_9 [i_1] [i_3] = (((((~(((arr_2 [i_1]) ? var_8 : var_2))))) + (max((~var_1), ((((arr_3 [i_1] [i_2]) > -1)))))));
                    var_15 *= (((1 || -1221515727) != ((((min((arr_1 [i_1]), -16529))) ? (-31502 != 9223372036854775807) : (!-19)))));
                    var_16 = (min(var_16, (((-(arr_3 [i_2 + 1] [i_2 + 1]))))));
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 17;i_4 += 1)
    {
        arr_12 [i_4 + 2] = (max(55, 182));
        var_17 *= (((arr_11 [i_4 + 1]) ? ((((var_5 ? var_7 : (-127 - 1))))) : (max(var_10, 13946012328264390286))));
        var_18 &= ((2840073268320694270 - ((var_6 ? -859301298737185915 : (((var_5 ? 68 : 1844131941)))))));
        arr_13 [i_4] = (arr_0 [i_4] [i_4 + 1]);
    }
    var_19 = (((max((2008053289 + 14398), var_10))) || (((((max(var_0, var_6))) ? var_8 : (max(var_1, var_9))))));
    #pragma endscop
}
