/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-((((!-1) && (((var_2 ? var_8 : var_2))))))));
    var_14 = -1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1 + 1] = 2263107100575818183;
                arr_6 [i_0] [i_1] [i_0] = ((max((min((arr_4 [i_0]), 3069113406)), (max(1225853892, 1225853884)))));
                arr_7 [i_1] [i_1] = (min((((((3069113435 ? 1 : (arr_4 [6]))) > -0))), ((((min((arr_4 [i_0]), (arr_4 [i_0])))) | ((max((arr_4 [i_0]), (arr_1 [i_0]))))))));
                arr_8 [i_0] [i_1] [i_1] = ((-302191028 ? 6549187670361637839 : 15));
                var_15 = -0;
            }
        }
    }
    var_16 = ((!(((-((max(var_4, -4540))))))));
    var_17 = ((((~(var_11 ^ -19))) > ((((1200194797 >= var_12) || var_6)))));
    #pragma endscop
}
