/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = (((var_9 == var_8) == ((-6495 ? 6495 : 1))));
    var_17 = var_13;
    var_18 = (((var_6 ? ((36875 ? 6495 : -9820) : ((min(-13181, 28668)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (max((max((((arr_0 [i_0]) ? 0 : (arr_3 [i_1]))), (arr_0 [i_0]))), 28681));
                var_19 = ((var_5 >= (arr_5 [i_0])));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_20 = (min(var_20, (((((~((((arr_8 [i_0] [i_2]) >= var_7))))) >= (((((536870911 ? -17347 : 1))) ? 1 : 0)))))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = (max((min((arr_1 [i_0 + 1]), var_2)), ((((!var_8) ? (arr_0 [i_0]) : ((var_9 ? var_1 : var_3)))))));
                    var_21 = (((var_3 % var_1) ? ((((max(9669139792032489529, (arr_7 [16] [i_1] [16] [i_1])))) ? var_4 : 240)) : (((~((~(arr_4 [i_0] [i_0]))))))));
                }
                var_22 = (max(var_22, var_4));
                arr_11 [i_0] [i_0] [i_1] = ((var_1 ^ ((((((13181 / (arr_5 [i_0])))) ? ((6 ? 16761 : (arr_8 [i_0] [i_1]))) : ((max(36868, 124))))))));
            }
        }
    }
    #pragma endscop
}
