/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((var_6 >> (11757503361249688452 - 11757503361249688423)))))) >= (var_1 > var_0)));
    var_13 = ((104 * (((((24853000592862288 ? 11757503361249688472 : var_9))) ? (!var_9) : (~var_1)))));
    var_14 = (var_8 ? var_4 : (((!(var_3 || var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [i_2] [i_0] = (((var_2 != 11757503361249688452) < var_11));
                    var_15 = (((((((var_11 ? var_0 : 6689240712459863163)) & 24853000592862288))) ? (arr_5 [i_2 + 1]) : var_8));
                    var_16 = (min(var_16, (((((((32767 != var_9) ^ 7))) ? var_6 : ((var_3 ^ (((arr_0 [i_0]) ? (arr_5 [i_2]) : 789424288)))))))));
                }
            }
        }
    }
    #pragma endscop
}
