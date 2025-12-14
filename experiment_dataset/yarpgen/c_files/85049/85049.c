/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = (max(((1 ? (arr_3 [i_1]) : -72)), (((arr_3 [i_1]) >> 0))));
                arr_5 [1] |= (((((arr_4 [10]) != ((min((arr_0 [i_0]), 136))))) ? ((0 ? (~0) : (min((arr_3 [8]), 1)))) : ((~((62 ? (arr_3 [4]) : -1))))));
                var_11 = (((-8692294814192295373 <= 513607715) ? ((((((18446744073709551594 < (arr_1 [i_1] [i_1]))) || var_7)))) : ((((max(var_8, 90))) ? (max(var_2, 8692294814192295379)) : (min(13278659265874220144, (arr_2 [i_1] [i_1])))))));
                var_12 = (min(var_12, ((min((((((var_4 & (arr_3 [2]))) | 1))), ((~(arr_4 [2]))))))));
            }
        }
    }
    var_13 = (9754449259517256243 == var_9);
    #pragma endscop
}
