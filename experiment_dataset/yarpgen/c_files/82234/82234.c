/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_0);
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((-((-(((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] = (min((min(-726595339553333300, 3939127474091401612)), (((((max((arr_0 [i_0]), (arr_1 [i_0] [i_0])))) ? (-32767 - 1) : var_5)))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_13 = (max(var_13, (arr_5 [i_1] [4])));
                    var_14 = arr_1 [i_2 + 1] [14];
                    arr_12 [11] [i_3] [i_3] = (arr_4 [i_2 + 3] [i_2 + 1]);
                    var_15 = (min((((-(arr_6 [i_2 - 2] [i_2 - 2])))), (arr_7 [i_2 - 1] [i_3])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    arr_18 [i_1] [i_1] [i_5] = (arr_16 [i_4] [i_4]);
                    arr_19 [i_5] [i_4] [1] [i_1] = -32765;
                    arr_20 [i_1] [i_1] [10] [i_5] = (arr_10 [i_4 + 1] [i_4] [i_4]);
                }
            }
        }
    }
    var_16 *= 1;
    #pragma endscop
}
