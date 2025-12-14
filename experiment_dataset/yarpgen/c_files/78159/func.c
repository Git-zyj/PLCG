/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78159
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [(_Bool)1] [i_0] [(unsigned short)5] = (short)-24092;
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)9918)) ? (((/* implicit */int) (short)8259)) : (((/* implicit */int) (short)-6612))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_17 += ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))))), (((unsigned long long int) arr_1 [i_0] [i_2]))))) ? (max((17553848995081795975ULL), (((/* implicit */unsigned long long int) (short)-6616)))) : (((/* implicit */unsigned long long int) max((((((((/* implicit */int) (short)-8584)) + (2147483647))) << (((var_0) - (16223867403939248850ULL))))), ((+(((/* implicit */int) (short)-6612))))))));
                                var_18 = ((/* implicit */short) (~(((/* implicit */int) (short)8575))));
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)7))))) : (min((arr_9 [i_0] [i_1] [i_0] [i_0]), (arr_12 [i_4] [i_3] [i_2] [9] [i_0])))));
                            }
                        } 
                    } 
                    var_19 -= ((/* implicit */short) min(((-(((unsigned long long int) arr_2 [i_2])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_0] [i_2] [i_0] [(signed char)18] [i_1] [(_Bool)0])))))));
                    var_20 += ((/* implicit */int) (short)6611);
                }
            } 
        } 
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [(short)2] [i_0]))))))));
    }
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        var_22 = ((/* implicit */long long int) arr_0 [i_5] [i_5]);
        var_23 = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_17 [5ULL] = ((/* implicit */short) ((((unsigned long long int) arr_6 [i_5] [i_5] [i_5])) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)-6612))))));
    }
    var_24 ^= ((/* implicit */signed char) ((_Bool) var_0));
}
