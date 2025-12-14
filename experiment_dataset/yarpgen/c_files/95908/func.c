/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95908
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
    var_16 = ((/* implicit */_Bool) (+((((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)23)) : (((/* implicit */int) var_13))))) : (((var_11) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
    var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) (_Bool)1))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_15))))))))) >= (min((((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65513))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6762123308085358742LL)) || (((/* implicit */_Bool) (unsigned short)65513))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] |= ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                arr_7 [i_1] [(unsigned short)3] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65513)));
                arr_8 [(unsigned short)7] [i_1] = ((/* implicit */_Bool) ((arr_4 [i_1] [i_1]) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_0))));
            }
        } 
    } 
    var_18 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_9)), (3418412466729443122ULL)));
    var_19 = ((/* implicit */unsigned long long int) var_0);
}
