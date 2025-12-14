/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66774
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
    var_10 = ((/* implicit */unsigned char) max((var_9), (((/* implicit */short) ((((/* implicit */int) var_5)) < (((/* implicit */int) ((var_8) == (((/* implicit */int) var_9))))))))));
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (9062542447892935421LL) : (((/* implicit */long long int) ((/* implicit */int) (short)1023)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) arr_8 [i_2] [i_2] [i_2]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
                                arr_16 [(signed char)10] = (!(((/* implicit */_Bool) arr_7 [i_1] [i_1])));
                                arr_17 [i_1] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) -8257536766605995846LL)) ? (-3067986515059074745LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32764))))) + (9223372036854775807LL))) >> ((((-(((/* implicit */int) var_7)))) + (7826)))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */int) var_2);
                            }
                        } 
                    } 
                    arr_19 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((33554431ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned short) ((unsigned short) var_4)))) : ((-(((((/* implicit */_Bool) 817633922)) ? (((/* implicit */int) (short)-14778)) : (((/* implicit */int) (signed char)-119))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (signed char i_6 = 3; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_7 [i_0] [i_0])) | (((/* implicit */int) arr_7 [i_1 - 1] [i_1])))), (((/* implicit */int) var_7))));
                                var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) min(((short)(-32767 - 1)), ((short)1023)))))));
                                var_15 += ((/* implicit */unsigned int) arr_15 [i_6]);
                            }
                        } 
                    } 
                }
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    var_16 = ((/* implicit */long long int) var_2);
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) max((arr_11 [i_0] [i_1 + 2] [i_0] [i_1] [i_7] [i_7]), (arr_11 [i_7] [i_1 + 1] [i_1 + 1] [i_0] [i_7] [i_1])))) * (((/* implicit */int) max(((unsigned short)12930), ((unsigned short)52393)))))))));
                    arr_27 [i_0] [i_1 + 2] [i_7] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_0]), ((unsigned short)47417)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (arr_23 [i_0]))))) : (min((((/* implicit */unsigned long long int) 650153146U)), (var_6))))));
                }
                arr_28 [i_1 - 1] = ((/* implicit */short) (((-(((/* implicit */int) (_Bool)1)))) <= ((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))));
                arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)11528))));
                var_18 = ((/* implicit */_Bool) var_0);
            }
        } 
    } 
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) (signed char)-8)))), ((~(((/* implicit */int) (short)-31109)))))))));
}
