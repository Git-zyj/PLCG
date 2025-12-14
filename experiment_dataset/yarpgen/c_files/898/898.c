/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((((max(1729333854, -2905756654851090472)) * ((min(var_0, var_0))))), (min(-var_0, -0)));
    var_17 &= ((((max(-var_1, 255))) ? var_13 : (((((2565633435 ? var_8 : 4294967286))) ? (var_12 > var_4) : (var_5 && var_0)))));
    var_18 = (min(var_18, ((max((min(4269697520, var_14)), 1152921504606846848)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = ((var_10 ? (((65518 << (-3385711349892759511 + 3385711349892759522)))) : (-2567642208147960177 / var_12)));
                    arr_8 [i_0] [i_1] [i_2 - 2] = max(((-(~var_10))), ((((((arr_0 [i_0]) ? (arr_0 [i_1]) : (arr_4 [i_0 + 3] [i_0])))) ? (((arr_6 [i_0] [i_0] [i_2]) / 4872991719647412315)) : -18)));
                    var_20 = (max(var_20, ((((arr_3 [i_0 + 2] [i_0 + 2] [i_2]) ? (3385711349892759510 / 3256232350) : 2291735086)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 - 1] [i_1] [i_2 + 1] = (max(-50299, (arr_6 [i_0 + 3] [i_0 + 3] [i_0 + 2])));
                                var_21 = (arr_7 [i_0] [i_0] [i_2] [i_3]);
                                var_22 = 2;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
