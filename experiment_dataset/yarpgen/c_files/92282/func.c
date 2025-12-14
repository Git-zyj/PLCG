/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92282
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) + ((-(8070450532247928832LL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)992)) ? (((/* implicit */int) (unsigned short)35606)) : (((/* implicit */int) arr_2 [i_0])))));
        var_14 = ((/* implicit */unsigned short) ((arr_1 [i_0] [i_0]) & (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) arr_2 [i_0]);
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_2])))))));
                    arr_9 [i_0] [i_1] [i_0] = ((((((/* implicit */_Bool) arr_4 [i_2] [i_0] [i_0])) ? (5284602200204329660ULL) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_2])))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35616))) : (var_7)))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(var_4))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_3))))))))) ? (((((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) * (((((/* implicit */_Bool) var_0)) ? (9397083478632147699ULL) : (11934496385790804602ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((11934496385790804602ULL) - (11934496385790804595ULL)))))) : (var_7))))));
}
