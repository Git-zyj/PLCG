/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58062
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */short) arr_0 [i_1]);
            var_11 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned short)64651)) * (((/* implicit */int) (unsigned short)25496))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) arr_8 [i_2]);
            /* LoopSeq 4 */
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
            {
                var_12 -= ((/* implicit */unsigned char) (+((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 1]))) - (65535ULL)))))));
                arr_14 [i_0 + 1] [i_2] [i_2] [i_3] = (((-(((/* implicit */int) arr_6 [i_0 - 1])))) - (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))) | (arr_13 [i_0] [i_2] [i_3] [i_0]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25488)))))));
                var_13 = ((((/* implicit */int) arr_3 [i_3] [i_0 - 1])) > (arr_0 [i_0]));
            }
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])) || (((/* implicit */_Bool) arr_1 [i_0 + 1] [i_2]))));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)229)))))));
            }
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
            {
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_0])) % ((~(((/* implicit */int) (signed char)-32)))))))));
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                {
                    arr_25 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */int) (short)255);
                    arr_26 [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */int) ((((/* implicit */_Bool) (signed char)115)) || (((/* implicit */_Bool) (unsigned short)2040))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)198)))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 3; i_7 < 8; i_7 += 1) 
                    {
                        arr_30 [i_7] [i_7 - 2] [i_7 - 2] [i_5] [i_7 - 2] = ((/* implicit */unsigned char) arr_1 [i_2] [i_5]);
                        arr_31 [i_5] &= ((/* implicit */signed char) (~(((/* implicit */int) (((!(arr_23 [i_7] [i_7 + 1] [i_6] [i_0] [i_2] [i_0]))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)40047))))))))));
                    }
                    for (signed char i_8 = 1; i_8 < 8; i_8 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) (short)255);
                        arr_35 [i_8] [i_2] [i_2] = ((/* implicit */long long int) 11625156592382185305ULL);
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)234)) || (((/* implicit */_Bool) arr_2 [i_8]))))) - (((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned char)255)))) >> (((((/* implicit */int) arr_19 [i_5] [i_5])) - (43683)))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        arr_39 [i_0 - 1] [i_2] [i_5] [i_6] [i_9] = ((/* implicit */unsigned short) (+((-(((arr_15 [i_0] [i_2] [i_5] [i_9]) + (arr_29 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1])))))));
                        arr_40 [i_0 - 1] [i_6] [i_5] [i_6] [i_0 - 1] = ((/* implicit */short) (-(((/* implicit */int) arr_17 [i_0] [i_6]))));
                        arr_41 [i_0 - 1] [i_2] [i_2] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) (short)234))));
                        arr_42 [i_0 - 1] [i_0 + 1] [i_2] [i_5] [i_6] [i_9] = (unsigned short)25496;
                        arr_43 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_9] = ((/* implicit */unsigned int) arr_32 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                    }
                }
                for (short i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */signed char) (((-(((/* implicit */int) (short)-240)))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_8 [i_2]) / (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))))))));
                    var_20 = ((((/* implicit */int) (unsigned char)45)) | ((~(((/* implicit */int) (unsigned short)40048)))));
                }
            }
            for (long long int i_11 = 2; i_11 < 9; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */int) (!((_Bool)1)));
                            var_22 = ((((/* implicit */_Bool) arr_50 [i_0])) && (((/* implicit */_Bool) 3268698835970181766ULL)));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_47 [i_2] [i_2] [i_2] [i_0 + 1])) | (((/* implicit */int) arr_48 [i_2] [i_2] [i_2] [i_2])))) | (((/* implicit */int) arr_33 [i_0] [i_2] [i_2] [i_2] [i_2] [i_11 + 2] [i_11 + 2])))))));
                arr_56 [i_11] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) 4743853608988428065LL);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_14 = 2; i_14 < 10; i_14 += 3) 
                {
                    arr_59 [i_11] [i_14 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_54 [i_14] [i_11] [i_11 - 2] [i_2] [i_2] [i_0 - 1] [i_0])) || (((/* implicit */_Bool) arr_52 [i_0] [i_0] [i_0 - 1] [i_2] [i_11 - 2] [i_14]))))) | ((-(((/* implicit */int) (unsigned char)57))))));
                    arr_60 [i_14] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_22 [i_2] [i_0])) << (((14945632010789728434ULL) - (14945632010789728426ULL)))))));
                    arr_61 [i_0] = ((/* implicit */short) -1310789841);
                    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_14] [i_11 + 2] [i_2] [i_0 - 1])))))));
                }
            }
            arr_62 [i_0] [i_2] = ((/* implicit */signed char) arr_20 [i_2]);
            var_25 ^= ((/* implicit */int) arr_18 [i_0] [i_0 + 1] [i_0] [i_0 + 1]);
            arr_63 [i_0] [i_0] = ((arr_52 [i_2] [i_2] [i_2] [i_0 - 1] [i_0 + 1] [i_0 + 1]) <= ((-(((/* implicit */int) arr_47 [i_0] [i_0] [i_0] [i_2])))));
        }
        arr_64 [i_0 + 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_28 [i_0] [i_0 - 1] [2ULL] [i_0 - 1] [i_0]))));
    }
    var_26 -= ((/* implicit */int) var_3);
    var_27 = ((/* implicit */_Bool) var_5);
    var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)40036))));
    var_29 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_3))))));
}
