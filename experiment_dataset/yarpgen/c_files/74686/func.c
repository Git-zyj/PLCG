/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74686
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
    var_14 = ((/* implicit */signed char) 7499545917169988896LL);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_15 -= ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) ((unsigned char) 14800796071953110095ULL))));
                    var_16 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_8)) ? (arr_3 [i_0] [i_1] [i_2]) : (((/* implicit */int) arr_1 [i_0] [i_1])))));
                }
            } 
        } 
    } 
    var_17 -= ((/* implicit */signed char) max((((/* implicit */long long int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (9223372036854775807LL)))));
}
