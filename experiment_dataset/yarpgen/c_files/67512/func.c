/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67512
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) arr_2 [i_1]);
                arr_6 [i_1] [7U] [i_1] &= ((/* implicit */long long int) (unsigned short)35401);
                arr_7 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_1 - 1]))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) var_12);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_15 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (((((/* implicit */unsigned long long int) arr_12 [i_2 + 2] [i_1])) - (var_1)))));
                                var_16 = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)35401));
                                var_17 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (short)-18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30134))) : (var_5))));
                                arr_17 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) var_0));
                            }
                            var_18 = ((/* implicit */short) ((int) (-(((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (0ULL)))))) ? (((var_6) - ((-(((/* implicit */int) (unsigned char)74)))))) : (((/* implicit */int) var_11))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) var_1)))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)45115)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))) : (137438949376LL)));
    var_22 = ((/* implicit */unsigned char) var_3);
}
