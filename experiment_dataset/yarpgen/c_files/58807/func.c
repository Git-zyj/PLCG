/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58807
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) (+(var_10))))));
    var_12 = ((/* implicit */long long int) max((var_12), (min((-9223372036854775806LL), (((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) (unsigned short)5894))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [(unsigned char)9] [i_1] = ((/* implicit */short) var_6);
                    var_13 = ((/* implicit */unsigned int) max((var_13), (arr_3 [(unsigned short)0] [i_0] [i_2])));
                    var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_2]), (arr_1 [i_1]))))) + (((1476279615668395889ULL) * (((/* implicit */unsigned long long int) (+(-9223372036854775801LL))))))));
                    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_2 [(unsigned short)11] [i_2] [i_1]))) ? (((/* implicit */unsigned long long int) arr_4 [i_2] [i_1] [i_0])) : (((((/* implicit */_Bool) arr_3 [11U] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)245)))) : (((((/* implicit */_Bool) 1968891338U)) ? ((-(arr_4 [10LL] [i_1] [11]))) : (8720277277233135894LL))));
                }
            } 
        } 
    } 
}
