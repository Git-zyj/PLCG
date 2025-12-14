/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68371
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) (unsigned short)19964)) : (((/* implicit */int) (unsigned short)57084))));
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4032927520392632676LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8452))) : (11026235054980777577ULL)));
    }
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) ((((4032927520392632681LL) << (((((/* implicit */int) (unsigned char)247)) - (246))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)50105)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)35620)))))))) * (((/* implicit */int) ((var_6) && (((/* implicit */_Bool) var_8)))))));
    var_12 &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (((((/* implicit */_Bool) min((4127734405U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((((/* implicit */_Bool) 4032927520392632660LL)) ? (4032927520392632661LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)68))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
}
