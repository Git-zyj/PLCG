/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= 21794;
    var_15 = (max(-2244, 58));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = (((((~(arr_6 [i_0 - 2] [i_0 + 1] [i_1] [i_0 + 1])))) ? ((((var_7 % (arr_3 [i_1] [i_1] [i_1]))))) : (max((!8064), ((-(arr_0 [i_0])))))));
                    var_16 = var_10;
                    var_17 -= (!8064);
                }
            }
        }
    }
    var_18 = ((~(((~174) ? var_4 : (var_1 < -73)))));
    #pragma endscop
}
