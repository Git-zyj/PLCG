/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((((((min(50749, 18256721792918189032)) >= ((max(-1319056911, -1319056911)))))) | ((((var_13 && -1319056911) && var_17))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] &= ((~((((max(var_14, var_12))) ? (-2147483621 | 36959) : 26392))));
                arr_5 [i_0] [i_1] [4] = var_5;
                arr_6 [i_0] [i_1] = (min(var_8, ((var_10 ? (var_2 + 0) : var_4))));
            }
        }
    }
    var_19 *= (2097151 || var_3);
    var_20 = var_7;
    #pragma endscop
}
