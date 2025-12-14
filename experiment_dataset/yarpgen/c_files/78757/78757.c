/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 &= (arr_0 [i_0] [i_0]);
                arr_6 [i_0] [i_0] = ((max(var_9, 13087593275105656956)) | var_8);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_20 -= (arr_8 [10] [i_3]);
                arr_13 [i_3] = (((arr_9 [i_2]) ? ((((127 || 3) != var_9))) : (min((~var_16), (-22 * -56)))));
                var_21 = var_7;
            }
        }
    }
    #pragma endscop
}
