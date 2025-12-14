/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_11 = ((((((((-(arr_8 [i_2] [i_2] [5] [4])))) ? (arr_7 [i_0] [i_0] [i_0]) : ((-732354545999292020 ? var_4 : 9631024318514290260))))) && (arr_6 [i_0] [i_1] [i_1])));
                    var_12 = (min(var_12, (((-(((arr_5 [i_2]) ^ (arr_5 [i_0]))))))));
                    var_13 = (min(var_13, 216));
                    var_14 = 796188381;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_19 [i_6] = (arr_4 [18] [i_6] [i_5]);
                            var_15 = (max(var_15, (arr_14 [i_5 - 1])));
                            var_16 = (max(var_16, var_9));
                            var_17 = (min(var_17, 0));
                            arr_20 [i_3] [i_3] [i_3] = (((-(arr_13 [i_5]))));
                        }
                    }
                }
                arr_21 [i_3] = (((arr_5 [i_4]) ? (arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : ((((~(arr_1 [i_3])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {
                var_18 = -var_5;
                var_19 = (~var_7);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((((((+(max((arr_31 [i_7] [i_8]), 4294959104))))) ? (arr_32 [i_10] [i_10] [i_8] [i_8] [i_7] [i_7]) : (min(var_5, (14398 | var_7))))))));
                            var_21 = var_4;
                        }
                    }
                }
            }
        }
    }
    var_22 = var_9;
    #pragma endscop
}
