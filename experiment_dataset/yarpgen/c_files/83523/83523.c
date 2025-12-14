/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((max(32767, -133676995)) >> var_9))) - (((133676995 >> var_5) ? ((var_1 ? var_1 : -8140145859043189193)) : 62544))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (max((arr_0 [i_0 - 4]), (max(((var_5 + (arr_2 [2] [i_1]))), (arr_2 [i_0 - 1] [i_0 - 1])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, (((((-(arr_7 [i_3] [i_3 - 1] [i_2 - 1] [i_1]))) | ((~(arr_7 [i_3] [i_3 + 1] [i_2 - 1] [i_0]))))))));
                            arr_10 [i_0] [i_0] [i_2] [i_2] [i_1] = ((max((((arr_1 [i_1]) ? var_2 : (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3]))), ((min((arr_0 [i_0]), (arr_5 [8] [8] [i_2 - 1] [i_2 - 1])))))) % ((0 ? 1 : 1209)));
                        }
                    }
                }
                var_18 = (min(var_18, (((-((~(arr_1 [i_0 - 1]))))))));
            }
        }
    }
    #pragma endscop
}
