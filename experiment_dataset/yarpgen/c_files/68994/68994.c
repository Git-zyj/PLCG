/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (((-1 + 9223372036854775807) << (((((max(((var_9 ? -2349853169910066655 : var_16)), -9223372036854775793)) + 2349853169910066711)) - 56))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = ((var_4 | var_3) >= var_14);
                    var_22 = ((-((min((!3836280333), (!28073))))));
                    arr_7 [i_0] [5] [i_2] [4] = (!var_8);
                    var_23 = (max(var_23, (((max(-7773, 994441883)) | ((((!(arr_4 [i_0] [i_0 + 4])))))))));
                }
            }
        }
    }
    #pragma endscop
}
