/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82546
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-4513))) - (((((/* implicit */_Bool) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78)))))) ? (max((((/* implicit */unsigned int) var_7)), (653432508U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-26387)) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) var_2)))))))));
    var_13 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)48))))) & (max((((/* implicit */unsigned int) (short)(-32767 - 1))), (2850627176U)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3641534770U)) || (((/* implicit */_Bool) (short)-4739)))))) : (((long long int) var_3)))) >= (((/* implicit */long long int) arr_3 [i_0] [i_1])));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18054778022542706886ULL)))) ? (((/* implicit */long long int) max((1101542398U), (((/* implicit */unsigned int) (_Bool)1))))) : (var_5)))));
                                arr_14 [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)118))));
                                var_15 = ((/* implicit */signed char) ((_Bool) var_4));
                                var_16 = ((/* implicit */_Bool) var_1);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_9);
    var_18 = ((/* implicit */int) min((var_18), ((((+((-(((/* implicit */int) var_2)))))) - (((int) (-(var_4))))))));
}
