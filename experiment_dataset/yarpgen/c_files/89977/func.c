/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89977
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
    var_10 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */unsigned long long int) (-(var_1)))) : (((((/* implicit */unsigned long long int) var_5)) | (arr_2 [i_1])))))));
                var_12 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 - 1] [i_0 - 1])), (var_4)))) ? (((/* implicit */int) ((short) (unsigned short)0))) : (((/* implicit */int) min((var_0), (var_6))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) ((unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)96))) != (var_5))) ? (max((-2551779022545808421LL), (((/* implicit */long long int) (unsigned short)65527)))) : (((((/* implicit */_Bool) 1859255588U)) ? (36026597995708416LL) : (((/* implicit */long long int) 4294967265U)))))));
}
