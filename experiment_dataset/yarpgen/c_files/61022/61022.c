/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 ^= (((((~(arr_0 [12] [12])))) ? ((-(arr_0 [10] [10]))) : (((var_4 <= (arr_0 [10] [10]))))));
                    var_15 *= ((!((max(-var_10, ((14419814590749432943 ^ (arr_5 [i_0] [0] [i_2] [i_1]))))))));
                    var_16 += (4026929482960118671 && 14419814590749432929);
                }
            }
        }
    }
    var_17 ^= (min(var_10, var_11));
    #pragma endscop
}
