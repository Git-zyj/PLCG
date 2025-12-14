/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_17 &= 2965900615;
            arr_6 [13] = (arr_2 [i_1]);
        }
        var_18 |= ((((((((var_6 ? (arr_2 [i_0]) : var_13))) ? var_14 : ((min(1132711442, (arr_4 [5]))))))) ? -var_4 : 3162255875));
    }
    for (int i_2 = 4; i_2 < 21;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_19 = (((24203 && (arr_9 [i_2 + 1] [i_2 + 1]))) && ((((((var_11 ? (arr_11 [12] [i_2]) : (arr_10 [i_2 - 3])))) ? (min(var_4, (arr_7 [i_3]))) : ((min(1132711449, (arr_9 [i_2 - 3] [i_2]))))))));
            var_20 = ((((min((arr_7 [i_2 - 2]), -1804989162))) == ((-2251799809490944 / (var_6 * -4332)))));
            arr_12 [i_2] [7] [i_3] = var_15;
            var_21 = (((((-(4339 & 3162255846)))) ? ((-((max(var_6, var_3))))) : (!var_3)));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_22 = (max(var_22, (((((max((min(var_2, 3162255859)), (arr_18 [i_2] [i_2] [i_2 - 3] [i_2 - 1] [i_2 - 1])))) ? (((arr_13 [i_2 + 1] [i_2] [i_2 - 1]) ? (arr_13 [i_2 - 2] [i_2 - 1] [i_2 + 1]) : (arr_13 [i_2 - 2] [i_2] [i_2 - 3]))) : ((((min(-4332, (arr_10 [i_5])))) * (1 / 64))))))));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_23 = (((min((((!(arr_13 [i_3] [15] [21])))), (((arr_11 [i_2 - 2] [i_2 - 2]) ? 1603159048 : var_10))))) ? 1 : (max((min((arr_11 [5] [20]), var_0)), ((((arr_8 [i_5] [i_3]) || (arr_7 [i_2])))))));
                            arr_21 [i_3] [i_3] [i_3] = (((((arr_9 [i_2 - 3] [i_2 + 1]) == (arr_10 [i_2 - 3]))) ? 222 : ((-(arr_11 [17] [17])))));
                        }
                    }
                }
            }
        }
        var_24 -= (min((((arr_19 [1] [i_2 + 1] [i_2] [i_2]) ^ (arr_19 [i_2] [i_2] [i_2 - 4] [i_2 - 1]))), (((arr_19 [i_2] [i_2] [i_2] [i_2 - 4]) ^ (arr_19 [0] [i_2 + 1] [i_2 - 2] [i_2 - 2])))));
    }
    var_25 = (((~69) ? var_13 : ((~((min(var_8, var_6)))))));
    var_26 &= (~var_7);
    var_27 &= ((+(((0 - -8196) ? 4332 : 4311))));
    #pragma endscop
}
