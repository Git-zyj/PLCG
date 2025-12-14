/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1335338728;
    var_13 = (max(var_13, var_4));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = (max((1 <= -99), ((~(arr_2 [i_1 + 1] [i_0 - 1] [i_0 - 2])))));
                arr_5 [i_0] [i_0] = (min((min(-241, -var_8)), (-97 + -1)));
                var_15 = (((((52 ? 12 : (max((arr_4 [i_1] [i_0]), -22418))))) || var_0));
            }
        }
    }
    #pragma endscop
}
