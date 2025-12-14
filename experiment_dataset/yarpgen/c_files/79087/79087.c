/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_15 = 9007199254740976;
                        var_16 += ((((((arr_11 [i_2] [10] [i_2] [i_2 + 1] [10]) ? var_7 : (((var_0 ? (arr_8 [i_3] [i_1] [i_0] [0]) : (arr_4 [2]))))))) ? (((!var_7) ? ((var_6 ? var_2 : -123)) : (((max(var_13, var_9)))))) : (max((((var_14 | (arr_3 [i_0] [i_0])))), (((arr_0 [i_0]) + 18257914499760836658))))));
                    }
                    var_17 = ((((((max(var_7, var_4))) ? var_7 : 944379280))) ? ((~(max(var_7, (arr_5 [i_0]))))) : (((max((arr_9 [i_0] [i_0] [i_0] [i_2 - 1]), (arr_9 [i_0] [i_0] [i_0] [i_2 - 1]))))));
                    var_18 = ((((var_0 << (18437736874454810640 <= var_5))) << ((((((max((arr_0 [i_1]), (arr_7 [i_0] [i_0])))) ? (var_6 | 0) : ((var_7 ? var_10 : var_10)))) + 70))));

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_19 = (max(((122 >> (-117 + 133))), 1));
                        var_20 &= (max(((-122 ? var_12 : (arr_6 [i_2 - 1]))), -120));
                        var_21 ^= (max(((max(var_0, ((((arr_5 [6]) ? 4096 : var_4)))))), (((arr_4 [0]) + (((arr_0 [i_0]) ? -1330098276946486659 : (arr_7 [i_4] [10])))))));
                        var_22 = var_13;
                    }
                    var_23 = (min(var_23, (((((((((var_5 ? var_0 : 1))) ? var_4 : ((-1482660654 ? var_11 : var_9))))) <= (max((((arr_14 [i_2 - 1] [i_0] [i_0]) ? 1 : var_0)), (arr_9 [8] [i_1] [i_1] [i_1]))))))));
                }
            }
        }
    }
    var_24 = (max((-481370216 == 1023), (max((max(var_9, 1)), (var_3 && 3350588024)))));
    var_25 = (max(var_25, var_6));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_26 = (max(((((var_13 ? var_8 : var_1)) / ((((arr_21 [i_6 + 1] [i_7]) ? (arr_17 [i_6]) : var_6))))), 45));
                    arr_25 [i_5] = (max(((max((arr_21 [i_6 - 2] [i_6 + 2]), (arr_24 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 + 2])))), ((var_14 ? (arr_23 [i_5] [i_6 + 1]) : (arr_23 [i_7] [i_6 - 2])))));
                }
            }
        }
    }
    #pragma endscop
}
