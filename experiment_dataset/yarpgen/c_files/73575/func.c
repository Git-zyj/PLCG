/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73575
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) << (((((/* implicit */int) arr_4 [i_1])) - (19663)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || ((_Bool)1)))) : (((/* implicit */int) arr_4 [i_0]))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_15 = (~(arr_8 [i_0] [i_0] [i_2] [i_3]));
                            var_16 ^= ((/* implicit */unsigned short) arr_5 [i_0] [i_2] [i_3]);
                            var_17 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)171))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) arr_7 [i_3] [i_0])))))))) >> ((((((_Bool)0) ? (((/* implicit */int) (short)32767)) : ((+(((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1] [i_1])))))) - (226)))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (18446744073709551615ULL)))) ? (((/* implicit */int) min((((/* implicit */short) arr_0 [i_1])), (arr_2 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 14352478776068668811ULL)))))))), (min((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_1))))));
                arr_13 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) arr_11 [i_0] [i_1])))) ? ((~(arr_11 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 11840709724130291798ULL)) ? (2341522685U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35069)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_12);
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */int) var_9)) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))))))));
}
