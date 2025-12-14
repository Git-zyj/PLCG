/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((((max(var_17, ((40768 >> (var_8 - 4654487782757139817)))))) ^ (((max(var_13, 18446744073709551588)) ^ var_14))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (min(var_17, (arr_0 [i_1])));
                    var_21 = (max(var_21, (((+(max((arr_2 [i_0]), (((arr_3 [3] [i_1] [i_2]) ? var_18 : (arr_1 [i_0]))))))))));
                    var_22 = (max(var_22, (((((((~(arr_1 [i_0]))) <= (!108))) ? ((((((arr_2 [i_2]) != var_12))))) : (((((~(arr_4 [i_0] [i_0])))) ? ((((arr_4 [i_2] [i_2]) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_5 [i_0] [i_0] [i_0])))) : (arr_4 [1] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
