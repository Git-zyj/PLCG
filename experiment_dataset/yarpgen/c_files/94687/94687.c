/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_20 *= (arr_1 [i_0] [i_1]);
                var_21 = (max((min(((min(208, (arr_3 [i_0])))), (arr_2 [i_1]))), (min(1, ((-(arr_0 [i_1])))))));
                var_22 *= (((arr_1 [i_1 - 1] [i_1]) == ((((((~(arr_3 [i_1 - 2])))) ? ((190 ? -11858 : (arr_2 [i_1]))) : ((21446 ? (arr_3 [i_0]) : 1)))))));
                var_23 = (((((~((max((arr_2 [i_0]), 29743)))))) ? (arr_0 [i_0]) : (min((arr_3 [i_1 - 2]), ((8192 ? (arr_2 [2]) : (arr_2 [i_0])))))));
                arr_4 [i_1 - 2] [i_1] = ((((!(arr_3 [i_0])) ? (~0) : (((arr_1 [17] [i_1]) ? 66 : (arr_2 [i_1 - 3]))))));
            }
        }
    }
    var_24 = var_1;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_25 = (max(var_25, (((-(arr_9 [i_2] [i_3]))))));
                arr_11 [i_2] [i_3] = (((((12 ? -729558646 : ((-(arr_2 [i_3])))))) ? (((arr_6 [22]) ? (((arr_10 [i_2]) ? (arr_2 [i_3]) : 186)) : ((-11837 ? 203 : (arr_8 [i_2]))))) : ((((((arr_6 [i_2]) ? (arr_7 [14]) : 3537676520762948645))) ? ((((arr_7 [9]) || (arr_9 [17] [17])))) : ((-(arr_6 [i_2])))))));
                var_26 = ((--46082) ? ((1446567878 ? (!1) : (arr_10 [1]))) : (arr_8 [i_3]));
            }
        }
    }
    var_27 = var_5;
    #pragma endscop
}
