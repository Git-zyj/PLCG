/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69038
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
    var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))) == ((~(((/* implicit */int) (unsigned short)65535))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */unsigned long long int) 1752979632U)) : (18446744073709551608ULL))), (var_6))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) min(((-(arr_1 [(short)4] [i_1]))), (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_1 [i_1] [i_1]) : (arr_1 [i_0] [i_1])))));
            }
        } 
    } 
}
