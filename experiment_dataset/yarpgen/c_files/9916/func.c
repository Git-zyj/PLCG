/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9916
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)59)) >> (((((/* implicit */int) (signed char)98)) - (69))))) > (((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (_Bool)0))))));
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) arr_1 [i_0] [i_0]))))) >> (((((1501525623) << (((/* implicit */int) arr_3 [i_0])))) - (1501525596))))))));
    }
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((((var_6) / (var_6))) == (((/* implicit */int) ((((/* implicit */int) var_1)) <= (1501525637))))))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) -1501525637)))))) != (((var_0) % (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
    var_15 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (signed char)127))))) >> (((var_6) - (var_6))))) & (((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_7))))) / (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) var_9)))))))));
}
