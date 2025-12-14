/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71298
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
    var_16 = ((/* implicit */signed char) var_8);
    var_17 = ((/* implicit */signed char) ((long long int) min((2400724026U), (((/* implicit */unsigned int) (_Bool)0)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21572)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_3 [i_0] [i_1])))))) : (min((arr_4 [i_0] [i_1 + 1]), (1894243269U)))))) ? (max((((unsigned int) (unsigned short)37193)), (4114131094U))) : (((/* implicit */unsigned int) max(((((_Bool)0) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_0] [i_1])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) < (4185579444739451228LL)))))))));
                arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */long long int) var_8)) ^ (8138271784510976256LL))) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [(short)5] [i_0] [i_1 - 1])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))) < (((/* implicit */int) (signed char)112))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((1894243269U) / (arr_4 [i_0] [4]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [(signed char)5] [i_1] [i_2 - 2] [i_3])) * (((/* implicit */int) (unsigned short)63934))))))));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)43964)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) > (((/* implicit */long long int) ((/* implicit */int) ((12949453226651073359ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))) : (((((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (2646985356703873939LL))) + (((/* implicit */long long int) ((unsigned int) var_9)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) || (var_1)));
}
