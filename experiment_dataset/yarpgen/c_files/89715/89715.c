/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-var_11 | ((max((~var_3), (4095 == var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((-(1 - -924434275)));
                var_14 = ((~(((!(((~(arr_2 [i_1])))))))));
                var_15 = (max((var_3 + var_7), (((!(arr_5 [i_1 - 1] [i_0 + 3]))))));
                arr_7 [i_0] = ((~(((var_0 <= (arr_0 [i_0 + 3]))))));
            }
        }
    }
    var_16 = var_6;
    var_17 = (max(((~(var_6 ^ -924434274))), ((~(var_9 >= var_11)))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_18 = ((((max((arr_4 [i_3 - 1]), var_2))) >> (((var_3 && ((max(18446744073709551615, 18446744073709551598))))))));
                    var_19 += (((!127) % (max((~127), -var_0))));
                    arr_17 [3] = ((~((~(((arr_15 [i_2] [i_3] [1]) / (arr_4 [i_3])))))));
                    arr_18 [i_3] = max((max(13368514221182596448, var_0)), (((1 << (((arr_0 [i_3 + 1]) - 12839787959631618861))))));
                    var_20 += ((((max(((-(arr_11 [i_2] [i_4]))), var_7))) - (((arr_4 [i_3 + 1]) + (arr_1 [i_3 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
