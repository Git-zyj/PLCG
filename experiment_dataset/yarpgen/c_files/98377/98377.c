/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (arr_4 [i_0 + 2])));

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_17 = (max(var_17, ((~((((min(33554432, 32758))) ? (((arr_3 [i_0 - 1] [i_1]) / 246)) : ((((arr_5 [i_0] [i_0] [i_2 + 2]) - (-9223372036854775807 - 1))))))))));
                    var_18 ^= (((arr_1 [i_0 - 1]) - (!33554424)));
                    var_19 &= min((-9223372036854775807 - 1), 1);
                    var_20 = (min(var_20, ((min((((((var_12 ? (arr_2 [i_1 + 1] [i_2] [i_1]) : var_13))) ? (arr_5 [1] [12] [i_2]) : ((((var_11 >= (arr_0 [i_0]))))))), (((32768 / (((arr_2 [i_2] [i_1] [17]) * 128))))))))));
                }
                var_21 &= (arr_0 [i_0]);
                var_22 -= (((((arr_1 [i_0 + 2]) ? (arr_2 [i_0 - 1] [i_1 + 2] [i_1 - 3]) : -32))) / 1099511625728);
            }
        }
    }
    var_23 |= var_11;
    #pragma endscop
}
