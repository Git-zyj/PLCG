/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_10 = (min(var_3, (((862632370 ? (862632370 * 0) : (min(-443438464, 3432334925)))))));
                    var_11 = (min(var_11, ((((arr_0 [16]) ? -var_2 : (((3432334925 - 19) ? 114 : (min(-1, var_8)))))))));
                }
                var_12 = (min(var_12, ((((~128558497100256674) >= 1685607667)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                {
                    var_13 = (!-8);
                    var_14 = (((((~((-1637802265675711933 & (arr_4 [i_4])))))) ? (((~(arr_6 [i_5] [i_5 + 1] [i_5 + 1])))) : ((var_5 ? (arr_14 [i_3] [i_3] [i_3] [i_5 + 3]) : 862632370))));
                }
            }
        }
    }
    #pragma endscop
}
