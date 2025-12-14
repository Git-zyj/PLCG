/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 *= ((!((min((~-1), (((arr_4 [0] [i_0] [9]) ? (arr_6 [i_2] [i_1] [i_0]) : 9223372036854775807)))))));
                    arr_7 [i_0] [i_1] = (min((max((arr_5 [i_2] [i_1] [i_0] [i_0]), 7209093746758734033)), ((-5219960443518167443 ? 11237650326950817583 : (min(11237650326950817589, -1))))));
                    var_13 = (max(((4 ? (arr_3 [i_0]) : (arr_2 [i_0]))), (arr_5 [i_2] [4] [i_1] [i_0])));
                }
            }
        }
    }
    var_14 *= ((!(!411388473)));
    #pragma endscop
}
