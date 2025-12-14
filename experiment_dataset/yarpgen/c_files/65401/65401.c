/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (((~((max(var_4, var_9))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_12 &= ((-(arr_3 [i_0 + 1] [i_0])));

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_7 [i_0] [14] |= ((((30971 && (arr_4 [0] [i_1 + 1]))) ? 1 : 30980));
            var_13 ^= (arr_1 [i_1 + 1] [i_0 - 1]);
            arr_8 [i_1] [i_1] [i_1] = (arr_5 [i_0 - 1] [i_1 - 1]);
        }
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        var_14 = var_1;
        var_15 = (((((var_8 + 90) ? (90 << 0) : ((min(101, var_8)))))) ? 1 : (min((((!(arr_11 [3] [3])))), (max(-3706447399213543627, var_1)))));
    }
    #pragma endscop
}
