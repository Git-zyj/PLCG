/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = -3103556391723557945;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = ((var_5 - (max(15343187681985993671, (arr_2 [i_0] [i_0])))));
                arr_4 [i_1] = -2028862048742879299;
                var_16 |= var_3;
                var_17 = (min(((((arr_3 [i_0]) && ((max(3103556391723557944, 3528231148088728075)))))), (max((((arr_3 [i_1]) / -567579805171386553)), (arr_2 [i_0] [i_0 - 1])))));
            }
        }
    }
    var_18 = var_12;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_19 = (min(((max((arr_7 [i_2] [i_3]), (arr_7 [i_2] [i_3])))), (((arr_7 [i_3] [i_3]) ? (arr_7 [i_2] [i_2]) : (arr_7 [i_3] [i_2])))));
                var_20 = arr_7 [i_2] [i_3];
                arr_12 [i_2] [i_2] [i_3] = (max(((((((10853717509331887572 != (arr_9 [i_3] [i_2])))) > ((min(1, (arr_7 [i_2] [i_3]))))))), 4026131300464801284));
            }
        }
    }
    #pragma endscop
}
