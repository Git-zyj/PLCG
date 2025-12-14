/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91007
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
    var_19 = ((/* implicit */int) (_Bool)1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 7; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)121)) <= (((/* implicit */int) var_12))))) >= (((/* implicit */int) ((unsigned short) arr_4 [i_1])))))))))));
                                arr_15 [i_0] [i_4] [i_2] [i_2] [i_3 - 1] [i_4] = ((/* implicit */_Bool) var_9);
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) max(((unsigned short)60834), (((/* implicit */unsigned short) (unsigned char)1)))))))))));
                                arr_16 [i_4] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_8 [i_4] [(_Bool)1] [i_1] [i_1])), ((unsigned short)65535)))) ? (((/* implicit */int) var_16)) : (((((/* implicit */int) arr_2 [i_3 - 1])) * (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) var_5)), (var_0))))) : (min((((/* implicit */unsigned int) -1570158527)), (((((/* implicit */_Bool) (unsigned short)56859)) ? (680328096U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59527)))))))));
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned short) min(((-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0])))))), (((((/* implicit */_Bool) -2773450676089420507LL)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) min(((unsigned char)2), (var_1))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))) & ((+(max((var_6), (((/* implicit */unsigned int) var_0))))))));
                }
                var_23 = ((/* implicit */unsigned char) (!(min((arr_1 [i_0] [i_0]), (arr_1 [i_1] [i_0])))));
                var_24 = arr_0 [i_0];
            }
        } 
    } 
}
