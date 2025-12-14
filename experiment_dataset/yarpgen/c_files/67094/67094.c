/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = ((((var_11 == ((min(-464096628, 2421689059)))))));

    for (int i_0 = 4; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [2] = (((((arr_0 [i_0] [i_0]) & (((1 != (arr_1 [i_0] [i_0]))))))) ? ((max(-39, (arr_1 [i_0] [i_0 - 4])))) : (min((arr_0 [i_0] [i_0]), (((arr_0 [i_0] [i_0 - 4]) ? 4294967295 : (arr_1 [i_0] [i_0]))))));
        var_15 = 2637539114980621372;
        arr_3 [i_0] = ((((min((arr_0 [i_0] [i_0]), (arr_0 [i_0 - 3] [i_0])))) ? (min((((arr_0 [i_0] [0]) - 1)), (min((arr_0 [i_0] [i_0]), (arr_1 [4] [i_0]))))) : ((((~(arr_1 [i_0 - 3] [i_0]))) | (arr_1 [i_0] [1])))));
        var_16 = 232;
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_17 = (((arr_1 [i_1] [i_1 - 1]) == (arr_1 [i_1 - 2] [i_1 - 4])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_15 [0] [i_2] |= ((+(((arr_8 [i_2] [i_3]) ? (arr_6 [0] [i_2]) : (arr_12 [i_1] [i_1 - 1] [i_1])))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_18 += ((((204 ? (arr_10 [i_1] [i_3] [i_1]) : (arr_7 [i_1]))) != ((((!(arr_0 [i_2] [i_4])))))));
                        arr_18 [i_1] [i_1] [i_3] [i_1] [i_4] = (((arr_11 [i_1 - 3]) ? (arr_11 [i_1 - 2]) : (arr_11 [i_1 - 2])));
                        arr_19 [i_1 - 1] [i_1] [i_3] [10] = arr_12 [i_1] [i_1] [i_1];
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_23 [i_2] [i_2] [i_3] [i_1] [i_1] = (arr_5 [i_1 + 2] [i_1 - 4]);
                        var_19 |= ((!((((arr_7 [i_5]) ? (arr_9 [i_1] [i_1] [i_1]) : (arr_1 [3] [4]))))));
                        arr_24 [i_1 - 4] [i_1] [0] [i_3] [i_1] [i_5] = ((((((arr_6 [i_1] [i_3]) ? (arr_8 [i_1] [i_1]) : (arr_6 [i_1] [i_3])))) ? (arr_4 [i_1]) : ((-1782624931 ? (arr_12 [i_1 - 3] [i_2] [i_1 - 3]) : (arr_0 [i_1] [i_1 - 4])))));
                        arr_25 [i_1] [i_1] [i_1 - 2] [i_1] [i_1] = ((((((arr_20 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_5]) && (arr_9 [i_1] [i_1] [i_1 + 1])))) - (arr_1 [i_1] [i_1])));
                    }
                    var_20 = -22267;
                }
            }
        }
        arr_26 [i_1] = 1;
        var_21 = (((((!(arr_14 [3] [i_1]))))) != (((arr_13 [i_1] [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : 233)));
    }
    var_22 = var_1;
    #pragma endscop
}
