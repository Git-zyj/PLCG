/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55544
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) (signed char)-25);
        arr_3 [(unsigned short)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_2 [(unsigned char)13])) * (((/* implicit */int) var_15))))))) ? (((((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) >> (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_10))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (var_8))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_4] [(unsigned short)5] = ((/* implicit */short) arr_16 [i_0] [i_1] [i_0]);
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (unsigned short)37601))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 4) 
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_5] [i_2] [8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3257080359U)))))) ? (var_12) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_1] [i_2 - 3] [i_2] [i_1] [i_5])))))));
                        /* LoopSeq 2 */
                        for (int i_6 = 4; i_6 < 11; i_6 += 3) 
                        {
                            var_19 += ((unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)44))) : (arr_8 [12ULL] [12ULL] [13LL])))) ? (2919265263748027937ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (arr_15 [i_0] [i_1] [i_0] [i_5] [i_6] [i_0] [(unsigned char)5])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned int) var_16))))) : (((((/* implicit */_Bool) 0U)) ? ((+(9598804154375900679ULL))) : (((8847939919333650936ULL) ^ (8847939919333650936ULL)))))));
                        }
                        for (int i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_21 ^= ((/* implicit */signed char) var_2);
                            var_22 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_5 + 1] [i_5]))))) % (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64512))) : (arr_12 [i_0] [12ULL] [i_2] [i_0] [i_5] [i_7]))))))));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) max(((+(((/* implicit */int) min((((/* implicit */unsigned char) var_3)), ((unsigned char)56)))))), (((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_2] [1] [i_7])) ? (((((/* implicit */int) (signed char)79)) - (((/* implicit */int) arr_1 [i_2] [i_5])))) : ((-(((/* implicit */int) arr_2 [i_0])))))))))));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_2 - 2] [i_5 + 1] [13] [i_5]))));
                            var_25 *= ((/* implicit */int) ((((/* implicit */int) (unsigned char)231)) == (((/* implicit */int) (short)-30938))));
                        }
                        for (long long int i_9 = 3; i_9 < 12; i_9 += 2) 
                        {
                            arr_31 [(unsigned short)10] [(unsigned short)10] = ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_9]);
                            var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_5] [i_5] [i_2] [i_5]))));
                        }
                        /* vectorizable */
                        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            arr_34 [i_10] [(unsigned short)10] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (-2147483647 - 1));
                            var_27 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_30 [i_1] [i_2 + 2] [i_5 - 2] [i_5] [i_5]))));
                            var_28 = ((/* implicit */long long int) 568549689U);
                            var_29 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [11U] [i_2 + 1] [i_5 - 2] [i_5] [(short)9]))) % (var_12)));
                        }
                    }
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        arr_37 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) var_4)), (max((arr_32 [i_0] [i_1] [i_2 - 3] [12LL]), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_24 [i_0] [4LL] [i_0] [i_1] [i_11])) <= (1152921504606846976ULL))))))));
                        arr_38 [i_0] [i_11] = ((/* implicit */signed char) arr_23 [i_1]);
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_12 = 3; i_12 < 14; i_12 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) var_0);
            /* LoopSeq 1 */
            for (unsigned char i_13 = 1; i_13 < 14; i_13 += 3) 
            {
                var_31 = ((/* implicit */unsigned short) (((~(min((var_10), (((/* implicit */unsigned long long int) arr_23 [i_0])))))) >> (((((unsigned long long int) arr_10 [i_0] [i_12] [i_13] [i_13 + 1])) - (16038ULL)))));
                /* LoopSeq 3 */
                for (int i_14 = 0; i_14 < 15; i_14 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */int) min((var_32), (arr_44 [i_12] [3LL] [i_12 + 1] [i_13 + 1])));
                    var_33 = ((/* implicit */int) 8847939919333650946ULL);
                    arr_45 [i_0] [i_0] [i_14] [11] [2U] = arr_9 [i_0] [(unsigned short)0] [i_12] [i_13] [i_14];
                }
                for (int i_15 = 0; i_15 < 15; i_15 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned char) var_0);
                    var_35 = ((/* implicit */short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)29872))));
                    arr_48 [i_0] [(_Bool)1] [i_13] [i_0] [i_12] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) var_5)))) + (2147483647))) << (((((((/* implicit */_Bool) (-(var_9)))) ? (var_13) : (((/* implicit */long long int) var_0)))) - (8292151056257047660LL)))));
                    var_36 *= ((/* implicit */int) (((((!(((/* implicit */_Bool) -1631943116)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [10LL] [i_13] [i_12] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1))))))) || (((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (var_13)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)17689)), ((unsigned short)65535))))))));
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 15; i_16 += 3) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned char) arr_13 [i_0] [i_0] [13] [i_0] [i_16]);
                    /* LoopSeq 1 */
                    for (int i_17 = 0; i_17 < 15; i_17 += 1) 
                    {
                        var_38 = ((/* implicit */signed char) (+(arr_16 [(unsigned short)14] [i_12 - 2] [i_0])));
                        arr_55 [i_17] [i_17] [i_13] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                        arr_56 [i_17] = ((/* implicit */unsigned short) 9598804154375900695ULL);
                    }
                    var_39 = (-(arr_41 [i_12 + 1] [(signed char)10] [i_12]));
                }
                arr_57 [i_0] [i_0] [i_13] [i_12] = ((/* implicit */unsigned long long int) var_9);
            }
        }
    }
    var_40 = ((/* implicit */unsigned char) var_11);
    var_41 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */unsigned long long int) var_9)), (var_10))) : (((/* implicit */unsigned long long int) var_8))))));
    var_42 = ((/* implicit */unsigned short) ((long long int) ((4611686017890516992LL) >> (4U))));
}
