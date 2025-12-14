/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] &= (min((((!(6651370634417733793 + -64)))), var_7));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_3 - 1] [i_3] = 7;
                            arr_12 [i_0] = ((-6651370634417733793 + (((~(arr_5 [i_1 + 1] [i_0 + 1]))))));
                            var_16 = (((((arr_0 [i_0 + 1]) ? (arr_2 [i_2] [i_0 + 1]) : 9223372036854775790))) ? ((((arr_0 [i_1]) <= var_12))) : ((-((var_12 ? var_9 : 250)))));
                            var_17 *= ((((~(18446744073709551603 || var_14))) <= ((((arr_6 [i_3 + 1] [i_3 + 2] [i_3] [i_3 - 1]) != (arr_6 [i_0 + 1] [i_0 + 1] [i_3 + 2] [i_3 + 2]))))));
                        }
                    }
                }
                arr_13 [i_1 - 1] [i_0] [i_0] &= (((max(((21961 ? -7178 : -6651370634417733791)), 43574))) ? 1 : ((~((43571 ? (arr_8 [i_0] [i_0] [i_1] [i_1 - 1]) : 1)))));
                var_18 = (max(var_5, (max(-6651370634417733793, 4294967295))));
            }
        }
    }
    var_19 = var_15;
    #pragma endscop
}
