/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6467
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) (unsigned short)1559))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)1574))))) ? (min((-2305530468814129594LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)51290))))))) : (((/* implicit */long long int) 1432410960U))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14838053739149184555ULL)))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
                arr_5 [i_0] [4ULL] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 2803769903U)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (unsigned short)63967)))))) ? (13LL) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [(signed char)6])) == (((/* implicit */int) (short)-29626))))) >> (((((((/* implicit */_Bool) 18446744073709551604ULL)) ? (6611052621718726113ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)16]))))) - (6611052621718726101ULL))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) 1056964608U);
}
