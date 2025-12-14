/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = (((arr_4 [16] [i_1 - 1]) ? 4327 : (min((arr_4 [i_0] [i_1 - 1]), (arr_4 [i_0] [i_1 - 1])))));
                    arr_8 [i_0] [i_1] [i_0] = ((((((arr_1 [i_1 - 1]) ? -77 : (arr_4 [i_1 - 1] [i_1 - 1])))) ? ((~((-77 ? var_4 : 65535)))) : (arr_4 [i_0] [i_2])));
                    arr_9 [i_0] [i_1] [1] [i_0] = (min((((arr_6 [i_0] [i_1] [1] [i_1 - 1]) ? (arr_6 [i_0] [i_0] [i_0] [i_1 - 2]) : (arr_6 [i_1 - 1] [i_1] [i_1] [i_1 - 1]))), -77));
                }
            }
        }
    }
    var_11 = var_9;
    var_12 = (min(var_12, (((var_8 ? -77 : (min(var_7, var_7)))))));
    var_13 = ((31 >> (((((-2147483647 - 1) - -2147483640)) + 32))));
    #pragma endscop
}
