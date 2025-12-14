/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((5330053672142261679 ? 1654312802 : 790030582)) >> (var_7 - 4120645293))));
    var_18 -= var_9;
    var_19 = (((var_12 ? (var_4 / var_15) : 3510415495)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_2] [i_0] [i_0] = (((arr_2 [i_0]) + ((min(1, 1)))));
                    var_20 = (max(var_20, (((1 % (((-6537812481812048548 + 9223372036854775807) >> 1)))))));
                }
                var_21 = ((444190108 ? -6943 : 1));
                /* LoopNest 3 */
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_22 = (max(var_22, ((+((((((arr_10 [4]) ? (arr_17 [i_0] [10] [1] [4] [i_5] [i_5]) : var_10)) > (((var_10 ? 250 : 15))))))))));
                                var_23 &= var_16;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_24 -= (max(((min(((1 ? 243 : 1)), 5))), (min(((((arr_19 [i_6] [i_7]) + (arr_25 [15] [i_10])))), var_14))));
                                var_25 = (min((min((!var_13), (((arr_33 [i_6] [i_6] [i_8] [i_9] [i_10]) ? (arr_23 [i_8]) : (arr_25 [i_7] [i_8]))))), ((800660585 - (arr_33 [i_6] [i_7] [i_8] [i_9] [i_10])))));
                            }
                        }
                    }
                }
                var_26 += (1 % -1);
            }
        }
    }
    #pragma endscop
}
