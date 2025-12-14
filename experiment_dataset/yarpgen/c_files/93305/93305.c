/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (arr_1 [i_0] [i_1])));
                var_18 = (((((-2147483620 ? 48 : ((((arr_4 [i_1]) == -1094235057)))))) ? (var_2 != 208) : ((-(arr_1 [i_0 - 2] [i_0 + 3])))));
                arr_5 [i_1] [i_1] = (((((-(arr_0 [i_0 - 1])))) ^ (46 | var_2)));
            }
        }
    }
    var_19 = var_1;
    var_20 = var_7;
    var_21 = var_12;
    #pragma endscop
}
