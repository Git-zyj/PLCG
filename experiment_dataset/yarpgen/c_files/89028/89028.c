/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [i_2 - 1] [i_1] [i_2] [i_3] = ((var_2 ^ ((~(arr_1 [i_0] [i_1])))));
                            var_19 ^= ((var_12 - ((-var_1 ? (((arr_4 [i_0]) - (arr_1 [i_0] [i_0]))) : ((-5294344170578094052 - (arr_5 [i_0] [i_3 - 1] [i_0])))))));
                            var_20 = (((((max((arr_0 [i_0] [i_1]), var_11))) ? (7734142563616748946 ^ var_17) : 8388607)));
                        }
                    }
                }
                var_21 = (max(var_21, (((+(min((arr_5 [i_0] [i_0] [i_1]), (arr_5 [i_0] [i_1] [i_1]))))))));
            }
        }
    }
    var_22 = (((var_9 == 5294344170578094055) | (2106535521 > var_13)));
    var_23 = ((((((var_11 && (var_0 || var_10))))) != var_8));
    #pragma endscop
}
