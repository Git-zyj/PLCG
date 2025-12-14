/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((((((max(89994841316819418, var_10))) ? (~89994841316819431) : 41811)) != 89994841316819417));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = ((-(min(-89994841316819431, 1))));
                var_14 = ((((max((arr_2 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_1] [i_1])))) ? ((min((max(89994841316819421, var_11)), (~134217728)))) : (arr_5 [i_0])));
                var_15 = 1;
                var_16 = (min((((((2298910203 ? 224420647 : var_3)) != var_0))), (max((((arr_1 [i_0] [i_1]) ? -7829225089011511147 : var_0)), (arr_0 [i_0] [i_1])))));
            }
        }
    }
    #pragma endscop
}
