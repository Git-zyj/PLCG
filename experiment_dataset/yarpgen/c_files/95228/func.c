/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95228
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
    var_15 &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned char) var_5))))))) ? (var_14) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned char) var_1))))) ? (max((0U), (((/* implicit */unsigned int) var_5)))) : ((-(2047U))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((unsigned long long int) min((((/* implicit */int) arr_1 [i_0])), (arr_8 [i_2] [i_1] [(unsigned short)14] [i_0])))) * (((/* implicit */unsigned long long int) ((8931601841173035730LL) % (((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (289953044U)))))))));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(signed char)3])) || (((/* implicit */_Bool) min((2041U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) (short)7286)) : (((/* implicit */int) arr_4 [14LL]))))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((2047U), (((/* implicit */unsigned int) var_0))))) ? (var_0) : (((/* implicit */int) var_3))));
}
