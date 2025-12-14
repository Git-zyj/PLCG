/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_0;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 ^= ((((((arr_6 [i_2] [i_0]) && (((arr_5 [i_1] [i_1] [i_1] [i_0]) && var_1))))) + 1));
                    arr_7 [i_0] [i_0] [i_2] = (arr_4 [3] [i_1]);
                }
            }
        }
        var_12 += ((var_6 ? 46448 : ((((!var_6) && (arr_1 [9] [i_0]))))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 8;i_5 += 1)
            {
                {
                    var_13 *= (((var_3 % var_4) > var_1));
                    var_14 = 1;
                    var_15 *= ((var_2 + ((-(arr_16 [i_5] [i_5 + 3] [i_5] [i_5 - 3])))));
                    var_16 = ((-(arr_10 [0] [i_4])));
                    var_17 = (max(var_17, ((-3365045588236447864 ? (~46448) : (((arr_15 [i_3] [i_5 - 2] [i_5] [i_3]) ^ var_0))))));
                }
            }
        }
        var_18 = var_4;
    }
    var_19 ^= ((((var_3 && var_4) && 13073748697274168128)) && (!150));
    #pragma endscop
}
