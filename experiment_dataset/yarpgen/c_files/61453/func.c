/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61453
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) arr_1 [(short)2] [i_1]);
                var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [i_1]), (((((/* implicit */int) (unsigned char)10)) >> (((var_8) + (50594619)))))))) ? (7859779031449325828ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((arr_1 [i_0] [(_Bool)1]), (((/* implicit */long long int) var_8)))))))));
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_3 [i_0])) ? (-2915006842801970276LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((2668021134U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) var_3)), ((short)(-32767 - 1))))) ? (var_6) : (((/* implicit */unsigned long long int) ((int) var_4)))));
}
