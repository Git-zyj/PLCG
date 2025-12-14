/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [13] = (arr_2 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 |= (max((min(((((-32767 - 1) != (arr_1 [i_0] [i_0])))), (max((arr_4 [i_0] [4]), (arr_5 [11] [11] [11]))))), (((!((max(-32763, (arr_0 [9] [9])))))))));

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_20 = ((!((((arr_0 [i_0] [i_1]) | (arr_7 [i_0] [13] [i_2] [13]))))));
                var_21 = (max(var_21, ((max((min((arr_4 [i_0] [1]), (min(-32766, (arr_1 [i_2] [i_0]))))), (arr_4 [1] [i_2]))))));
                var_22 = ((!(((((((arr_5 [i_2] [8] [i_0]) ? (arr_1 [i_1] [i_1]) : (arr_2 [i_1] [i_1])))) ? (arr_7 [i_2] [i_1] [8] [8]) : ((((arr_0 [i_1] [i_2]) || -32766))))))));
                arr_8 [i_0] [i_0] [i_0] [i_0] = ((!((min(((((arr_1 [i_0] [i_1]) != (arr_4 [i_0] [i_2])))), (arr_6 [i_0] [i_1] [i_0]))))));
            }
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                arr_11 [i_3] [i_1] [i_0] [i_0] = (((((arr_5 [i_0] [i_3] [i_3]) != (arr_4 [i_0] [i_3]))) ? ((min((!134), ((!(arr_10 [i_3] [i_0] [i_0] [i_0])))))) : ((((!32763) && (arr_5 [0] [0] [i_3]))))));
                var_23 = ((((!((min(-1588641717363818698, -32763)))))));
                arr_12 [i_0] [5] [i_0] = (min((max(63508, 32765)), ((max((min((-32767 - 1), (arr_5 [i_3] [i_1] [i_0]))), (((!(arr_5 [i_3] [i_1] [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
