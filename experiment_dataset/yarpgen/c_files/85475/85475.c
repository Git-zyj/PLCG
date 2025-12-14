/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -1829338727;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((~((~(min((-2147483647 - 1), (-2147483647 - 1)))))));
                arr_7 [i_0] [1] = (max((min((arr_3 [i_0 + 3]), 3291468954)), ((((max(244, 1662507899)) >> (min(2147483647, 18)))))));
                arr_8 [i_0] [i_1] = ((!(((arr_2 [i_0 + 1]) && (arr_0 [i_0 + 3] [i_0 + 3])))));
            }
        }
    }
    #pragma endscop
}
