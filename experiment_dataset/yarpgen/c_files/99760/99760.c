/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_11, var_8));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = (((((arr_3 [i_0 - 2]) >> (var_10 - 12512601920046298652))) << (((arr_4 [i_0 + 1] [i_1] [14]) - 6176251631830328953))));
                var_22 = (((min(-3225379840225605303, 131008)) != (((-((-(arr_2 [i_0] [i_0] [i_1]))))))));
                var_23 = ((-(arr_0 [i_0 - 4])));
                var_24 = (min(var_24, (((((((var_6 + 2147483647) >> (((arr_4 [i_0 - 1] [i_0] [i_0 + 3]) - 6176251631830328939))))) ? (21497 + -7287) : ((((-(arr_2 [i_0] [i_0] [i_0]))))))))));
            }
        }
    }
    var_25 = var_1;
    var_26 = var_9;
    #pragma endscop
}
