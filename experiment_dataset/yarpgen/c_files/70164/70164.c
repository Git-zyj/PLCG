/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_0] = (min((((!((min((arr_3 [i_1] [i_1]), 65504)))))), ((7 ? var_2 : -var_4))));
                    arr_9 [i_1] = ((!56928) ? (arr_2 [i_0] [i_0]) : (min(39, 40)));
                    arr_10 [i_0] [i_0] [i_0] = (~65496);
                }
            }
        }
    }
    var_18 = (max(var_18, ((((((65503 ? (((var_2 ? 16682 : var_6))) : ((25 ? var_14 : 4177817118103629085))))) && ((((var_10 ? var_11 : 28)))))))));
    #pragma endscop
}
