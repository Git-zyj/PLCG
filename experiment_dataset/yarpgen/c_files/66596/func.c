/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66596
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_12 *= ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) max(((_Bool)1), (var_3)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        arr_10 [i_1] [10] [10] [i_1] [i_1] = ((/* implicit */long long int) arr_9 [(short)3] [(short)3] [i_1] [i_2] [(short)3]);
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_4 [i_1] [i_2] [i_3])) * (((((/* implicit */_Bool) 2173532453U)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_11 [(signed char)7] [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_4] [i_0] |= ((/* implicit */unsigned long long int) ((unsigned short) arr_6 [i_4] [i_2] [i_1]));
                        arr_15 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_0))));
                        var_14 = (-(((((/* implicit */_Bool) var_1)) ? (arr_9 [i_4] [i_4] [(signed char)15] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51563))))));
                        arr_16 [10] [10] [i_4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_7)) / (((/* implicit */int) (short)30641))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_0] [i_5] [(_Bool)1] = ((/* implicit */short) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) var_0)))))), (max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))))), (((unsigned short) arr_2 [11ULL]))))));
                        arr_20 [i_5] [i_5] [i_5] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((var_8) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))), ((+(((/* implicit */int) var_0))))));
                        arr_21 [(_Bool)1] [i_5] [i_2] [i_1] [i_5] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (arr_13 [i_0] [i_1] [i_1] [i_1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14454)))));
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_5] [i_5] = ((/* implicit */unsigned int) ((long long int) arr_3 [i_2]));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 1; i_6 < 16; i_6 += 1) 
                    {
                        var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) (unsigned short)4476))))) ? ((~(((/* implicit */int) (signed char)14)))) : (((/* implicit */int) (short)7644))))), (((unsigned long long int) var_2))));
                        var_16 = ((/* implicit */short) arr_2 [i_6]);
                    }
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 4) 
                        {
                            arr_30 [i_0] [i_0] [i_7] [(_Bool)1] [i_8] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)1)))) >> (((var_1) + (7358197335762429321LL)))));
                            var_17 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_4 [i_8] [i_8] [i_8])) : (var_8)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (arr_4 [i_2] [i_2] [i_2]))))))) <= (var_8));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1073741823ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45245))))) : (((/* implicit */int) ((_Bool) ((var_1) == (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_2] [i_1] [i_0])))))))));
                        }
                        arr_31 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) arr_2 [i_1])));
                    }
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        var_19 = ((/* implicit */short) (-(((/* implicit */int) (short)0))));
                        /* LoopSeq 4 */
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            var_20 -= ((/* implicit */unsigned int) min((-2137640957), (((/* implicit */int) (!((_Bool)0))))));
                            var_21 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) ((unsigned int) var_3))) ? ((~(var_8))) : (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-102))))) ? (arr_36 [i_2] [i_10] [i_10 + 1] [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (var_3))))))))));
                            arr_39 [i_10] [i_10] [i_2] [i_1] [i_10] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_10] [i_10 + 1] [i_10] [i_10])) ? ((-(-224668953071088223LL))) : (((/* implicit */long long int) ((int) arr_5 [i_9] [i_9] [(short)14])))))), (((((((/* implicit */_Bool) arr_13 [i_0] [12ULL] [i_2] [i_9] [12ULL])) ? (18309312170513402548ULL) : (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_10] [3ULL] [(_Bool)1] [(_Bool)1])))) ^ (((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_9] [i_9] [i_9] [i_9] [i_9])))))));
                            var_22 = ((/* implicit */short) arr_36 [i_0] [i_0] [i_1] [(_Bool)1] [i_9] [2] [i_10]);
                        }
                        for (short i_11 = 0; i_11 < 17; i_11 += 2) 
                        {
                            var_23 -= ((/* implicit */short) 224668953071088222LL);
                            var_24 &= ((/* implicit */short) min((max((arr_5 [i_0] [i_1] [i_2]), (arr_5 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned int) var_3))));
                            arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)2] = ((/* implicit */short) var_1);
                        }
                        for (unsigned long long int i_12 = 3; i_12 < 15; i_12 += 2) 
                        {
                            arr_46 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_0] [i_2] [i_12] [i_9] [i_9] [i_12 - 3])) && (((/* implicit */_Bool) var_8))))), (((((/* implicit */int) arr_29 [i_1] [i_12] [i_2] [i_12] [i_12] [i_12 + 1])) << (((((/* implicit */int) arr_29 [i_0] [(unsigned short)15] [i_0] [i_2] [(unsigned short)15] [i_12 + 2])) - (190)))))));
                            var_25 ^= ((/* implicit */unsigned char) var_2);
                            var_26 -= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) 16383)) ? (var_4) : ((-(((/* implicit */int) var_10)))))));
                        }
                        for (unsigned long long int i_13 = 2; i_13 < 14; i_13 += 2) 
                        {
                            arr_51 [(signed char)10] [12LL] [12LL] [i_9] [i_13 + 2] = ((/* implicit */_Bool) min((((arr_38 [i_13 + 2] [i_13 + 2] [i_13] [i_13 - 2] [i_13 + 2] [i_13 + 2]) << (((((/* implicit */int) var_7)) - (38224))))), (((/* implicit */unsigned long long int) max(((unsigned short)40985), (((/* implicit */unsigned short) arr_50 [i_9] [i_1])))))));
                            var_27 = (~(224668953071088222LL));
                        }
                        arr_52 [i_0] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                        var_28 += min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_50 [i_1] [i_2]))))), (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0] [i_2] [i_9])) ? (arr_18 [i_9] [i_2] [i_0] [i_0] [(short)2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
                    }
                }
            } 
        } 
    } 
    var_29 &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((var_2) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) (_Bool)1))))))))));
    var_30 = ((/* implicit */signed char) var_8);
    var_31 = ((/* implicit */unsigned char) var_10);
}
