/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((((!(~var_15))) ? 31 : (max(1894404223, 1))));
    var_19 -= ((0 ? (((((var_1 ? 0 : 31))) ? var_11 : 657617869870121830)) : var_2));
    var_20 = ((((((var_8 && (((var_12 ? -2 : var_7))))))) * (((((var_12 ? 2 : 2))) ? (((max(33, 224)))) : var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = ((((((1 ^ (arr_7 [i_4] [i_0] [i_3] [i_2] [i_0] [i_0]))) ? (arr_7 [i_0] [i_0] [i_1] [i_0] [i_3 - 1] [i_4]) : (max(var_7, var_8))))));
                                var_22 = ((1 ? ((var_4 ? 228 : var_1)) : ((((((arr_10 [i_0] [i_1] [i_2] [i_3 + 1] [i_2]) ? (arr_7 [i_0] [i_0] [11] [i_3] [8] [i_4]) : (arr_3 [i_0] [i_1] [1])))) ? (((arr_2 [i_0] [i_2]) ? 12240 : (arr_3 [i_0] [i_0] [i_2]))) : ((-1 ? (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_1))))));
                                var_23 *= ((1077222872582923511 ? (((((882254362 ? var_16 : var_11))) ? (14899209136719928522 || -1727177320711855076) : (-2045402504 - 1))) : (2045402504 <= -1448880402)));
                            }
                        }
                    }
                    var_24 = -13;
                    arr_12 [i_0] [i_2] [i_0] [i_2] = (arr_7 [0] [i_1] [i_1] [i_1] [i_1] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
