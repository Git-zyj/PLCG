/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 - 1] [18] [18] [i_1] = (max((min((!201), ((16796554172608423578 ? var_10 : (arr_1 [i_1 + 1]))))), 16796554172608423554));
                                var_12 += (arr_0 [i_1]);
                            }
                        }
                    }
                    var_13 = (min(16796554172608423560, 16796554172608423576));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_20 [i_6 + 1] [i_0 - 1] [i_6 + 1] [i_5 - 2] [i_6] [i_1] [i_1] = var_10;
                                var_14 = (min(var_14, (((((max((arr_13 [i_2] [i_2] [i_0 - 4] [i_2]), (arr_13 [i_0] [i_0 + 1] [i_0 - 4] [i_5])))) ? (((((arr_13 [i_0] [i_0 - 3] [i_0 - 1] [i_1 + 1]) != (arr_13 [i_0] [i_0] [i_0 + 1] [i_1]))))) : (~1650189901101128056))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_15 = (max(var_15, ((min((arr_2 [5] [5]), (((51 ? -15371 : 75))))))));
                arr_26 [i_8] = (max((min((205 / 16796554172608423574), (26 && 1650189901101128061))), ((((arr_3 [i_7]) ? -516935763 : (arr_3 [i_8]))))));
                arr_27 [i_8] = 16796554172608423565;
            }
        }
    }
    var_16 = (((((~-1796518026084347334) ? ((var_0 ? var_6 : var_6)) : var_7)) * var_0));
    var_17 = (max(var_17, ((min(var_6, ((16796554172608423551 ? 174 : 1650189901101128038)))))));
    #pragma endscop
}
