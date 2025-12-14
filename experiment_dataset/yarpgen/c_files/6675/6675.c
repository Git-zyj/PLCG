/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 4006373617979123842;
    var_16 = (((4294967295 < 1685889365) + ((21681 ? (4523296629522029767 | 56967) : 116))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] = (-4523296629522029767 != (((((((3649 % (arr_1 [i_1])))) < (((arr_1 [i_0]) | -4523296629522029767)))))));
                arr_5 [i_0] [i_1] [i_1] = (min((56967 % 32768), (((((-127 - 1) | -4523296629522029768)) & (~35)))));
                var_17 = (((((((((-90 ? 56961 : (arr_3 [i_0] [i_0])))) < 3112708167421537320)))) % 641050753));
                arr_6 [i_0] [i_0] [i_0] = (((-127 - 1) - (3769 >= -4523296629522029786)));
            }
        }
    }
    #pragma endscop
}
