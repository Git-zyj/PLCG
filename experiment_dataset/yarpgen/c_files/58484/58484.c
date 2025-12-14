/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min((3371 - 9832328207406195989), var_0)) << (var_1 - 61811)));
    var_18 = ((var_8 % (var_16 % var_13)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 ^= (((((arr_0 [i_2]) ? 4199558230 : 9223372036854775807)) < (((var_16 ? (arr_0 [i_2]) : (arr_0 [i_1]))))));
                    var_20 = (max((arr_3 [i_0] [i_0]), -99));
                }
            }
        }
    }
    var_21 = 14084;
    #pragma endscop
}
