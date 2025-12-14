/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((-((100 ? 24576 : 251658240))))) ? ((0 ? (min(var_10, var_11)) : (((24490 ? 2 : -24597))))) : 4294967295);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = -17;
                arr_6 [i_0] [i_0] [i_0] = ((((((arr_3 [i_1 - 3] [i_1 - 3]) & (arr_3 [i_1 - 3] [i_1 - 1])))) ? 4294967274 : ((((var_7 != (arr_4 [i_0] [i_1])))))));
                var_15 = (min(var_15, ((((((var_12 ? ((2383133854 ? var_1 : var_4)) : var_1))) ? 65 : (arr_2 [7] [i_1] [i_1]))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_16 = (((max((arr_0 [i_1 + 2] [18]), -215997463)) / ((var_10 - (arr_3 [i_2] [i_2])))));
                    var_17 = (max(var_17, (((((((arr_3 [i_1 - 2] [i_1 + 1]) && ((!(arr_9 [18] [i_1]))))))) % (~4294967280)))));
                    var_18 = (min(var_18, 24491));
                    var_19 = var_13;
                }
            }
        }
    }
    #pragma endscop
}
