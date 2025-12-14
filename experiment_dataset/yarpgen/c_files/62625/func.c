/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62625
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0] [15LL] [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) arr_3 [i_0] [i_1])) / (((/* implicit */int) (_Bool)1)))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) max((var_20), ((-(max((((/* implicit */long long int) arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1])), (6520305345857928779LL)))))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_3 + 1])) ? (((/* implicit */long long int) var_13)) : (9223372036854775807LL))) : (max((6520305345857928773LL), (((/* implicit */long long int) (unsigned char)46)))))), (((/* implicit */long long int) (_Bool)1)))))));
                                var_22 = ((/* implicit */short) var_5);
                                arr_16 [i_0] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)-22)) % (((/* implicit */int) (unsigned short)29538))))))) ? ((-(((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_3 + 3] [i_0])))) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) max((18446744073709551607ULL), (((/* implicit */unsigned long long int) var_4)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (var_15)))) : (5214523122420852602LL)));
    var_24 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) var_15)), (((unsigned long long int) (unsigned short)27727)))), (((/* implicit */unsigned long long int) (signed char)-1))));
    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((unsigned char) -764601105)))));
}
