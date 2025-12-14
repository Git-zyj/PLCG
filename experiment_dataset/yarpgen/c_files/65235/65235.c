/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (((var_9 + var_6) != ((var_2 - (max(5997770049719692571, 16988974468149476802))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_15 = (min((max((arr_0 [i_1 + 1]), var_5)), ((var_5 ? (arr_0 [i_1 + 1]) : (arr_2 [2] [i_1 + 1])))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [16] = var_4;
                    arr_9 [i_1] = (i_1 % 2 == zero) ? ((((((((var_5 ? var_5 : (arr_2 [i_0] [i_0])))) ? (-1 ^ var_1) : (((arr_2 [i_0] [i_1]) ^ var_2)))) << ((((~((~(arr_7 [i_1] [i_1 + 1]))))) + 619357467))))) : ((((((((var_5 ? var_5 : (arr_2 [i_0] [i_0])))) ? (-1 ^ var_1) : (((arr_2 [i_0] [i_1]) ^ var_2)))) << ((((((~((~(arr_7 [i_1] [i_1 + 1]))))) + 619357467)) + 578617121)))));
                }
            }
        }
    }
    var_16 = var_3;
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_18 ^= (((((~var_8) & var_13)) ^ (23510 & var_0)));
                            arr_18 [i_3] [i_4] [7] [i_4] = (arr_12 [i_5]);
                        }
                    }
                }
                var_19 = (min(var_19, ((((-9223372036854775807 - 1) == (arr_11 [i_4]))))));
                var_20 = (var_8 | -179331070);
                var_21 ^= var_6;
            }
        }
    }
    #pragma endscop
}
