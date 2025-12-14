/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = ((((((min((arr_0 [i_0]), -819208752))) - 1384640658836243144)) + ((((((~(arr_4 [12] [13])))) ? ((max(var_4, (arr_2 [19])))) : (-1602802294 >= var_4))))));
                var_21 = (min(0, ((min((arr_0 [i_1]), ((32767 ? 32745 : 1049428531398547925)))))));
                var_22 = (((((1704528688 << (((min(2147483647, (arr_0 [i_0]))) - 2147483646))))) ? 27 : (arr_3 [i_0] [i_1])));
            }
        }
    }
    var_23 = (min((((((max(-2, 0))) && 13))), var_15));
    #pragma endscop
}
