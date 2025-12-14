/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);
        var_12 = (min(var_12, ((((arr_1 [i_0] [3]) / (arr_0 [i_0]))))));
        var_13 -= (max(((((arr_1 [i_0] [i_0]) || (arr_1 [i_0] [i_0])))), ((((((arr_1 [i_0] [i_0]) ? var_2 : (arr_1 [i_0] [4])))) ? ((((arr_0 [i_0]) < (arr_1 [i_0] [i_0])))) : ((((arr_0 [i_0]) || (arr_1 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (((((((arr_5 [i_2] [i_1]) < var_4)) ? (arr_3 [i_0] [i_1]) : (((min((arr_5 [i_2] [4]), (arr_1 [2] [i_1]))))))) > (min((((arr_1 [i_0] [i_1]) ? (arr_0 [i_2]) : (arr_1 [i_0] [i_1]))), (arr_2 [i_0])))));

                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        var_15 = (((((50951 ? ((((arr_6 [10] [i_1] [i_2] [i_3 - 3] [i_2]) > (arr_6 [i_3] [i_3] [i_3 - 3] [i_3 + 4] [i_2])))) : (arr_3 [i_2] [i_3 + 2])))) && ((((arr_4 [i_2] [i_1] [i_2] [4]) ? ((((arr_3 [i_0] [i_0]) > (arr_2 [i_0])))) : ((((arr_6 [i_3] [i_1] [i_2] [i_3 + 1] [i_2]) == (arr_1 [i_3 + 1] [4])))))))));
                        var_16 = ((((min((arr_6 [i_3] [0] [i_0] [i_3 + 1] [i_2]), (min((arr_1 [i_1] [17]), (arr_7 [i_2] [15])))))) && (arr_0 [i_1])));
                    }
                    var_17 += (((((((2639267045 ? var_6 : -91626423)) < ((((arr_7 [i_1] [i_1]) > (arr_0 [i_0]))))))) < ((((arr_1 [7] [i_2]) > (arr_2 [11]))))));
                    var_18 = ((((max((arr_4 [i_2] [17] [i_2] [i_2]), (arr_1 [8] [i_1])))) ? (((((arr_3 [i_0] [3]) ? (arr_3 [5] [10]) : (arr_6 [i_2] [i_1] [i_1] [i_1] [i_2]))))) : (max((arr_2 [i_2]), (arr_2 [i_0])))));
                    var_19 *= (arr_6 [i_0] [i_1] [i_0] [i_2] [i_1]);
                }
            }
        }
    }
    var_20 = ((!((max(var_5, 57997)))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    var_21 = ((((((((var_2 ? (arr_12 [i_4]) : 30710))) ? (arr_0 [i_4]) : (arr_3 [i_4] [i_5])))) ? ((((((arr_12 [i_4]) ^ 24585))) ? (arr_6 [i_5] [i_5] [8] [i_5] [i_4]) : (((arr_14 [i_4] [8] [i_4]) ? var_2 : (arr_12 [13]))))) : ((((arr_2 [i_6]) + (arr_11 [i_4] [i_4] [i_4]))))));
                    var_22 = (((((((((arr_2 [i_4]) ? (arr_14 [i_6] [i_5] [i_4]) : (arr_8 [i_5])))) ? (max((arr_10 [i_4] [i_5] [i_6]), (arr_8 [i_5]))) : ((3580947226 ? (arr_11 [i_4] [i_4] [i_4]) : (arr_12 [i_6])))))) && (arr_10 [i_4] [i_5] [i_6])));
                    var_23 = ((((((((arr_8 [i_5]) ? var_8 : (arr_5 [i_4] [i_5])))) ? (min((arr_4 [i_4] [i_5] [i_4] [i_4]), (arr_0 [i_4]))) : (arr_3 [5] [i_4]))) > (arr_8 [i_5])));
                    var_24 = (max(var_24, (arr_0 [i_5])));
                }
            }
        }
    }
    var_25 ^= var_2;
    #pragma endscop
}
