/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(-2214, ((~(max(var_5, 16242884999203369089))))));
    var_12 &= (6297356534327271483 > 208);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_13 += (arr_3 [i_1 - 1] [0] [i_1]);
                var_14 = 12149387539382280122;
                var_15 += (((arr_1 [i_0]) > (((((arr_1 [i_0]) > (arr_1 [i_0])))))));
            }
        }
    }
    #pragma endscop
}
