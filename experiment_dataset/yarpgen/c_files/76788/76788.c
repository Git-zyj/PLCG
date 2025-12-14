/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_18 = ((((-(arr_6 [10] [i_1] [i_1]))) + ((((arr_7 [i_2 + 1] [i_2 + 1] [i_1]) ? var_16 : (arr_5 [i_2] [i_2 + 1] [i_1] [i_2 - 1]))))));
                    var_19 ^= ((18446744073709551610 ? 7 : 19564));

                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_1] [i_1] = 7;
                        arr_13 [i_0] [3] [i_0] [i_0] [i_1] [i_0] = var_10;
                        var_20 = var_2;
                        var_21 |= (((max(((max(19564, 19553))), (min(-1, var_16)))) % (arr_10 [i_3 - 2] [i_3] [i_3] [i_3 - 1])));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_22 = -20;
                        arr_17 [i_0] [i_0] [i_2] [i_1] = ((max((min(var_0, (arr_15 [i_4] [i_2])), (arr_0 [i_1] [i_1])))));
                    }
                    var_23 = (!-0);
                    var_24 = var_16;
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_25 ^= (max((arr_0 [i_1] [11]), -17));
                    arr_21 [i_0] [i_1] [8] [i_1] = 12;

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_26 -= 0;
                        var_27 = (max(var_27, (((((((max(2786, (arr_3 [i_0] [3])))) ? (min(-2830372832981078881, -6695338170069665192)) : ((((var_2 > (arr_10 [i_0] [i_0] [i_0] [i_0]))))))) ^ ((max((arr_1 [i_0] [i_0]), var_3))))))));
                        var_28 = (max(18446744073709551607, -7606));
                    }
                }

                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    arr_26 [i_1] [i_1] [i_1] = (var_6 >> (((((arr_10 [i_0] [i_0] [i_1] [i_0]) ? (arr_25 [i_0] [i_1] [i_7]) : (((max((arr_3 [i_0] [14]), 179)))))) - 1618253439)));
                    var_29 = ((((max(((max(-1, 6426))), (min(-4, var_9))))) ? (min(-17, 28017)) : (arr_22 [i_1] [i_1])));
                }
            }
        }
    }
    var_30 &= (max(((max(47, var_12))), (~-var_8)));
    var_31 = (min(var_17, var_2));

    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        arr_29 [9] [i_8] = ((((((min(134301556, 134301556)) * (((((arr_20 [i_8] [i_8] [i_8] [i_8]) > var_0))))))) % -12));
        var_32 = (max(var_32, ((max((min(((min((arr_24 [i_8] [i_8] [i_8] [i_8]), 21))), (((arr_24 [i_8] [i_8] [i_8] [i_8]) ? var_1 : (arr_2 [11] [i_8]))))), (((((76 ? (arr_24 [i_8] [4] [i_8] [i_8]) : -4359172196970976782)) > (arr_1 [i_8] [i_8])))))))));
    }
    #pragma endscop
}
