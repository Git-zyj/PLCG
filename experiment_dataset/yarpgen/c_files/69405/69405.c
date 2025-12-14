/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (arr_0 [i_0]);
                arr_4 [i_0] [i_1 - 1] [i_0] = (((((arr_1 [i_1] [i_1 - 1]) ? (arr_1 [i_1 - 1] [i_1 - 2]) : (arr_1 [i_1] [i_1 + 2]))) * ((max((arr_1 [i_1] [i_1 - 1]), 1)))));
                var_12 = (((min(12754826381089454602, (min(0, 18446744073709551608))))) || ((max((arr_3 [i_0] [i_0]), (arr_2 [13] [i_0])))));
            }
        }
    }
    var_13 -= 255;
    var_14 |= ((((((((var_10 ? 40486 : 21))) ? (var_9 * 65535) : (~var_5)))) ? ((min(var_0, var_6))) : (((12 != 6141617414423158317) ? ((var_1 ? var_10 : var_8)) : 32767))));
    #pragma endscop
}
