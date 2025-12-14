/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81893
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
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] = arr_8 [i_0];
                            arr_12 [i_3] [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (arr_6 [i_3 - 1] [i_1] [i_2] [i_3]) : ((-(arr_9 [i_3] [i_0] [9ULL] [(signed char)9] [(_Bool)0] [i_0])))));
                            arr_13 [i_3] [i_2] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)16383)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8236)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_10)))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-27552))))))))));
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) > (var_7)))) % (arr_9 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 1] [i_2]))), ((+(((((/* implicit */_Bool) var_0)) ? (arr_7 [i_0] [i_1] [13ULL] [i_3]) : (var_0))))))))));
                            /* LoopSeq 4 */
                            for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                            {
                                arr_18 [i_1] [i_4] [i_1] &= ((/* implicit */unsigned char) var_12);
                                arr_19 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)26742))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)14849)))))) ? (((/* implicit */long long int) (-(var_12)))) : (var_10)))));
                                arr_20 [i_2] [i_1] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)0)) ? ((-9223372036854775807LL - 1LL)) : (var_8))) > ((-(9223372036854775792LL))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28784))) : (var_10)))) ? (((/* implicit */unsigned long long int) 5431466775008866363LL)) : (((((/* implicit */_Bool) var_6)) ? (1838191096369012761ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                                var_18 = ((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)3]));
                                arr_25 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned char) ((arr_7 [6ULL] [i_3 + 1] [i_2] [i_3 - 1]) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (9223372036854775807LL))))));
                            }
                            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                                var_20 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) - ((~(9594842338348677470ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0]) < (((/* implicit */unsigned int) var_11))))))));
                                var_21 = ((/* implicit */_Bool) ((((var_0) + (2147483647))) << (((((((((arr_1 [i_0]) != (((/* implicit */unsigned long long int) var_11)))) ? (-5431466775008866347LL) : (((/* implicit */long long int) arr_6 [i_3] [i_3] [i_3 - 1] [i_3 - 1])))) + (5431466775008866350LL))) - (1LL)))));
                            }
                            for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
                            {
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) && (((((/* implicit */_Bool) (unsigned char)253)) || (((/* implicit */_Bool) var_3))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (arr_14 [i_7] [i_3 + 1] [i_2] [i_1] [i_0])))));
                                var_23 = ((/* implicit */int) min((var_23), ((((((+(var_4))) == (((/* implicit */int) (short)-17618)))) ? (((/* implicit */int) (_Bool)1)) : ((+((-(((/* implicit */int) (_Bool)1))))))))));
                                arr_32 [i_7] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((long long int) ((var_15) > (((/* implicit */int) var_6)))));
                                var_24 *= ((/* implicit */short) arr_28 [i_1] [i_3 - 1] [i_3 - 1] [i_3 - 1]);
                                var_25 = ((/* implicit */short) (unsigned char)2);
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            {
                                arr_41 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(var_4)))))) ? ((-(((/* implicit */int) (unsigned char)76)))) : (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_14))))), (((short) var_9)))))));
                                arr_42 [i_10] [(signed char)10] [i_0] = ((/* implicit */_Bool) ((signed char) min((((unsigned int) 17635712911566988312ULL)), (arr_35 [i_0] [i_0] [i_0] [i_0]))));
                                var_26 = ((/* implicit */short) ((long long int) ((int) (-(var_11)))));
                                var_27 = ((/* implicit */signed char) ((unsigned short) (~(arr_29 [i_1] [i_1] [i_1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) 
    {
        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 1) 
        {
            {
                arr_49 [i_11] [i_11] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_47 [i_11])) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) var_7))))))) ? ((((~(((/* implicit */int) (unsigned char)213)))) ^ (((/* implicit */int) var_5)))) : (((/* implicit */int) (((-(((/* implicit */int) (unsigned char)81)))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                var_28 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) arr_46 [i_11] [i_12])) >> (((1006442807) - (1006442803))))));
            }
        } 
    } 
}
