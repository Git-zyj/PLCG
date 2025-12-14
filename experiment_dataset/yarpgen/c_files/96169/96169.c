/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96169
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
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (((((12043338888654491326 ? 63 : 4294967237))) ? (((arr_3 [i_0] [i_0] [i_2 + 2]) & (arr_5 [i_1]))) : ((((((arr_6 [i_0] [i_0] [i_0] [i_1]) >> (((arr_2 [i_2]) - 6847013045144467748)))) - var_15)))));
                    var_20 |= ((((((arr_6 [i_0] [i_2 - 1] [i_2] [i_2 + 1]) ? (arr_6 [i_2] [i_2 + 3] [i_0] [i_2]) : 9))) >= (arr_7 [i_0] [i_2 - 1] [i_2 + 2] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_21 += ((((min((arr_11 [i_0] [1] [i_2] [i_4 + 2]), 6403405185055060290)) < (arr_12 [i_2 + 1]))));
                                var_22 = (max(var_22, (((+((-(((arr_5 [i_4]) * (arr_4 [i_0] [i_3 + 3] [i_3]))))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_6] [i_0] [i_6] [1] = ((~((~(arr_2 [i_0])))));
                                var_23 = 6461099679152620301;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_7;
    #pragma endscop
}
