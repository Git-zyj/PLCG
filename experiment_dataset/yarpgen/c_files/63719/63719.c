/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = (1431811174 < -1829895088);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = (((((var_4 ? var_6 : var_9)) + ((var_0 ? var_6 : 121)))) * ((((arr_3 [i_2 - 3] [i_0 + 3]) < (arr_0 [i_0])))));
                    arr_10 [i_1] [i_1] [i_1] [i_0] = 3505;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                arr_17 [i_3] = ((-var_7 ? (~-24827759) : ((((~(arr_8 [i_3])))))));
                var_14 ^= var_1;
            }
        }
    }
    #pragma endscop
}
