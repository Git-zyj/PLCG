/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(var_12, ((var_3 ? 8989688406488652366 : 1250453225987135268))))) ? (((!var_15) ? var_12 : (59053 >= 1250453225987135276))) : (min(-var_6, (var_14 >> 1)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [14] [i_0] = (((((~(arr_0 [i_0 + 1])))) ? ((~(arr_4 [i_0]))) : (((((((arr_0 [i_2]) ? var_2 : (arr_1 [i_1] [i_2]))) >= (arr_1 [i_0] [i_0])))))));
                    arr_8 [i_2] [i_1] [i_2] = (arr_5 [i_0 - 1] [i_0 + 1]);
                }
            }
        }
    }
    var_17 = var_9;
    var_18 = (34 >= var_10);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                arr_14 [i_3] [15] = (arr_4 [i_4]);
                arr_15 [i_4] [i_4] = (max((arr_0 [i_4]), (((((((arr_13 [i_3] [13] [i_3]) >= 13406871015732162774))) < -22707)))));
                arr_16 [i_3] [i_4] = -32765;
                arr_17 [i_3] [i_4] = (arr_12 [i_3]);
            }
        }
    }
    #pragma endscop
}
