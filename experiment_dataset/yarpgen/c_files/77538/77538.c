/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_5;
    var_17 = ((~(((min(63021, 63047))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = 15;
                var_18 &= ((!((((var_1 - 61981) ? (arr_4 [i_0 + 2] [i_0 - 3] [i_0 + 1]) : (-9223372036854775805 | 42927))))));
                arr_8 [i_0] [i_1] [i_1] = (max((min((min((arr_0 [i_0] [i_0]), 9223372036854775799)), ((3 ? 3849662202 : 7)))), (arr_4 [i_0] [16] [16])));
                arr_9 [i_1] [i_1] = (min((min(61981, (max(2476, (arr_3 [0] [0] [i_1]))))), 33547));
            }
        }
    }
    #pragma endscop
}
