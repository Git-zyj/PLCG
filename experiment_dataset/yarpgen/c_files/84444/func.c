/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84444
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [(signed char)24] |= ((((long long int) arr_1 [i_0])) - (((/* implicit */long long int) arr_1 [i_1])));
                var_15 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)51781)) == (((/* implicit */int) (unsigned short)65535))))), (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) / (var_3))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531)))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_8 [i_0] [i_0]) : (((/* implicit */long long int) (((_Bool)1) ? (4294967277U) : (1073709056U)))))) ^ (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [5LL])) || (((/* implicit */_Bool) var_13))))), (max((arr_4 [i_0] [i_0]), (((/* implicit */long long int) (unsigned char)10))))))));
                    var_16 = ((/* implicit */unsigned short) arr_8 [i_0] [i_1]);
                }
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 1141248236)) + (min((4294967288U), (var_4)))))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)18)) ? (-256259693) : (((/* implicit */int) (unsigned short)61093)))))))));
    var_18 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (_Bool)1)), (3145695823556989330LL))), (((/* implicit */long long int) (~(max((var_5), (((/* implicit */unsigned int) var_6)))))))));
    var_19 ^= ((/* implicit */unsigned long long int) (signed char)127);
}
