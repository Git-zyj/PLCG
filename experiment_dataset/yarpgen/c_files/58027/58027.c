/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((-((var_7 ? var_7 : var_6))))), (min((min(-6219058600730730847, 3913890857)), 6219058600730730840))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (min(((((min((arr_1 [i_0] [i_0]), var_0))) ? (((min((arr_5 [i_0]), var_6)))) : -6219058600730730853)), (((~((min(0, (arr_5 [i_0])))))))))));
                    arr_7 [i_0] [i_1] [i_2] = ((((min((min(13766212843249353139, 27816)), (((1 ? 1456822048482496179 : var_12)))))) ? (min((((1 ? var_6 : (arr_6 [i_0] [i_0] [i_1] [i_2])))), (min(-930821197, var_3)))) : ((((!var_12) ? ((~(arr_6 [i_0] [i_2] [i_0] [i_0]))) : (((arr_0 [i_2]) ? (arr_2 [i_1]) : (arr_1 [i_1] [i_1]))))))));
                    arr_8 [i_0] [i_1] = (min(((((((1 ? 6219058600730730846 : (arr_0 [i_2])))) ? (((arr_2 [i_1]) ? 1 : 3605632983)) : 3605632974))), ((((max(6219058600730730846, var_8))) ? (((var_12 ? var_7 : (arr_2 [i_1])))) : -var_13))));
                }
            }
        }
    }
    #pragma endscop
}
