/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = ((((((min(var_18, var_6))))) * 134217727));
        var_21 = (134217735 << ((((-1901160271 ? 66 : -78)) - 65)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((((max((arr_4 [i_2] [16] [i_0]), (arr_4 [i_0] [i_0] [i_2])))) ? (~134217727) : (max(134217709, var_9))));
                    var_22 = (1 < 2047);
                    var_23 *= (arr_4 [15] [i_1] [i_0]);
                    arr_8 [i_0] [i_1] [i_2] [i_1] = var_18;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = 498890030;
        var_24 = max(-4272980375, (!2056));
        var_25 = 512;
        var_26 = ((((arr_11 [i_3] [i_3]) || 4)));
        var_27 -= (((((min(var_12, (arr_11 [i_3] [i_3])) < var_5)))));
    }
    var_28 = var_13;
    #pragma endscop
}
