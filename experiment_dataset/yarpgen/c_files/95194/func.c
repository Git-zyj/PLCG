/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95194
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
    var_12 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((long long int) var_2))), (((((/* implicit */_Bool) (unsigned short)9651)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (34359738367ULL))))), (((/* implicit */unsigned long long int) var_4))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) arr_4 [i_0] [i_1 + 1] [i_0]);
                var_14 *= ((/* implicit */_Bool) (((~(((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (unsigned char)86))))))) / (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)12] [i_1]))) - (34359738382ULL)))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) (short)25072))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_3 - 3])))))) != (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_3]))))), (arr_0 [i_0])))));
                                var_16 -= arr_11 [i_0] [i_0];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 16; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 15; i_6 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_1 + 1] [i_2] [i_1 + 1] [i_1 + 1] [i_0] = max((max((min((arr_10 [i_2]), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) 18446744039349813263ULL))))), (arr_12 [i_1 + 2] [i_2] [i_2] [i_2] [i_2 + 1] [i_6 + 3])))));
                                arr_19 [i_0] [i_5 - 2] [i_0] = ((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_1] [i_2] [i_5] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_6 [i_0] [i_0 + 1] [i_0] [i_5 + 1])), ((short)-15044)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((var_3), (((/* implicit */unsigned int) arr_2 [(unsigned char)16])))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)75))))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(signed char)4] [i_1]))) : ((-((-(9006075712187841246LL))))))))));
                }
                for (unsigned char i_7 = 1; i_7 < 15; i_7 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */int) ((short) arr_21 [i_0] [i_0]));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 4) 
                    {
                        arr_25 [i_0] [i_0] [i_7] [i_8] [i_1] [i_1] = ((/* implicit */short) (+(max((2147483647), (734024062)))));
                        /* LoopSeq 2 */
                        for (short i_9 = 2; i_9 < 17; i_9 += 2) 
                        {
                            arr_30 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_7]))));
                            var_19 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (+(3859174489432756812LL)))) : (((5755600195422696898ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28))))))))));
                            var_20 |= ((/* implicit */unsigned char) arr_3 [i_9] [i_9]);
                            arr_31 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 2524067936392145624ULL)));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-186459742)))) ? (max((max((arr_10 [i_0]), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) arr_17 [i_7] [i_1] [i_1] [i_7] [i_1] [i_0])))) : (((/* implicit */unsigned long long int) 17591649173504LL))));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 2) 
                        {
                            var_22 = ((max((((/* implicit */unsigned long long int) arr_27 [i_0 + 1] [i_1 + 3] [i_7 - 1] [i_8 - 1])), (18446744039349813263ULL))) - (min((10280826466597370878ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))))))));
                            var_23 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)27307))))), (max((arr_34 [i_0 - 2] [i_0] [i_0]), (arr_34 [i_10] [i_1] [i_0 + 1]))))), (((/* implicit */unsigned long long int) (unsigned char)56))));
                        }
                    }
                    arr_35 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) var_2)))))));
                    var_24 = var_4;
                    var_25 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                }
            }
        } 
    } 
}
