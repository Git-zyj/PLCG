/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max((!var_4), var_6)));
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((~(max((~var_2), 0))));
                arr_5 [11] = 2589574678;

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_14 = ((((((arr_1 [i_0]) ? (~var_4) : (((arr_9 [i_0] [i_0] [i_2]) | 2137199526))))) ^ ((~(~var_3)))));
                    var_15 = (arr_2 [3]);
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_16 = (min(var_16, (((18446744073709551613 >> ((((1252748460 ? var_9 : 1023) - 7023173226872371828))))))));
                    var_17 = (min(((((!1252748476) <= (!0)))), 1252748460));
                }
            }
        }
    }
    var_18 = (~var_6);
    var_19 = 12283929229175322150;
    #pragma endscop
}
