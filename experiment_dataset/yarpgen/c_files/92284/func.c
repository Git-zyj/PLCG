/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92284
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))) / (min((-1834519453), (((/* implicit */int) var_9))))));
                var_11 = ((/* implicit */unsigned long long int) (((+(arr_0 [5]))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16383)))));
                arr_7 [i_1] [i_0] = ((unsigned int) ((((/* implicit */_Bool) min((2088103070U), (((/* implicit */unsigned int) -1834519453))))) || (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 1472632235))))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) -1472632235)) : (min((((/* implicit */long long int) (((-2147483647 - 1)) <= (1472632235)))), (var_7))))))));
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (+((+(max((2147483647), (1472632235))))))))));
    var_14 = ((/* implicit */int) var_7);
    var_15 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -5871035840804365064LL)))))) : (((((/* implicit */_Bool) var_2)) ? (5871035840804365064LL) : (((/* implicit */long long int) 1472632235))))))) : ((~(((unsigned long long int) var_2)))));
}
