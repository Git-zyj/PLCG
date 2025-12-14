/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61438
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
    var_14 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) 2305843009213693951LL)) ? (max((((/* implicit */long long int) -764826357)), (3626886265858555475LL))) : (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) var_13))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))) : (17870283321406128128ULL))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((_Bool) 4294967292U))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)39)) == (((/* implicit */int) var_8)))))));
        arr_4 [12LL] = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [(signed char)12])) >= (((/* implicit */int) arr_2 [(_Bool)1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    }
    var_15 = ((/* implicit */_Bool) (~(((var_13) & (((/* implicit */int) (!(((/* implicit */_Bool) 764826356)))))))));
}
