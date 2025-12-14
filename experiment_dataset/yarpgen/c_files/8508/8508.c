/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= -7125916;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((((1 >> 21) > ((9 / (arr_3 [i_0] [i_1])))))) <= (((65535 || (((21 ? 88 : 21))))))));
                var_18 = (min(var_18, ((min((min(((15 ? 565859715 : (arr_0 [0]))), ((((-89 + 2147483647) >> (101 - 90)))))), ((~(min(65535, (arr_0 [8]))))))))));
                var_19 = 65533;

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_20 = ((-(((-31 && 1) ^ (-22 && 4294967295)))));
                    arr_8 [i_0] = max((1 - -35), (((min(1, (arr_1 [i_0]))))));
                }
            }
        }
    }
    var_21 = ((-1042 ? (((!((max(1, 1)))))) : ((-(~-1)))));
    #pragma endscop
}
