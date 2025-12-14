/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61616
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) -8102788348675073726LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (min((1075869429U), (((/* implicit */unsigned int) var_8))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((((/* implicit */long long int) arr_9 [i_0] [i_1] [8ULL] [i_2])), (-8102788348675073726LL))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 3; i_4 < 12; i_4 += 2) 
                            {
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)127)))))));
                                arr_15 [i_0] [11] [i_2] [i_0] [i_2] [13U] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) (unsigned short)0)))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (~((((((_Bool)1) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)32767)))) * (((((/* implicit */_Bool) 1294926946U)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (signed char)57)))))))))));
                            }
                            var_18 &= ((/* implicit */short) ((var_12) / (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) || ((_Bool)1))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)-106)), (8ULL)));
                            var_20 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) var_2)) ? (arr_1 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_13 [i_0] [(short)3] [i_0])) / (var_7))))));
                            arr_20 [i_6] [i_0] [i_5] [i_0] [(short)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65530)) && (arr_11 [i_0])));
                            var_21 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                        }
                    } 
                } 
                var_22 &= ((/* implicit */int) min((((3245974247U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) var_9))));
            }
        } 
    } 
}
