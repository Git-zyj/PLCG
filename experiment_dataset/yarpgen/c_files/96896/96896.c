/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_1;
                arr_6 [11] = (min(((((((arr_4 [i_0] [i_0]) ? 3660780865 : var_6))) ? ((var_2 ? var_6 : var_2)) : (((var_5 ? 2152639716 : var_3))))), (arr_4 [i_1] [i_0])));
                var_10 = (max(var_10, ((min(((((var_1 == var_6) != ((0 ? 28539 : (arr_3 [i_0])))))), (arr_4 [i_0] [i_0]))))));
                arr_7 [i_0] [i_0] &= (max(((min((arr_1 [i_0] [i_1]), (arr_1 [7] [i_1])))), (arr_3 [i_0])));
            }
        }
    }
    var_11 &= var_8;
    var_12 = ((var_7 + ((min(var_9, var_7)))));
    var_13 = var_8;
    var_14 = ((((var_8 ? var_6 : var_7))) ? var_4 : ((((min(var_8, var_5))) ? (max(var_4, var_6)) : ((3670016 ? var_6 : var_9)))));
    #pragma endscop
}
