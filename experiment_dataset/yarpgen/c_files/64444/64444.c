/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [11] = (((((~var_16) > (max((arr_5 [i_0] [i_0]), var_12)))) ? (~var_3) : (arr_2 [i_0])));
                    arr_8 [i_0] [i_0] [i_1] [i_2] |= (min(((((arr_2 [i_2 - 3]) >= var_6))), (((((arr_2 [i_2 + 1]) + 2147483647)) >> (var_13 - 91)))));
                    arr_9 [9] [9] [i_2 - 4] |= (max((arr_1 [i_2 - 4]), (max((arr_2 [i_0]), var_17))));
                    arr_10 [i_2] [i_1] [i_2] [i_0] = ((~(min((arr_1 [i_2 + 1]), (arr_1 [i_2 + 1])))));
                }
            }
        }
    }
    var_19 = (((var_16 >= var_10) ? (~var_13) : 17));
    var_20 = (((max((134086656 - var_2), var_17)) % 4294967282));
    #pragma endscop
}
