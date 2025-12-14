/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_0;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (arr_0 [i_0 - 3] [i_1]);
                var_13 &= 4;
                arr_7 [i_0] [i_0] |= min((min((arr_5 [i_0 - 3] [i_0 + 1] [i_0 - 4]), (arr_1 [i_0 - 2]))), (arr_4 [i_0 - 3]));
                var_14 = var_6;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            {
                var_15 = (max(var_15, ((max(var_11, 6)))));
                arr_14 [i_2] [6] |= (max((arr_8 [i_3 - 2] [i_3]), var_1));
            }
        }
    }
    var_16 = 7946128569538045712;
    #pragma endscop
}
