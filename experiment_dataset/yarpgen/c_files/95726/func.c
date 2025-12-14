/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95726
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_5 [i_1] [i_1] [i_1])), (arr_2 [i_1] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 120887511U))))) / ((-(((/* implicit */int) (signed char)97))))))) : (max((847479063687522512LL), (((/* implicit */long long int) -719117973)))))))));
                var_11 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) >= (arr_4 [i_0] [i_0] [i_1]))) ? (((unsigned int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_12 |= ((/* implicit */unsigned short) max((var_4), (((/* implicit */long long int) (~(var_6))))));
    var_13 |= ((/* implicit */unsigned short) max(((+(((/* implicit */int) max((var_3), (((/* implicit */unsigned char) (_Bool)1))))))), (((/* implicit */int) max((var_0), (var_5))))));
    var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -17LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) : (max((((/* implicit */long long int) var_9)), (-919110305678715950LL))))), (((/* implicit */long long int) var_0))));
}
