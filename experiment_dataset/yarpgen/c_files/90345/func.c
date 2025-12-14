/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90345
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-30555)) ? (arr_6 [i_1]) : (4067956770U)))) + (min((-6439377387938040579LL), (((/* implicit */long long int) var_2)))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (+(-6439377387938040579LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_11 [i_0] [i_1 + 1]))))));
                            var_15 = ((/* implicit */unsigned short) max((var_15), (var_3)));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_16 = ((/* implicit */unsigned char) (~(((max(((_Bool)1), ((_Bool)0))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_7))))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_4])) >= (((/* implicit */int) var_6)))))))));
                                var_17 = ((/* implicit */_Bool) var_9);
                                arr_15 [i_0 + 2] [i_1] = ((/* implicit */unsigned int) (((+(arr_12 [i_2] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]))) + (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_13 [i_0]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (short)-16919))))))))));
                            }
                            for (short i_5 = 1; i_5 < 15; i_5 += 4) 
                            {
                                arr_19 [(_Bool)1] [i_3 - 1] [i_2] [i_2] [i_1 + 1] [(_Bool)1] |= ((/* implicit */unsigned long long int) arr_6 [6LL]);
                                var_18 = ((/* implicit */unsigned char) arr_13 [i_1 + 1]);
                                arr_20 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65521)) ? ((+((~(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) max(((_Bool)0), ((_Bool)1))))));
                                arr_21 [i_0 + 2] [i_1] [i_5 - 1] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) var_12)) < (var_5))))) + ((+(min((arr_17 [i_5] [i_3] [i_3 - 1] [i_3] [i_5]), (arr_4 [i_5])))))));
                            }
                            var_19 += ((/* implicit */unsigned short) var_2);
                        }
                    } 
                } 
                var_20 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((_Bool) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
}
