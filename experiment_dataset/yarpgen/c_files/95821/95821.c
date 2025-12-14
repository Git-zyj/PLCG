/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_1);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = 3956238715;
        arr_3 [i_0] = (max(0, 2));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_16 += (arr_4 [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    {
                        var_17 = (-20537 ? 0 : (5026232329729681732 - 255));
                        var_18 = (((arr_9 [i_1]) ? (arr_11 [i_2 + 1] [i_1 - 2] [i_4 - 2]) : (arr_9 [14])));
                        arr_17 [i_1] [i_1] [i_3] [i_4 - 1] = (((arr_7 [i_1]) ^ (arr_8 [i_3 - 1] [i_2 - 1])));
                    }
                }
            }
        }
        arr_18 [i_1 + 4] &= 5026232329729681732;
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = (!5026232329729681732);
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 12;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_19 = min(55, 739070625);
                                var_20 = (((arr_31 [i_7 + 1] [i_7 + 1] [1] [i_6 - 3]) >= (((arr_16 [i_7] [i_7 + 1] [i_7] [11]) ? (arr_31 [i_7 + 1] [i_7 + 1] [i_8] [i_6 - 3]) : (arr_16 [i_7 - 3] [i_7 - 1] [i_7 - 3] [i_7])))));
                            }
                        }
                    }
                    arr_32 [i_5] = 43847;
                    arr_33 [i_5] [i_5] = var_5;
                    var_21 ^= (((((((min((arr_16 [i_5] [i_5] [i_6 + 3] [i_5]), 254)))) / (min(248, 13420511743979869911)))) > (((((22 || (arr_12 [i_5] [i_6 - 4] [i_5]))) ? (arr_8 [i_6] [i_6]) : (arr_28 [i_7 + 3] [i_6 + 2]))))));
                }
            }
        }
        var_22 = 1;
    }
    var_23 = var_7;
    var_24 = 2;
    var_25 = (min((~21689), (((((42171 ? 394551914 : var_2))) ? 233 : (-1680745562339529506 && -3610153273467635005)))));
    #pragma endscop
}
