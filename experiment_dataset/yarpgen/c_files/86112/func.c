/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86112
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
    var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (2303591209400008704ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    var_19 = ((/* implicit */short) var_4);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_9)), (var_5))))) >= (min((((4398046511104LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))), (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = min((((((/* implicit */_Bool) 11218304990074736728ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0])))));
                var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((((/* implicit */int) var_7)) / (max((2145386496), (((/* implicit */int) (_Bool)0))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((short) ((long long int) (+(arr_0 [i_0])))));
            }
        } 
    } 
}
