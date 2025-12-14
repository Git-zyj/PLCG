/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_14 = min(var_2, ((~(arr_7 [i_0] [i_0 - 2] [i_2 + 2] [i_0]))));
                    var_15 = ((((max(var_12, (arr_8 [i_0] [i_2 + 3] [i_0])))) ? (15 | 0) : ((~(arr_8 [i_0] [i_2 - 1] [i_2])))));
                    var_16 = (min((arr_2 [i_0]), var_4));
                }
            }
        }
    }
    #pragma endscop
}
