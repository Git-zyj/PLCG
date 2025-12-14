/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (~3176590902)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (arr_4 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_3] [i_2] [i_0] [i_2] = ((((((arr_7 [i_0] [i_1] [i_0] [i_3]) ? (arr_9 [i_0] [i_1 - 2] [i_0]) : (arr_7 [i_0] [i_3] [i_0] [i_3])))) ? (arr_7 [i_3] [i_1] [i_0] [i_3]) : (arr_9 [i_0] [i_1 + 1] [i_0])));
                            var_21 = (min(var_21, ((((((516944047 ? var_3 : (arr_8 [4] [i_1 - 1] [16]))) >= (((((arr_10 [i_0] [i_1] [2] [i_3]) < var_7)))))) && ((min(((max((arr_10 [i_3] [2] [2] [i_0]), (arr_5 [0] [0])))), (arr_4 [i_3]))))))));
                            arr_13 [i_0] = (arr_10 [i_0] [i_1 - 2] [i_0] [i_3]);
                            arr_14 [i_0] [i_0] [i_0] = ((((arr_10 [i_2] [i_0] [i_0] [i_1 + 1]) ? (arr_10 [i_2] [i_0] [i_0] [i_1 + 1]) : 2928446491)));
                        }
                    }
                }
                arr_15 [i_0] [i_0] [i_0] = 978116118;
                var_22 = ((((min(202, ((~(arr_6 [i_0] [i_1 - 2] [i_1 - 2] [i_1])))))) && (arr_5 [i_0] [i_1 - 1])));
                arr_16 [i_0] [i_0] [i_1] = ((((((arr_8 [i_0] [i_1 - 2] [i_1 - 2]) ? (arr_8 [i_0] [i_1 - 2] [i_1 - 2]) : (arr_7 [i_1] [i_1 + 1] [i_0] [i_1])))) / (((arr_6 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2]) ? (arr_7 [i_0] [i_1 + 1] [i_0] [i_1 + 1]) : var_11))));
            }
        }
    }
    #pragma endscop
}
