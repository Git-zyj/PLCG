/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(var_8 / 2088058415)));
    var_11 = (+-162);
    var_12 = (min(var_12, ((max((var_6 + 106), (min((var_2 - 20593), (var_1 | 0))))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = -77;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 |= (min(var_4, ((((((~(arr_4 [i_1] [i_1])))) || ((max(var_8, 2758839270909036089))))))));
                    var_14 |= (((((max(var_4, var_6))) ? (((arr_5 [i_0] [i_1]) - var_0)) : (((arr_1 [i_0]) ? (arr_4 [i_1] [i_2]) : var_6)))));
                }
            }
        }
    }
    #pragma endscop
}
