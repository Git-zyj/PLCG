/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57120
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)60115)))) || (((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))));
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) 3428855376U)), (8877870755939570973LL)))) ? (max((10844349545220163865ULL), (((/* implicit */unsigned long long int) arr_0 [12U])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3880078620U)) ? (8892611348570831790LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)53)))))))))));
    }
    var_14 |= ((/* implicit */unsigned short) var_1);
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((unsigned short) max((((unsigned short) var_9)), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_10)), (var_11))))))))));
}
