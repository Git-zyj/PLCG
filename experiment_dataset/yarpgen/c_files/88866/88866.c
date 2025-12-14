/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((var_10 ? (((var_10 ? var_12 : (!var_9)))) : var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] = (var_9 + 33);
                    var_17 = ((83 ? 16440488405826320660 : 0));
                    arr_10 [i_0] [i_0] [i_0] = -173;
                }
                var_18 = (max(var_18, (79 != 50)));
                var_19 &= (176 - -168377338);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            arr_16 [i_0] = ((((-1390983482 ? 172 : 32767)) | (((arr_0 [i_0 + 2] [i_0]) % (arr_2 [i_0 + 2])))));
                            var_20 -= ((2970155316479486828 ? 124 : 104));
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, var_5));
    var_22 = var_5;
    #pragma endscop
}
