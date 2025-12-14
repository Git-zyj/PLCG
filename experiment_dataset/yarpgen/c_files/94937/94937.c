/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_13 = 255;
                            var_14 = (max((((!(!var_7)))), var_11));
                        }
                    }
                }
                var_15 = ((~((((min((arr_1 [i_1]), -28))) - (arr_2 [18] [i_0] [i_1])))));
                arr_8 [i_0] = (min((min((min(2927388974626053198, 1)), (((~(arr_2 [i_0] [i_0] [i_1])))))), (max(var_6, (max(var_8, -2927388974626053206))))));
                var_16 = (min(((1030792151040 ? var_4 : (min(18446743042917400553, var_9)))), ((max(((min(var_12, (arr_0 [i_0] [i_0])))), 739264832818026154)))));
            }
        }
    }
    var_17 = var_8;
    #pragma endscop
}
