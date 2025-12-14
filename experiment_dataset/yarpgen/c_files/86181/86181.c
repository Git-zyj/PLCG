/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((min(var_15, 1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] = min((min((max((arr_2 [i_2] [1] [0]), (arr_6 [11] [i_1]))), (arr_3 [i_0]))), ((((((var_14 ? (arr_2 [i_0] [i_0] [i_0]) : (arr_4 [14] [i_1] [i_0])))) && (arr_4 [i_0] [i_1 + 2] [i_0])))));
                    arr_8 [i_0] [i_1] [i_2] = ((((13 <= 0) >= (arr_2 [i_2] [i_2] [i_2]))) ? ((-(min(var_10, var_3)))) : ((((((arr_6 [i_0] [i_1]) << (4294967283 - 4294967283)))) ? 1 : 1)));
                    var_19 = (min(var_19, (((-5406361851099750982 ? 1 : (min((max(var_17, (arr_4 [i_0] [i_1] [1]))), ((3213910408 ? var_12 : (arr_5 [2] [4] [1] [i_2]))))))))));
                    arr_9 [4] |= (var_12 + 4294967280);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 21;i_5 += 1)
            {
                {
                    var_20 = ((-((max((arr_12 [i_5 + 1]), (arr_17 [i_3]))))));

                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        var_21 = arr_13 [i_3] [i_4 - 1];
                        var_22 = (max((min((arr_21 [i_3] [i_3] [1] [i_3] [i_5]), (min((arr_10 [i_5]), 6021029409877836973)))), var_8));
                    }
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        arr_26 [i_3] [i_4] [1] [i_5] [i_5] [13] &= (((((4294967282 && (arr_11 [i_4 - 1])))) >> (16252928 - 16252907)));
                        var_23 = arr_10 [i_3];
                    }
                }
            }
        }
    }
    #pragma endscop
}
