/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, var_13));
                    var_17 = ((((137 ? 9 : 1)) & (arr_7 [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 += ((((arr_7 [i_1] [i_3] [i_4]) ? ((~(arr_4 [i_1] [i_3]))) : var_7)));
                                var_19 = (!-32767);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((min(-81, -25))) ? 247 : 5272185286023047415));
    var_21 = (((((var_8 > 185) >> (var_4 + 1245649439619257499))) % var_1));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_22 -= ((~(78 && 1)));
                var_23 = ((~(arr_16 [i_5])));
            }
        }
    }
    var_24 = var_7;
    #pragma endscop
}
