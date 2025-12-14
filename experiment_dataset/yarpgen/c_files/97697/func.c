/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97697
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) (unsigned short)29540);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (var_14)));
                            arr_14 [i_3] [i_2] [i_1 - 1] [0ULL] [i_0] = ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) 2274324267348337756ULL)))) ? (max((var_9), (((/* implicit */long long int) (signed char)-125)))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1] [i_1]))))), (min((max((((/* implicit */long long int) var_13)), (var_9))), (((/* implicit */long long int) var_11))))));
                            var_19 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12)))) > (max((var_16), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1 + 1]))))));
                            arr_15 [i_0] [i_0] [i_0] [i_3] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)56025))))), (22U)))) ? (((unsigned long long int) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16172419806361213868ULL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned char)5), ((unsigned char)10)))) << (((((((/* implicit */_Bool) -754943132)) ? (arr_2 [i_0] [(unsigned char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11156))))) - (890491194331180390ULL))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_13 [11ULL] [11ULL] [i_0] [i_1]))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (min((((((/* implicit */_Bool) (unsigned char)0)) ? (var_10) : (1202578434U))), (((/* implicit */unsigned int) ((unsigned char) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */short) var_5))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))))))));
}
