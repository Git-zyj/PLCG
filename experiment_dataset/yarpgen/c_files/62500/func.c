/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62500
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
    var_20 = (!(((/* implicit */_Bool) var_14)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) 16076416501984678818ULL);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_8) ^ (((/* implicit */long long int) var_0)))))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)58253)) & ((-(((/* implicit */int) (short)17992))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_12))) || (((/* implicit */_Bool) arr_9 [i_2]))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (short i_4 = 4; i_4 < 21; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        arr_17 [i_4] [i_2] [i_2] [10] = ((/* implicit */short) (~(((((/* implicit */int) (short)26946)) - (((/* implicit */int) (unsigned char)65))))));
                        arr_18 [9ULL] [i_2] [i_4 - 3] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-778)) ? (8755196940495804762ULL) : (((/* implicit */unsigned long long int) -5484135375764982539LL)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)29860)) != (((/* implicit */int) (_Bool)1))))))));
                    }
                    for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        arr_21 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)238))));
                        var_24 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))) != (var_0))) ? (((((/* implicit */_Bool) (signed char)-77)) ? (var_18) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9)))));
                        var_25 = ((/* implicit */signed char) (((+(6372311410410219560ULL))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)190)))))));
                        var_26 = ((/* implicit */short) 11278621209046317265ULL);
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        arr_24 [i_2] [24LL] [i_3] = ((/* implicit */signed char) (+(((7168122864663234331ULL) + (((/* implicit */unsigned long long int) arr_15 [i_2] [i_2] [i_2] [i_7] [14]))))));
                        var_27 = ((/* implicit */int) var_13);
                    }
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        var_28 ^= (~(((/* implicit */int) (unsigned char)161)));
                        arr_28 [(unsigned short)7] [i_2] [(unsigned char)1] [(unsigned short)7] [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned int) (~(-1122486087)))) ^ (arr_26 [i_4] [i_4 + 1] [i_4] [i_4 - 1])));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 1; i_9 < 23; i_9 += 4) 
                        {
                            arr_31 [(short)24] [i_8] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) 1559515596U);
                            var_29 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_3] [i_2] [i_9]))) : (((long long int) 4048834101946751482LL))));
                            arr_32 [i_2] [i_2] [i_2] = ((/* implicit */signed char) (+(arr_16 [i_9] [(short)10] [i_9] [i_9 + 2] [i_9] [23LL])));
                        }
                        arr_33 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225))) - (arr_30 [i_4 - 1] [(short)6] [i_8] [i_8])));
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            arr_36 [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (short)3915)) ? (((/* implicit */unsigned long long int) -1137127377)) : (8755196940495804759ULL)));
                            arr_37 [i_3] [i_2] [i_10] = ((/* implicit */short) (+(arr_30 [i_10] [i_4 - 1] [i_4] [i_8])));
                        }
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            arr_42 [i_2] [i_2] [i_2] [i_4 + 3] [i_2] [19ULL] [i_11] = ((/* implicit */unsigned char) var_5);
                            arr_43 [i_2] [(short)24] [i_8] [i_4] [i_11] [i_11] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)37699))));
                        }
                    }
                    for (short i_12 = 2; i_12 < 22; i_12 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 3; i_13 < 24; i_13 += 4) 
                        {
                            arr_50 [i_13] [i_2] [i_12 + 2] [i_2] [21ULL] [i_2] [i_2] = (signed char)127;
                            arr_51 [i_2] [i_2] [i_4] [i_13] = ((/* implicit */int) (signed char)-19);
                            var_30 |= ((/* implicit */short) (+(((((/* implicit */int) var_12)) & (arr_23 [i_3] [i_3] [i_12 - 2] [(signed char)16])))));
                        }
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 166636054U))))) : (((((/* implicit */_Bool) 1181580302902411164LL)) ? (((/* implicit */int) (short)-29503)) : (((/* implicit */int) (short)3912))))));
                        arr_52 [i_3] [i_3] [i_4] [(short)2] [i_12] [i_3] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_20 [i_12] [i_3] [i_12] [i_12 - 2] [i_12 - 2]))));
                        arr_53 [i_2] [i_2] [i_2] [i_12] [i_2] = var_17;
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (-(((-575208069) % (((/* implicit */int) var_17)))))))));
                    }
                }
            } 
        } 
    }
    var_33 *= ((/* implicit */short) (((-(1791921212))) * (((/* implicit */int) ((((((/* implicit */_Bool) (short)-10839)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))) < (((((/* implicit */int) (short)-8818)) & (((/* implicit */int) (signed char)-23)))))))));
    var_34 = ((/* implicit */short) ((((((((/* implicit */int) (signed char)-29)) ^ (((/* implicit */int) (short)3887)))) + (2147483647))) >> ((((~(15124141025626734482ULL))) - (3322603048082817111ULL)))));
}
