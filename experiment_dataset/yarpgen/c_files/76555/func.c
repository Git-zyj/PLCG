/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76555
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
    var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
    var_18 = min((((((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) - (var_2)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((((/* implicit */short) ((signed char) (-(((/* implicit */int) arr_2 [i_0])))))), (min((((/* implicit */short) arr_3 [i_1] [i_1] [i_0])), (arr_0 [i_0] [i_1])))));
                var_20 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((var_1) & (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((arr_1 [i_0]) == (((/* implicit */unsigned long long int) 66060288))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_3] [i_2] = ((/* implicit */unsigned long long int) min((min((((((/* implicit */int) arr_0 [i_0] [(unsigned char)10])) & (var_1))), (min((var_2), (((/* implicit */int) arr_11 [17LL] [17LL] [i_3] [i_3] [i_3])))))), (((int) min((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3] [i_0])), (2147483647))))));
                                var_21 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((int) (short)-1))), (min((var_5), (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-23)) || (((/* implicit */_Bool) (signed char)-20))))), (var_8))))));
                                var_22 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(short)4] [(_Bool)1] [i_0] [i_1] [i_2 - 1] [i_4 - 2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_9 [i_2 - 2] [i_2 - 2] [i_4 - 3] [i_1] [(unsigned short)22] [(_Bool)1])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_6] [8])) : (arr_16 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_14 [i_0] [i_1] [i_5] [i_6])), (max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0)))))))));
                            var_24 = ((/* implicit */long long int) ((_Bool) min((var_12), (((/* implicit */short) arr_2 [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 |= ((/* implicit */_Bool) var_2);
    var_26 &= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) (unsigned short)0))))) ? ((+(5596684921418916653LL))) : (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((((((/* implicit */_Bool) var_7)) ? (70351564308480LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
}
