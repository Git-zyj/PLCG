/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (((((arr_8 [i_0] [i_2] [1]) ? (arr_6 [i_1]) : (arr_7 [i_0] [i_0]))) < (arr_8 [i_2] [i_2] [i_2])));
                    var_15 = (min(var_15, (((15 ? -1936542335727216914 : 280375465082880)))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = (arr_10 [i_3]);
        var_16 = (arr_9 [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_19 [i_5] [i_3] = ((+((+(((arr_15 [i_3] [1] [1]) & (arr_10 [i_3])))))));
                    arr_20 [i_3] [i_4] [i_3] [i_4] = ((var_1 ? ((min((((arr_15 [i_3] [i_4] [15]) ? var_11 : var_6)), (min((arr_16 [i_3] [i_3] [i_3]), (arr_14 [i_3] [i_3])))))) : ((var_0 ? (arr_14 [12] [i_3]) : var_4))));
                }
            }
        }
        var_17 = (((max((~var_11), (~var_10))) / ((max((arr_9 [i_3] [i_3]), (arr_9 [i_3] [i_3]))))));
        var_18 = (((!var_10) && ((((arr_16 [i_3] [i_3] [i_3]) ? (arr_16 [17] [i_3] [i_3]) : (arr_16 [i_3] [15] [i_3]))))));
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                var_19 = var_4;
                arr_25 [i_6] = (~31923);
            }
        }
    }
    #pragma endscop
}
