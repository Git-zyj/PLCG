/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = (arr_5 [i_0] [i_3]);
                            var_13 = (arr_1 [i_1] [i_3]);
                            var_14 = (i_2 % 2 == zero) ? ((((((arr_2 [i_3 - 1]) ? (arr_2 [i_3 - 1]) : (arr_2 [i_3 - 1]))) >= (((((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_2] [i_1] [i_0] [i_1]) : (arr_1 [i_1] [i_3]))) == ((((arr_11 [i_0] [i_1] [i_1] [i_2] [9]) >> (((arr_12 [16] [i_1] [i_2] [i_1] [i_1] [i_1]) - 6604)))))))))))) : ((((((arr_2 [i_3 - 1]) ? (arr_2 [i_3 - 1]) : (arr_2 [i_3 - 1]))) >= (((((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_2] [i_1] [i_0] [i_1]) : (arr_1 [i_1] [i_3]))) == ((((arr_11 [i_0] [i_1] [i_1] [i_2] [9]) >> (((((arr_12 [16] [i_1] [i_2] [i_1] [i_1] [i_1]) - 6604)) - 30488))))))))))));
                        }
                    }
                }
                var_15 = (max(var_15, (arr_1 [i_0] [i_1])));
                var_16 = (((arr_8 [i_1] [i_1]) || ((((16614079253468058312 ? 1559311258610206494 : -5582484243736168146)) > (((((arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) > (arr_6 [13] [i_1] [11] [13])))))))));
                var_17 = (min(var_17, (arr_5 [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
