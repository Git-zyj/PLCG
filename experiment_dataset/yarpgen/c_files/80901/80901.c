/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 = var_12;
    var_18 = ((var_9 ? var_14 : ((var_13 ? ((-837952087873963768 ? -837952087873963739 : 5695679769458367906)) : 837952087873963756))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = ((99 >> (-117 + 128)));
                var_20 = ((((max((min(var_12, var_11)), (837952087873963751 && 1)))) ? ((((((90 ? var_7 : (arr_3 [i_1] [i_0 + 1] [i_1])))) ? ((1218403236332308308 ? 160 : var_12)) : (15918261570067440820 >= 90)))) : ((((min(var_15, 15918261570067440820))) ? (((max((arr_0 [i_0]), var_0)))) : (arr_3 [i_1] [i_0] [i_1])))));
            }
        }
    }
    var_21 = (min(((1 ? 168 : 25)), var_15));
    #pragma endscop
}
