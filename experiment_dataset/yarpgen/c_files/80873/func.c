/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80873
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
    var_16 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_1 [i_1 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))) : (arr_5 [i_1 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)20), ((signed char)20))))) : (max((((/* implicit */long long int) arr_3 [i_1] [i_1 - 2] [i_1 - 2])), ((-(7876109392116393296LL)))))));
                var_17 *= ((/* implicit */unsigned int) (unsigned short)32768);
            }
        } 
    } 
    var_18 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) var_0)) ? (min((var_12), (((/* implicit */unsigned long long int) (signed char)0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)2))))))))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)-21)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) (short)32767))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */unsigned long long int) 0U)) : (var_12)))) ? (((/* implicit */long long int) 4294967295U)) : (max((((/* implicit */long long int) (_Bool)1)), (var_15)))))));
}
