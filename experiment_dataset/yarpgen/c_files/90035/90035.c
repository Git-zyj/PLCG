/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((0 ? 251 : var_6)), 248));
    var_12 += ((((var_5 ? var_3 : (var_0 - var_9))) << (min(((var_0 << (var_4 - 2135))), (!1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (max(((~(arr_4 [i_1 - 1] [i_1 - 1]))), (((!(arr_1 [i_1 - 1] [i_1 - 1]))))));
                var_14 = (max(var_14, (arr_2 [i_1] [i_1 + 1])));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_15 = (min(var_15, ((((((15285652341947504088 >> (((arr_3 [i_0] [i_0]) - 8903745302627855257))))) ? (((((max(4294967278, (arr_2 [i_1 - 1] [i_1 - 1]))) <= (!var_4))))) : ((-(arr_5 [i_2] [i_1 + 1] [i_1 - 1] [1]))))))));
                    var_16 = var_4;
                    arr_7 [i_1] [i_0] [i_1] = ((!(arr_6 [i_1] [i_1])));
                }
                var_17 += var_5;
            }
        }
    }
    var_18 = var_6;
    #pragma endscop
}
