/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [7] = (((((arr_2 [i_0] [i_1] [i_1]) || var_7)) && (!var_2)));
                var_17 = ((+((max((arr_1 [i_0]), (arr_1 [i_0]))))));
                var_18 = var_0;
                arr_6 [i_0] [i_0] [i_1] = ((-var_3 >= (~0)));
                var_19 = (min(var_19, var_13));
            }
        }
    }
    var_20 = -53;
    var_21 = ((((!((max(17123682416831866615, 729))))) || (!var_11)));
    #pragma endscop
}
