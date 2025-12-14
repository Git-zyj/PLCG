/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = ((304993899 < (arr_5 [i_1 - 4])));
                var_11 = (max((((-1 != ((18446744073709551615 ? var_8 : (arr_2 [i_1])))))), (min(((min(var_0, var_8))), ((7 ? 1 : 6))))));
            }
        }
    }
    var_12 = 1;
    var_13 = (max(var_4, var_1));
    var_14 = ((9223372036854775795 < (min(5482167896933067941, var_2))));
    #pragma endscop
}
