/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_15 ^= (((((-var_8 / (min((arr_3 [i_0] [i_1 - 2] [i_1]), (arr_3 [i_1] [i_1 - 2] [5])))))) ? (~-8199204802825723919) : 17623936519364144579));
                arr_4 [i_1] [i_0] [i_0] = (min((((!((min((arr_0 [8]), (arr_3 [i_1 - 2] [i_1 - 2] [i_1]))))))), (arr_0 [i_0])));
                arr_5 [i_1 - 1] = (arr_0 [i_0]);
            }
        }
    }
    var_16 = ((var_6 / ((var_4 ? 8199204802825723940 : var_13))));
    #pragma endscop
}
