/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((var_6 != var_14), ((-(var_18 | var_12)))));
    var_21 = ((12797992440944060402 ? 12797992440944060393 : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((!((min((arr_1 [i_1 - 1] [i_1 + 1]), (max((arr_6 [i_0] [i_0]), (arr_6 [i_0] [i_1 + 1]))))))));
                arr_8 [i_0] [i_1] = (((((((((arr_2 [i_0]) ? (arr_1 [4] [6]) : (arr_1 [i_1] [i_0])))) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_1 - 2])))) || (((arr_5 [i_0] [i_1]) || (((arr_1 [i_1] [9]) != (arr_5 [i_0] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
