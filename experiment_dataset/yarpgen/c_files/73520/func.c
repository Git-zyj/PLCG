/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73520
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
    var_15 = ((/* implicit */signed char) (~(var_14)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_0] = ((/* implicit */short) 2894514221U);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_8 [i_1] [9] [i_1 + 1] [i_1 + 1])), (((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_7))))));
                        var_17 &= ((/* implicit */unsigned char) ((int) 9080042055563499723ULL));
                    }
                    var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((arr_12 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) : (min((var_0), (((/* implicit */unsigned long long int) (signed char)119))))))) ? (((/* implicit */unsigned long long int) min((min((var_11), (((/* implicit */long long int) var_5)))), ((+(-5116623559999075174LL)))))) : ((((-(7434230881683963060ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1343249601233862387ULL))))))))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            {
                                arr_19 [i_0] = min((((((/* implicit */_Bool) 6157917427271331948ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))) : (6542441672010801698ULL))), (((/* implicit */unsigned long long int) 1016046582U)));
                                var_19 = ((/* implicit */int) max((var_19), ((+((~(((/* implicit */int) var_13))))))));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((251028779680085153ULL), (11273156278004299299ULL)))) ? ((((!(((/* implicit */_Bool) 17103494472475689228ULL)))) ? ((-(1903804443U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45550))))) : (3278920713U))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        arr_23 [i_0] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-3052))));
                        var_21 = ((/* implicit */long long int) 1216613402);
                        arr_24 [i_0] = ((/* implicit */unsigned short) 17103494472475689253ULL);
                        arr_25 [i_1] [i_6] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2124272336)) ? (834251048) : (1216613428)))) ? (3973165946U) : ((~(513098360U)))));
                    }
                }
            } 
        } 
    } 
}
