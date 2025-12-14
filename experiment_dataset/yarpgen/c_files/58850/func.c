/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58850
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (arr_5 [6U] [i_0])));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_15 *= ((/* implicit */signed char) 325782749U);
                    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (4294967295U))) : ((~(5U)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-32745)) ? (4095U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >> (((170872407U) - (170872379U)))))) : (((((/* implicit */_Bool) ((3038265729391398988ULL) >> (((((/* implicit */int) (signed char)-1)) + (42)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [3] [i_1]))) : (max((2794215688111955618ULL), (((/* implicit */unsigned long long int) (unsigned char)63)))))));
                    arr_10 [i_1] = ((/* implicit */unsigned char) var_12);
                    arr_11 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) 1519465587U);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        arr_17 [i_1] [i_1] = ((/* implicit */unsigned short) var_5);
                        var_17 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102))) & (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_0])) || (((/* implicit */_Bool) 1503544247))))), (arr_13 [i_0] [i_1] [i_3] [i_4])))));
                    }
                    arr_18 [15] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1]))))));
                }
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    arr_23 [i_0] [i_1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-30317)) + (2147483647))) >> (((var_11) - (1569326622)))))) % (18446744073709551615ULL)));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 1; i_7 < 15; i_7 += 4) 
                        {
                            arr_30 [i_1] = ((/* implicit */unsigned int) var_5);
                            var_18 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [i_6])) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) var_0)))))))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) ^ (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1]))) >= (4294963201U))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_2))))) & (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                            arr_31 [(_Bool)1] [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (3648742940U)))) != ((~(((/* implicit */int) (short)14659)))))) && (((/* implicit */_Bool) var_10))));
                        }
                        var_20 = ((long long int) (-(((/* implicit */int) (unsigned char)83))));
                        arr_32 [i_0] [i_1] [i_5] [(unsigned char)1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) (unsigned char)163))))))) >= ((-(((((/* implicit */_Bool) (short)-2968)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4294967295U)))))));
                        arr_33 [i_1] [(short)11] [i_5] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)109)) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_5] [i_6]))))))) | (var_6)));
                    }
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) 2250579260U);
}
