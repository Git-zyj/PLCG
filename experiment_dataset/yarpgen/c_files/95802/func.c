/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95802
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
    var_15 = ((((/* implicit */_Bool) var_13)) || (var_1));
    var_16 = ((/* implicit */long long int) (-(max((max((261120), (((/* implicit */int) var_3)))), (((/* implicit */int) max((((/* implicit */short) var_3)), (var_4))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-104)) || (((/* implicit */_Bool) ((arr_0 [i_1]) & (arr_0 [i_1 + 1]))))));
                arr_5 [i_0] [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((((!(((/* implicit */_Bool) (short)-18508)))) ? (((/* implicit */int) (short)-12867)) : (((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) (unsigned char)99)) : (303971997))))) : (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) 1073741820LL)) || (((/* implicit */_Bool) arr_1 [(short)16]))))), (arr_1 [i_0]))))));
                var_17 = 524272LL;
            }
        } 
    } 
}
