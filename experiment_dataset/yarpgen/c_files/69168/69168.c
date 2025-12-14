/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(((2048 ? 160 : 1008)), (!var_12))) ^ (((~var_6) ^ var_6))));
    var_15 = ((var_13 ? var_13 : -2973619874));
    var_16 *= ((var_13 & (max((min(1494350271, var_2)), var_10))));
    var_17 &= var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((min((~var_0), 1494350268)) / ((-1494350272 - (30011 | 30020)))))));
                arr_7 [i_0] [i_0] = (((((var_4 / var_1) < (~1494350271)))) * ((-(max(414670003, var_11)))));
                var_19 = ((~((((min(1494350283, var_4))) ? 1 : (~116)))));
            }
        }
    }
    #pragma endscop
}
