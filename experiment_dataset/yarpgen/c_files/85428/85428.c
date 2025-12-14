/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = ((-(((var_1 || (~134217728))))));
                arr_5 [i_0] [i_1] = ((+((+((var_6 ? (arr_0 [i_0] [i_0]) : (arr_2 [16])))))));
                var_11 = (~-var_4);
                var_12 = (min(var_8, ((max(var_8, var_0)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_13 = ((~((var_5 | (arr_9 [i_2] [i_2 + 4] [i_2 + 3] [i_2 + 2])))));
                            var_14 = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_15 = (((((-(~var_1)))) ? ((((4294967295 ? 2147483647 : 65527)))) : (max(var_3, 48))));
    var_16 = ((max(var_6, var_0)));
    var_17 = (13681005453487540570 == var_5);
    #pragma endscop
}
