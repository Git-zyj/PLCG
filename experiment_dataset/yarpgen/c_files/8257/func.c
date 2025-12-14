/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8257
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
    var_14 &= ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((15415312568256722369ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_4 [8LL] [i_1]) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
                var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((15415312568256722371ULL), (((/* implicit */unsigned long long int) var_12))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_1])), (-9110439941407138620LL))))))) : (((/* implicit */int) arr_2 [(unsigned char)0] [i_0]))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((unsigned short)65514), (((/* implicit */unsigned short) (unsigned char)242)))))));
                arr_7 [i_0] [i_1] &= ((/* implicit */int) ((unsigned char) 574011183));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_2] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)3)), ((-(var_10)))))), (((((/* implicit */_Bool) 16401796996303280536ULL)) ? (18446744073709551615ULL) : (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3367))) : (2351070163276098264ULL)))))));
                                var_16 = ((/* implicit */unsigned char) min(((short)496), (((/* implicit */short) (unsigned char)2))));
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
