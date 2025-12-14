/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (((var_14 ? 4855306375615450073 : var_7)));
    var_20 = ((2147832948 ? 195 : 35184372088320));
    var_21 += ((-(+-511)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [1] = (~2096751041);
                    arr_9 [i_0] [i_2] = ((((((9223372036854775807 ? -2082424852 : 2147134347)) ? 231589044 : (((var_3 ? -83725158 : -113)))))));
                }
            }
        }
    }
    #pragma endscop
}
