/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69591
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
    var_19 = ((/* implicit */unsigned int) ((max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)510)) + (((/* implicit */int) (short)-25235))))))) * (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)494))) ^ ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26317)))))) : (((unsigned long long int) var_8))))));
    var_20 = ((/* implicit */unsigned int) var_13);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_21 &= ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1 - 2]))))))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65026)) | (((/* implicit */int) (unsigned short)65025))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [15ULL] [i_1]))) : ((~(((((/* implicit */_Bool) (unsigned short)509)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65026)))))))));
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29808))) : (var_5)))))) ? (((((/* implicit */_Bool) 63730938004196473ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) : (arr_1 [i_1 + 1]))) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_1]))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) <= (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (arr_5 [i_1]) : (18383013135705355143ULL))))) ? (((/* implicit */unsigned long long int) (~(arr_4 [i_2 - 1] [i_1])))) : ((+(arr_1 [i_1 + 1])))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_12 [i_1] = ((/* implicit */short) ((unsigned long long int) ((unsigned short) min((arr_1 [i_2]), (((/* implicit */unsigned long long int) var_14))))));
                        var_24 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned short) (signed char)123))), (var_11)));
                        arr_13 [i_1] [i_2 + 1] [i_1 + 2] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)65005));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_1] [i_3] [i_1]);
                            arr_16 [i_1] [i_1] [12ULL] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-86))))) + ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162))) : (18383013135705355131ULL))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)102)) % (((/* implicit */int) (signed char)(-127 - 1))))))));
                            arr_17 [i_0] [i_1] [i_0] [6ULL] [i_0] [i_0] = ((/* implicit */unsigned int) var_11);
                        }
                        for (short i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                        {
                            var_26 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-119)), (arr_4 [16LL] [16LL])))) ? (((int) 18446744073709551615ULL)) : (((int) arr_4 [14U] [14U]))));
                            arr_20 [i_0] [i_1] [i_0] [i_0] [i_0] [(unsigned char)7] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65025))) <= (18383013135705355130ULL)))) ^ (((/* implicit */int) ((((/* implicit */long long int) var_14)) < (arr_4 [i_1] [i_1]))))));
                        }
                        for (short i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (1241059204) : (arr_2 [i_0] [i_2 - 1] [i_1])))) ? (min((max((9059276315675288720LL), (((/* implicit */long long int) (unsigned short)20684)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))))) : (((/* implicit */long long int) ((/* implicit */int) (short)32758)))));
                            var_28 = ((/* implicit */unsigned short) (+(var_14)));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) -7735362747606174542LL)) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-20917))))) : (9059276315675288746LL)));
                        arr_25 [i_1] [i_2] [i_2 - 1] [i_2] [i_2 - 1] = ((/* implicit */signed char) ((unsigned int) 1440775149098875433ULL));
                    }
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned int) (~((((+(((/* implicit */int) (signed char)56)))) + (((/* implicit */int) (signed char)-25))))));
                        arr_28 [i_0] [i_0] [i_1] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1 - 2] [12ULL])) * (((arr_2 [i_1] [i_0] [i_1]) % (arr_2 [i_0] [i_1 + 2] [i_1])))));
                    }
                    arr_29 [i_0] [i_1] [i_2] [i_0] = (-((-(((/* implicit */int) (unsigned short)65010)))));
                }
                /* vectorizable */
                for (unsigned int i_9 = 3; i_9 < 18; i_9 += 3) 
                {
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (+((-(-3496618002219830608LL))))))));
                    var_32 = ((/* implicit */signed char) ((long long int) (short)-1));
                    /* LoopNest 2 */
                    for (signed char i_10 = 3; i_10 < 19; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 3; i_11 < 19; i_11 += 3) 
                        {
                            {
                                arr_39 [i_0] [3ULL] [i_0] [i_1] [4] = ((/* implicit */unsigned short) (+((~(13861775679757680567ULL)))));
                                var_33 ^= ((/* implicit */short) arr_27 [i_11 - 3] [i_11] [i_11] [i_11] [i_11] [10U]);
                                var_34 = ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_9 - 2])) : (((/* implicit */int) arr_0 [i_1 + 1] [i_9 - 1])));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)25997)) ? (arr_4 [i_1 + 1] [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [(unsigned char)11] [i_1 + 2] [i_1] [i_1] [i_12])) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (signed char)8)))))));
                    var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1]))));
                    var_37 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_13))));
                }
                for (signed char i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_14 = 2; i_14 < 17; i_14 += 3) 
                    {
                        for (short i_15 = 0; i_15 < 20; i_15 += 3) 
                        {
                            {
                                var_38 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */int) arr_30 [i_0] [i_1 + 2] [6] [i_14 - 1])) : (((/* implicit */int) arr_30 [i_0] [(signed char)0] [(unsigned short)0] [i_14 + 3]))))) ? (((((/* implicit */_Bool) 0U)) ? (-9059276315675288746LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((arr_30 [i_15] [i_1 - 1] [(_Bool)1] [i_14 + 3]) ? (((/* implicit */int) arr_30 [6] [i_1 + 2] [2ULL] [i_14 - 1])) : (((/* implicit */int) arr_30 [i_0] [i_1] [18] [i_14 + 2])))))));
                                arr_50 [i_14 + 1] [i_14 + 1] [i_1] [i_1 - 1] [(unsigned char)12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)64986))));
                            }
                        } 
                    } 
                    arr_51 [i_1] [i_1 + 2] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)550));
                }
            }
        } 
    } 
}
