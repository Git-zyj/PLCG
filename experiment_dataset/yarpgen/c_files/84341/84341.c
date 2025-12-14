/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_19 &= (arr_1 [i_1]);
                var_20 = (((((((var_15 ? (arr_0 [i_1]) : (arr_3 [i_0] [i_0]))) >> (((min((arr_1 [i_1]), 4294967269)) - 2583830099))))) ? (((!((min((arr_1 [i_1]), 111)))))) : ((~(((arr_2 [i_1]) >> 1))))));
            }
        }
    }
    var_21 ^= var_7;
    var_22 = ((var_9 ? var_2 : (~var_8)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_23 ^= (arr_0 [i_3]);
                arr_10 [3] = ((!(((var_15 ? (arr_1 [i_2]) : (arr_4 [i_3]))))));
                var_24 *= ((+((((min((arr_7 [1] [i_2]), (arr_3 [i_2] [i_3])))) ? ((max((arr_1 [11]), var_13))) : ((-(arr_8 [i_2])))))));
            }
        }
    }
    var_25 = var_12;
    #pragma endscop
}
