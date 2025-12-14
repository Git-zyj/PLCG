/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((((~((var_8 ? -23796 : (-32767 - 1))))) >> ((((var_12 ? var_4 : var_9)) - 1043397094)))))));
    var_19 = (max(var_19, (((9223372036854775789 ? (((var_12 >= (~-9223372036854775789)))) : (~var_8))))));
    var_20 = (max(((-9223372036854775790 ^ ((var_7 ? var_9 : var_3)))), (-2349 + 24158)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = ((((65535 & (arr_5 [i_0] [i_1] [i_2] [i_1 + 2]))) <= (arr_5 [i_0] [i_1 + 4] [i_2] [i_2])));
                    arr_7 [i_0] [i_0] [i_2] = ((!(((arr_2 [i_0]) || (arr_2 [i_0])))));
                    arr_8 [i_0] [i_2] = 11088;
                }
            }
        }
    }
    #pragma endscop
}
