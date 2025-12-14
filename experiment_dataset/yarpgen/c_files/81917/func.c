/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81917
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((((/* implicit */_Bool) ((var_4) % (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (max((((((/* implicit */_Bool) (signed char)-1)) ? (var_0) : (((/* implicit */long long int) var_4)))), (min((arr_4 [i_0] [i_1]), (((/* implicit */long long int) var_12)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65521)) ? (2147352576U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (((/* implicit */int) (_Bool)1)))))))));
                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)11))))) || (((/* implicit */_Bool) (+(arr_4 [i_1] [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_14)) * (arr_6 [i_1])))) ? ((~(var_13))) : (var_17))) : (((((/* implicit */unsigned int) arr_0 [i_1] [i_1])) % (arr_2 [i_0])))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_10 [i_1] [i_1] [i_0] [i_1] = min((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_0] [i_2]))) == (var_0))))) | (max((((/* implicit */unsigned int) var_6)), (var_17))))), (((/* implicit */unsigned int) ((((/* implicit */int) max(((signed char)0), ((signed char)-117)))) < ((+(arr_7 [i_0] [i_0] [i_0])))))));
                    arr_11 [i_2] [i_1] [i_0] [i_0] = (~(min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)0)) != (((/* implicit */int) (unsigned char)192))))), (max((arr_3 [i_1] [i_1]), (((/* implicit */unsigned int) (short)(-32767 - 1))))))));
                    arr_12 [i_2] [i_1] [i_1] [i_0] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_7 [i_2] [(short)10] [(short)10])) : (var_10)))) ? (min((0U), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) (+(var_14)))))), (max((((/* implicit */unsigned int) min((((/* implicit */signed char) var_5)), ((signed char)0)))), (((22674778U) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((min(((signed char)-1), ((signed char)12))), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) 4160749568U))) || (((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))))))));
                    var_20 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) min((((/* implicit */short) (signed char)120)), (var_12)))))), ((((+(((/* implicit */int) var_11)))) - (((/* implicit */int) (unsigned char)40))))));
                }
                for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    var_21 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))))))));
                    var_22 += ((/* implicit */unsigned short) min((arr_4 [i_1] [i_3]), (((/* implicit */long long int) min((((/* implicit */unsigned int) min(((short)0), ((short)32291)))), (min((arr_15 [i_0] [i_3]), (((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_3])))))))));
                    var_23 ^= ((/* implicit */signed char) var_5);
                    arr_18 [i_0] [i_0] [i_3] [4U] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_4)) : (var_17)))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_9))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            {
                                var_24 += ((((/* implicit */_Bool) (+(((/* implicit */int) (short)511))))) ? (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_16 [(_Bool)1] [i_1])))) ? ((+(((/* implicit */int) arr_14 [i_0] [i_1] [i_3])))) : (((/* implicit */int) max((var_1), (((/* implicit */short) var_5)))))))) : (((((/* implicit */unsigned int) min((((/* implicit */int) var_12)), (var_4)))) * (((((/* implicit */_Bool) arr_15 [i_0] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_17))))));
                                arr_24 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */signed char) -1119188426);
                                var_25 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((_Bool) var_16))), (((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_4])) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_16 [(unsigned short)16] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))))));
                                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (~(min((((((/* implicit */_Bool) var_16)) ? (arr_19 [i_0]) : (var_2))), (max((((/* implicit */int) var_7)), (var_14))))))))));
                            }
                        } 
                    } 
                }
                for (short i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    arr_27 [i_6] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)237)) * (((/* implicit */int) (short)-4))));
                    var_27 = ((/* implicit */unsigned int) min((var_27), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) var_11)) | (((/* implicit */int) (short)-30607)))) : (((/* implicit */int) var_5))))), (min((var_17), (((/* implicit */unsigned int) max(((unsigned char)174), (((/* implicit */unsigned char) arr_9 [i_0] [i_1] [i_6])))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 20; i_8 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) * (((/* implicit */int) ((arr_33 [9] [i_1] [i_0] [i_8 + 1] [i_8 + 1] [i_8] [i_0]) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_6] [i_6] [i_8])) ? (var_2) : (arr_7 [(short)1] [(short)1] [i_1])))))))));
                                arr_34 [i_6] [i_6] [3LL] [i_6] [i_1] [i_6] [i_0] = ((/* implicit */signed char) min((((/* implicit */short) (_Bool)1)), ((short)-1)));
                                arr_35 [i_8] [i_8] [i_6] [i_6] = ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) 3048943285U))))), (min(((short)-26615), ((short)3211)))))) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (short)-18117)));
                                var_29 = ((/* implicit */int) (+(min((max((var_10), (((/* implicit */unsigned int) (unsigned char)192)))), (((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-32764)))))))));
                                var_30 = (signed char)106;
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */short) (~(((/* implicit */int) max((arr_31 [i_6]), (arr_31 [i_6]))))));
                }
            }
        } 
    } 
    var_32 = ((min((min((4276496340U), (((/* implicit */unsigned int) var_2)))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-20798))) - (var_17))))) <= (((/* implicit */unsigned int) max(((+(var_4))), (((/* implicit */int) var_9))))));
    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_2)) == (var_13)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-92)), ((unsigned short)15725))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-486))) : (((((/* implicit */_Bool) 4294967295U)) ? (((var_13) | (var_15))) : (((/* implicit */unsigned int) (~(-433968474))))))));
}
