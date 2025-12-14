/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((var_13 ? 1 : 5560309398325595322))), var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (max((~114), (arr_3 [7] [17] [11])));
                var_20 += ((~((((((arr_3 [i_0] [i_0] [17]) ? 60 : 1))) ? (max(-120, 16763487144426749710)) : 29))));
                var_21 = max(((+((var_9 ? (arr_4 [i_0] [i_1] [i_0]) : var_14)))), 6);
            }
        }
    }
    var_22 = 13075;
    var_23 = (1 ^ var_17);
    var_24 = ((((max(((0 ? var_11 : 53)), 12))) ? var_17 : ((74 ? 0 : ((max(181, var_11)))))));
    #pragma endscop
}
