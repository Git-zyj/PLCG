/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97271
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (unsigned char)253))) >> (((((3373869450U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 2]))))) - (3373869547U)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))));
    }
    var_20 = ((/* implicit */int) var_8);
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned short)61437)), (((((/* implicit */_Bool) (-(921097845U)))) ? (min((((/* implicit */unsigned int) var_0)), (4294967288U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (7448703448272988762ULL))))))))))));
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((unsigned long long int) var_0)))));
}
