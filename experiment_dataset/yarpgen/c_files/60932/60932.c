/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = -32;
                                var_22 ^= ((min(39868, (arr_8 [i_4 - 2] [i_3 - 1] [12] [i_3 + 1] [i_3 - 1]))));
                            }
                        }
                    }
                    var_23 = (((((arr_5 [i_0] [i_2]) ? (arr_5 [i_1] [i_0]) : var_10)) ^ ((137438429184 ? 25663 : (arr_5 [i_1] [i_0])))));
                    arr_15 [i_1] = (min((arr_8 [i_0] [5] [i_1] [5] [i_1]), ((-2922417299676227571 ? var_1 : (!1152912708513824768)))));
                    var_24 = (((-68 + 2147483647) >> 1));
                    arr_16 [i_1] = (((arr_8 [i_0] [i_1] [i_1] [i_1] [i_1]) * (((((arr_0 [i_0]) < ((((arr_12 [11] [i_1] [i_1] [i_2] [i_2]) < -1152912708513824770)))))))));
                }
                var_25 = (69 | 112);
                var_26 = (min(var_26, ((((((((603000949 ? (arr_10 [i_0] [16] [i_1] [i_1]) : 39868))) ? (arr_7 [i_0] [i_0] [i_1] [i_1]) : (arr_7 [i_1] [i_1] [i_0] [i_0]))) == (((11168 % 60) ? (arr_14 [i_0] [i_1] [16] [0] [i_1]) : ((-77 ? 1 : (arr_10 [i_0] [2] [i_1] [i_1]))))))))));
            }
        }
    }
    var_27 = (min(var_27, var_9));
    #pragma endscop
}
