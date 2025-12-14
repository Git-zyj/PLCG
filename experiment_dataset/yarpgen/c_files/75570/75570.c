/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, ((max((var_6 | -8586684208957599445), -365626704577334220)))));
                    var_11 = (max((min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1]))), (((!((min((arr_6 [i_2] [i_2]), (arr_1 [i_1])))))))));
                    var_12 ^= ((arr_3 [i_0]) % 12855795808310666650);
                }
            }
        }
    }
    var_13 &= ((2254532494389227816 - 13455958696432900523) ? (((-(min(1, -2254532494389227822))))) : ((var_6 - ((var_6 ? 71123284706680181 : var_2)))));
    var_14 -= ((var_3 / var_9) % -2852649540050798614);
    var_15 = (((((1 << ((((288230238712758272 >> (9223372036854775787 - 9223372036854775780))) - 2251798739943415))))) ? -2551220151157604787 : (((var_1 | var_3) >> ((((var_8 ? var_5 : var_3)) - 14842585319101579340))))));
    #pragma endscop
}
