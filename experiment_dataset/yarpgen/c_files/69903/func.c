/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69903
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (2147483644) : (((/* implicit */int) (unsigned short)19881))));
            var_21 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) && (((/* implicit */_Bool) 740960443))))) : ((~(((/* implicit */int) arr_4 [i_1] [18LL] [i_1]))))));
        }
        arr_5 [i_0] = ((/* implicit */signed char) ((((4193280ULL) | (((/* implicit */unsigned long long int) -1265776505)))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10413987252127683256ULL)) ? (((/* implicit */int) arr_1 [(signed char)5])) : (((/* implicit */int) (unsigned short)19881))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967285U)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (10669296953636755632ULL)))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
    }
    var_23 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((var_19), (((/* implicit */long long int) (_Bool)0))))) ? (((/* implicit */long long int) -2147483644)) : (((((/* implicit */_Bool) (signed char)52)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)109))))))), (((/* implicit */long long int) max((((/* implicit */int) ((-2147483647) > (-740960443)))), ((+(2147483647))))))));
    var_24 ^= ((/* implicit */unsigned int) var_0);
}
