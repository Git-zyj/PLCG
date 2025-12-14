/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_4;
    var_11 ^= ((var_6 > (((var_7 && var_2) ? 1 : -var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((max(((-((~(arr_2 [i_1]))))), ((-(arr_1 [i_0]))))))));
                arr_5 [i_0] [i_0] [4] = ((1349381798 >> (1349381802 - 1349381777)));
                arr_6 [i_0] [i_1] [i_0] = ((((((((var_7 ? -1308666324 : (arr_0 [i_1])))) ? (((arr_0 [i_0]) ? var_3 : (arr_2 [i_1]))) : (var_2 != 1550107018)))) ? ((((arr_3 [i_0] [i_1] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_1])))) : (max(1349381798, 3122255025))));
                var_13 = ((((var_8 ? (1 / 9361043188982625523) : (arr_2 [i_0])))) ? ((-(arr_2 [i_0]))) : ((((((1172712270 ? -1408921783 : (arr_1 [i_0])))) > (arr_0 [i_0])))));
            }
        }
    }
    #pragma endscop
}
