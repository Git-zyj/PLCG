/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72044
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
    var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)38)) << ((((+(((/* implicit */int) (unsigned short)4095)))) - (4079)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 24; i_3 += 3) 
                    {
                        {
                            arr_11 [i_2] [i_1] [i_2 - 1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)1)) : (var_14)))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_4 [i_3 + 1] [i_1] [i_2 + 2]))))) ? ((-(var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_2 + 3] [i_2 + 3] [i_2 + 2])) != (((/* implicit */int) (unsigned short)48052))))))));
                            var_19 |= ((/* implicit */_Bool) (+(var_14)));
                        }
                    } 
                } 
                var_20 *= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1]))) + (max((var_1), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0])))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) min(((signed char)(-127 - 1)), ((signed char)127)))) : (((/* implicit */int) (_Bool)1)))))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [18] [i_1]))) : (var_15)))) ? (((((/* implicit */int) (unsigned short)33110)) ^ (((/* implicit */int) (short)25079)))) : ((+(((((/* implicit */_Bool) (unsigned short)23765)) ? (var_13) : (((/* implicit */int) var_9)))))))))));
                var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_0]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1])))));
                var_23 = ((/* implicit */unsigned int) 1881186626);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (+(var_14)));
    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_14))));
}
