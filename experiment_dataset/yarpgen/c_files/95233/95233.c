/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((((arr_0 [i_0]) == (max(var_9, (arr_5 [i_0] [i_1 - 1] [i_0]))))))));
                var_13 = ((((((var_4 ? (arr_1 [i_0]) : 1)) | 1602578729)) | (((max(var_10, ((max(-95, 0)))))))));
                var_14 ^= 1;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 -= (((((~((-(arr_2 [i_2] [i_3])))))) ? (1729382256910270464 / var_1) : (((~(!393797065))))));
                            var_16 -= var_7;
                        }
                    }
                }
                arr_13 [i_1] [i_1 - 1] [i_1] = 200;
            }
        }
    }
    var_17 = ((max((((var_1 ? var_9 : var_0)), ((var_4 ? 1729382256910270447 : var_8))))));
    var_18 = var_11;
    #pragma endscop
}
