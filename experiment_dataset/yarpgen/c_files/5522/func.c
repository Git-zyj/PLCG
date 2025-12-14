/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5522
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0 + 3]))) + (arr_1 [i_0 + 1]))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */int) ((unsigned char) arr_1 [i_0]))))))));
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 3] [i_1])) > (((/* implicit */int) var_7))))) : (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 4] [i_0])))))));
                arr_6 [i_0 + 3] [i_0] = ((/* implicit */unsigned int) var_4);
                var_12 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1599035977811959278ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)65))))) - ((+(0ULL))))) : (((/* implicit */unsigned long long int) min((2093771877), (((/* implicit */int) (short)19949)))))));
                arr_7 [i_0] [6LL] = ((/* implicit */short) (unsigned short)65535);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_7);
    var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) min(((signed char)6), (((/* implicit */signed char) (_Bool)1)))))));
    var_15 -= ((/* implicit */int) var_8);
}
