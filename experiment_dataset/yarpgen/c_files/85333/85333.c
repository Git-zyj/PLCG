/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [14] [i_1] [i_1] = -671185454901335846;
                    arr_9 [i_0 - 1] [i_1] = (((min((min((arr_5 [i_1] [i_1] [i_1]), (arr_5 [i_0] [i_1] [i_1]))), ((0 ? var_3 : (arr_1 [i_1])))))) ? (((((var_13 ? (arr_4 [18] [i_2]) : (arr_5 [i_0] [i_0] [i_1])))) + (max(-5810418646475176934, (arr_6 [i_1] [i_0] [i_1] [12]))))) : var_18);
                    var_20 = (((arr_6 [i_1] [i_1] [i_1] [i_1]) ? (((117 ? 4128612117 : -1196455380))) : 31));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] = (min(var_4, (max((max(14, var_12)), (arr_1 [i_0])))));
                                var_21 = max(((4294967294 ? (arr_12 [i_4] [i_1] [i_1] [i_3] [i_1]) : ((max(-26, -31))))), (arr_4 [i_0] [i_4]));
                                var_22 -= ((-(min(((-50 ? var_0 : 0)), (arr_12 [i_3] [i_3] [1] [i_3] [i_4])))));
                                var_23 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((var_11 < (((max(154, 0))))));
    #pragma endscop
}
