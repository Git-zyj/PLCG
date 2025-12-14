/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (max(-var_14, (((31 << (845399987 - 845399981))))));
                var_17 = (max(var_17, (((max(29691, (65535 - 817282229)))))));
            }
        }
    }
    var_18 = (max(((max((min(var_6, var_1)), (var_7 ^ var_4)))), ((var_4 & ((var_12 << (var_10 - 13182012067142133014)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 20;i_3 += 1)
        {
            {
                var_19 = (max((((817282229 ? 0 : 8191))), (max(((max(3398621798, 31))), var_14))));
                var_20 = 62086;
                var_21 = (min(var_21, ((((!(arr_7 [i_3 - 4]))) ? ((var_5 ? (arr_6 [i_3 - 3]) : 3477685067)) : (((min((arr_7 [i_3 + 1]), (arr_7 [i_3 - 3])))))))));
                var_22 ^= (!17859273685902249630);
            }
        }
    }
    #pragma endscop
}
