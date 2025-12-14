/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_1] = (arr_9 [i_0] [i_1]);
                    arr_11 [i_0 - 1] [i_1] [i_1] = (((((min(9395913453547772836, var_2))) ? 2377859792485886953 : (arr_0 [i_0 - 1]))));
                    var_17 &= ((((arr_4 [i_0 - 1] [i_0 - 1] [12]) - 1)));
                    var_18 = (min(var_18, ((max(((((max(var_15, var_8)) >= 1))), ((1554718286 >> (((max((-127 - 1), var_2)) - 4294967157)))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                arr_17 [i_3] [i_4] = (((-1 + 2147483647) >> (((((((0 ? -8594067415082859494 : var_16))) ? (min((arr_14 [i_3] [i_3] [i_3]), var_10)) : (((var_16 ^ (arr_13 [i_3])))))) - 56614))));
                var_19 ^= (arr_16 [i_3] [i_3]);
            }
        }
    }
    var_20 = (max((((((var_1 ? var_2 : 47086))) ? (!var_8) : ((var_8 ? var_15 : var_15)))), var_13));
    #pragma endscop
}
