/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8924
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
    var_19 = ((/* implicit */_Bool) ((unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (_Bool)0))) ? (((/* implicit */int) ((unsigned char) arr_4 [i_0 - 4]))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (arr_3 [i_1])))))))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_2 [i_0 - 3]))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_21 = ((/* implicit */signed char) ((short) max((((((/* implicit */int) (unsigned short)45207)) >> (((/* implicit */int) var_4)))), (((/* implicit */int) (_Bool)1)))));
                    arr_11 [i_2] [19U] [i_1] [i_2] = ((/* implicit */unsigned int) (-(((unsigned long long int) ((_Bool) (_Bool)1)))));
                    arr_12 [i_2] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)0)), (var_17)))), (-6372562119606936179LL))), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (signed char)-1))) << (((((((var_18) ? (2147483645) : (((/* implicit */int) (signed char)-17)))) + (36))) - (12))))))));
                }
                for (long long int i_3 = 2; i_3 < 22; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            {
                                arr_19 [i_0 - 3] [i_1] [i_3 + 1] [i_3] [i_5] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (var_16) : (((/* implicit */unsigned long long int) arr_13 [i_3]))))) ? ((-(var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                                var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(-2147483626)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_14 [i_0])))))))) : ((-(3107345997518440992ULL)))));
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */_Bool) arr_4 [i_1]);
                }
                var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_3 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
            }
        } 
    } 
}
