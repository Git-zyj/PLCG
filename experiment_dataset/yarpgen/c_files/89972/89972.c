/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((((1 == var_5) * ((-24218 ? 32761 : 1))))), var_2));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = ((((((((arr_2 [i_0] [i_0]) ? var_14 : var_9)) % ((((255 || (arr_2 [i_0] [i_0])))))))) ? (((((max((arr_0 [i_0]), (arr_1 [i_0])))) * ((~(arr_0 [i_0])))))) : (((arr_2 [i_0] [i_0]) / (min(-75, 14832686234745716426))))));
        var_17 = ((((((arr_2 [i_0] [i_0]) | (arr_1 [i_0])))) & (arr_2 [i_0] [i_0])));
        var_18 |= 37409;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_19 = (((var_5 * 80) ? ((159 ? (((23 >> (((arr_3 [i_1 + 1] [i_1 + 2]) - 2434633076))))) : var_3)) : (19 && 253)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_20 += ((-(((((arr_7 [i_4] [i_4] [i_1]) < (arr_5 [i_3] [i_2]))) ? (-33554432 / -23) : 3318785884))));
                        arr_14 [3] [i_2] [1] [i_1 + 3] [i_1] = (((((var_13 ? (arr_7 [i_1 + 3] [i_1] [i_3]) : (arr_7 [i_1 + 3] [i_1] [i_3])))) ? (((arr_13 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1]) / (arr_7 [i_3] [i_1] [i_3]))) : 2911110964));
                        arr_15 [i_1] [i_1] [10] [i_1] [i_1] = (((((arr_11 [i_1] [i_1 + 1] [i_1 - 1] [i_1]) ? var_2 : (arr_11 [i_1] [i_1 + 2] [i_1 - 1] [i_1]))) > (((arr_11 [i_1] [i_1 + 3] [i_1 + 3] [i_1]) ? -1 : (arr_11 [i_1] [i_1 + 3] [i_1 + 1] [i_1])))));
                    }
                    var_21 = (23 % 32767);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    arr_21 [i_1] [i_1] [i_1 + 1] = 250;
                    arr_22 [i_1] = (max(98, 1));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 22;i_7 += 1)
    {
        var_22 &= 3421890919;
        arr_27 [i_7] = 2580986785;
        var_23 = 15;
        arr_28 [i_7] = ((((!(arr_25 [i_7]))) ? -602904212 : (arr_23 [i_7] [i_7])));
        var_24 = 3318785884;
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_25 = var_7;
        arr_31 [i_8] = (((arr_29 [7]) ? (arr_29 [i_8]) : (min(var_9, ((((arr_29 [i_8]) / (arr_29 [i_8]))))))));
        arr_32 [i_8] = ((!(((max((arr_29 [17]), var_8))))));
        var_26 -= 4529191643150393103;
        var_27 = (max(var_27, -32));
    }
    var_28 = (((((var_12 ? -1 : var_13))) ? var_6 : -var_0));
    var_29 -= ((((0 ? 6 : 15360)) == (min((121 / 232), 1))));
    var_30 = ((var_2 / (~var_3)));
    #pragma endscop
}
