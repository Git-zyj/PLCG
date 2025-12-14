/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = (min((max(3843931108841194565, 249)), (((-(arr_4 [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_13 = (~(arr_10 [i_0] [i_0] [i_0] [i_0]));
                            arr_11 [i_0] [2] [i_0] [i_0] [i_2] [7] = ((((min(356, (arr_6 [i_0] [i_0] [i_0])))) ^ (min((~51120), (!var_10)))));
                        }
                    }
                }
                var_14 = (min(var_14, (((((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (1 > -154409987) : 13))) ? (((((var_2 > 9228) >= 1)))) : (max(var_1, (arr_4 [i_0]))))))));
                var_15 -= ((-(min((arr_9 [i_0] [i_0] [i_0] [i_0] [4]), (arr_9 [i_0] [i_1] [i_0] [i_0] [15])))));
                var_16 &= (((min(17213, (arr_10 [i_0] [i_0] [11] [i_0])))) || (26518 ^ -494661568));
            }
        }
    }
    #pragma endscop
}
