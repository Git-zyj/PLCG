/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_12 |= var_0;
                        var_13 = -43135;
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_14 = (max(var_14, (((-(var_0 >= var_10))))));
                        var_15 = (((((((arr_10 [i_0]) > (arr_0 [i_0] [i_0]))))) | (arr_0 [i_1 - 4] [i_2 - 2])));
                    }
                    var_16 = (max(var_16, (((2639898290195437729 ? 734701996 : 62845)))));
                }
                arr_13 [i_0] = (max((11274092804160572274 + -1), ((((arr_10 [i_1 + 1]) / (arr_10 [i_1 - 1]))))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_16 [12] &= ((((((max(var_9, (arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) ? (((arr_2 [11] [i_5] [i_5]) ? 3261825349 : 7172651269548979340)) : ((((arr_11 [i_5] [14] [14] [6]) ? (arr_8 [i_5] [7] [i_5] [14] [i_5] [i_5]) : (arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))))) ? ((min(((var_5 ? (arr_2 [i_5] [i_5] [i_5]) : var_5)), (var_2 != var_7)))) : (max((-32767 - 1), 8771279433699937182)));
        var_17 = (max(var_17, ((((((!((((arr_9 [16]) / (arr_5 [i_5] [i_5] [1]))))))) >> ((((arr_7 [0] [0] [i_5] [i_5] [i_5]) <= ((var_1 >> (var_7 - 61)))))))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_18 = (max((((arr_18 [i_6]) >> (var_11 + 18714))), ((min((arr_18 [i_6]), var_5)))));
        var_19 &= max(((max(var_10, (arr_17 [i_6] [i_6])))), var_8);
        var_20 = ((((min(var_9, (arr_17 [i_6] [i_6])))) ^ (arr_18 [i_6])));
        arr_20 [i_6] = (min((((arr_18 [i_6]) / ((((arr_18 [i_6]) || var_1))))), ((((arr_19 [i_6]) != var_1)))));
    }
    var_21 = (min(((var_10 >= ((var_4 ? (-32767 - 1) : -32759)))), (((!var_6) || var_9))));
    var_22 = var_11;
    #pragma endscop
}
