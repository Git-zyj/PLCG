/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62597
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */int) (signed char)-39)), (var_9))) : (((/* implicit */int) var_1)))), (((int) (-(var_8))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) min((((/* implicit */long long int) (unsigned short)16747)), (6805395782335311180LL)))))));
                    var_11 = ((/* implicit */unsigned short) max((max((arr_4 [i_0] [i_0 + 1] [i_0]), (arr_4 [i_0] [i_0 - 1] [i_0]))), (max((((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1] [i_0])) ? (arr_4 [i_0] [i_0] [10]) : (arr_6 [11] [(unsigned short)7] [i_1] [i_1]))), (((/* implicit */int) (signed char)84))))));
                    var_12 = ((/* implicit */signed char) max((arr_3 [i_0] [i_1] [i_2]), (((((((/* implicit */_Bool) 6805395782335311170LL)) || (((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0])))) ? (((/* implicit */int) arr_2 [3] [i_1] [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (var_0))))))));
                }
            } 
        } 
    } 
    var_13 &= ((/* implicit */int) (!(((/* implicit */_Bool) (~((~(var_7))))))));
}
