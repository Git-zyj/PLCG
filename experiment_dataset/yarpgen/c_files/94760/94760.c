/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1] = 106;
                var_12 *= ((((max(-1, 0))) ? ((min(155371569, 46))) : (((17918907830354325331 < 17918907830354325331) ? (min(var_11, (arr_1 [i_0]))) : (-1 * -155371574)))));
                var_13 = (max(210, var_6));
                var_14 = max((((arr_2 [i_1 + 1] [i_1 + 1]) ? ((16334012257978520009 ? (arr_0 [i_0]) : (arr_0 [i_1]))) : (max(16334012257978520009, (arr_0 [i_0]))))), var_5);
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_15 = (arr_6 [i_2]);
        var_16 = 149;
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                {
                    var_17 = (arr_5 [i_3]);
                    var_18 += (arr_13 [i_5] [i_5] [i_3] [i_4 + 1]);
                }
            }
        }
        var_19 += ((min(((-(arr_11 [i_3] [4])), (((135963405 ? 2337517137 : -116)))))));
        arr_16 [i_3] = ((((min(var_0, (max(731868348107672666, (arr_11 [i_3] [i_3])))))) ? 0 : (arr_9 [i_3])));
        arr_17 [i_3] = (arr_13 [i_3] [5] [i_3] [i_3]);
    }
    #pragma endscop
}
