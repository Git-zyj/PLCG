/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((!var_7), (~var_14));
    var_17 -= var_5;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_18 = (max(var_18, -7392507657256203355));
        var_19 *= (6956937524439278012 > var_14);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = (((var_10 ? ((min(var_7, var_12))) : var_1)));
                    var_21 ^= (((((min(63204, var_12)) == ((min((arr_1 [2]), (arr_4 [i_2])))))) ? ((((var_12 + 2147483647) >> (((arr_5 [i_0] [i_0]) - 2836823238))))) : ((min(var_5, (arr_0 [i_0] [1]))))));
                }
            }
        }
        arr_8 [i_0] [i_0] = ((7392507657256203355 ? 20830 : 26924));
        arr_9 [2] = ((-(min((arr_1 [i_0]), (arr_6 [i_0 - 2] [i_0 - 1] [9] [i_0 - 1])))));
    }
    #pragma endscop
}
