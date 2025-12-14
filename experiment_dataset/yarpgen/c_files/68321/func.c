/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68321
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
    var_19 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_2);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) -913459002)) || (((/* implicit */_Bool) 3987043856U)))))));
        arr_4 [(unsigned short)21] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_1 [i_0] [(signed char)18])) ^ (((((/* implicit */_Bool) -913459002)) ? (((/* implicit */long long int) 913459001)) : (-2505201629274413177LL)))))) ? (((((/* implicit */_Bool) 0U)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) 913459001)) : (((((/* implicit */_Bool) 913459001)) ? (((long long int) (unsigned char)57)) : (max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (2505201629274413186LL)))))));
        arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) ((long long int) 4294967280U)))) != (((/* implicit */int) (short)-25338))));
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) (short)-14103))))) || (((((/* implicit */_Bool) max((-588529846), (913459022)))) || (((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (short)32742))))))));
    var_21 = ((((/* implicit */_Bool) -3134869381907396184LL)) ? (((/* implicit */int) max(((unsigned short)62256), (((/* implicit */unsigned short) (short)-12038))))) : (((/* implicit */int) var_16)));
}
