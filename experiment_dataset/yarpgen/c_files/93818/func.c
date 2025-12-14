/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93818
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
    var_14 &= ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) var_9))))) < (((/* implicit */int) ((unsigned char) 2726458200099991265ULL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7502957545083966738ULL)) ? (9U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : (((max((var_4), (((/* implicit */unsigned long long int) var_0)))) << ((((~(var_4))) - (18055319623956212272ULL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) max((arr_6 [i_0] [i_2] [i_3] [i_4]), (((/* implicit */unsigned char) (((_Bool)1) && (((/* implicit */_Bool) 14176649654612058650ULL)))))));
                                arr_12 [i_0] [i_1] [(unsigned short)1] [i_3] [20U] = ((/* implicit */unsigned long long int) max(((_Bool)1), (arr_1 [i_3] [5ULL])));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((((/* implicit */int) var_12)) % (((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                }
                var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)40733)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [15U]))) : (var_6)));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (_Bool)1))));
                var_20 &= ((/* implicit */unsigned int) var_0);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (6887980493504416884ULL)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_8)))) : (((/* implicit */int) ((_Bool) (unsigned char)70)))))) == (((unsigned long long int) (!(((/* implicit */_Bool) var_11)))))));
    var_22 = var_10;
}
