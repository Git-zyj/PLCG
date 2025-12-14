/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93187
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)5011)) & (arr_1 [i_0 + 2] [i_0 + 1])))) ? (arr_1 [i_0 + 1] [i_0 - 1]) : ((-(((/* implicit */int) (unsigned char)255))))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])) ? (arr_1 [i_0 - 1] [i_0 - 1]) : (arr_1 [i_0 + 2] [i_0 + 2]))))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1]))), (((/* implicit */unsigned long long int) ((int) arr_2 [i_0 - 1]))))))));
                    arr_6 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) ((short) arr_3 [i_0]))) : (((((/* implicit */_Bool) 17780007775815403813ULL)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) (short)32767)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((unsigned char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_12))) & (((/* implicit */long long int) ((/* implicit */int) var_18))))));
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            {
                var_23 = ((/* implicit */short) min((arr_9 [i_3]), (((((long long int) var_7)) / (var_12)))));
                var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [10ULL] [10ULL])) && (((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_3] [12]))))), (((((/* implicit */_Bool) arr_10 [i_3] [2LL])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned char)12] [(signed char)2]))))))))));
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    arr_16 [i_3] = ((/* implicit */long long int) arr_8 [i_4 + 1] [i_3]);
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_25 ^= max((max((arr_12 [i_6 + 3] [i_7 + 3] [0]), (arr_12 [4LL] [i_7 + 1] [2LL]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)63352)) != (arr_20 [i_3] [i_4] [i_5] [i_5] [i_6 + 2] [i_6] [i_7])))));
                                arr_21 [i_3] [i_4] [i_5] [i_5] [i_7] = ((/* implicit */short) (unsigned short)21043);
                                var_26 = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_11 [i_3] [i_3])), (arr_10 [i_6] [i_3])))), (max((((/* implicit */unsigned long long int) arr_9 [i_3])), (8565478445015910362ULL)))))));
                                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_8 [i_3] [i_3]), (arr_8 [i_3] [i_3])))) ? (min((arr_8 [i_3] [i_3]), (arr_8 [i_3] [i_3]))) : (max((((/* implicit */unsigned long long int) (unsigned char)0)), (arr_8 [i_3] [i_3])))));
                            }
                        } 
                    } 
                    var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_17 [i_3] [i_4 + 1] [i_3] [(signed char)14] [i_5] [i_3]), (arr_17 [i_3] [i_4 + 1] [i_5] [12LL] [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) (-(arr_17 [i_3] [i_4 + 1] [i_5] [(unsigned short)10] [i_5] [i_5])))) : (((((/* implicit */_Bool) arr_17 [i_4] [i_4 + 1] [i_5] [12LL] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) arr_17 [i_4] [i_4 + 1] [(_Bool)1] [12] [i_4] [(_Bool)1])) : (var_9)))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((short) ((((((/* implicit */_Bool) arr_8 [i_4] [14])) && (arr_25 [i_3] [i_3] [i_8] [i_9]))) ? (((/* implicit */int) arr_18 [i_3] [i_4] [i_4 + 1] [i_9])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)48)) && (((/* implicit */_Bool) (unsigned char)255)))))))))));
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) min((arr_18 [i_4 + 2] [i_4] [i_4 + 1] [4LL]), (min((arr_18 [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_8]), (arr_18 [i_4 + 2] [i_4] [i_4 + 1] [i_4 + 1]))))))));
                        var_31 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_10)) ? (arr_17 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_3] [i_4 + 1] [i_4]) : (arr_17 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_3] [i_4] [i_4])))));
                    }
                    var_32 = ((/* implicit */_Bool) ((unsigned long long int) min((arr_25 [i_3] [i_4] [i_8] [i_4 + 2]), (arr_25 [i_3] [(_Bool)1] [i_8] [i_4 + 1]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 1; i_10 < 15; i_10 += 1) 
                    {
                        var_33 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_8 [i_4 + 2] [i_3])) ? (arr_17 [i_3] [i_3] [i_4 - 1] [i_3] [i_10] [i_10 + 3]) : (arr_17 [i_4] [i_4 + 2] [i_4 - 1] [i_3] [i_4 - 1] [i_4 - 1])))));
                        var_34 ^= ((/* implicit */int) max(((((_Bool)0) ? (((((/* implicit */_Bool) 1902417164)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (5241663931177308272ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12162))))), (10048988299563796206ULL)));
                    }
                    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44493)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3] [(short)10] [i_3] [i_3]))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [16ULL])) ? (((/* implicit */long long int) arr_11 [i_3] [(_Bool)1])) : (var_7))) >= (((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_3] [i_4] [i_8] [(_Bool)1])))))))))))));
                }
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((arr_25 [i_3] [i_3] [i_4] [(unsigned short)16]) && (((/* implicit */_Bool) arr_10 [i_4 - 1] [8ULL])))))));
                    arr_32 [(unsigned short)6] [(unsigned short)6] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41824))) | (18446744073709551615ULL)));
                    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_3] [i_3] [i_4 - 1] [i_3])) ? (arr_17 [i_11] [i_4] [i_3] [i_3] [i_4 - 1] [i_3]) : (arr_17 [i_11] [i_11] [i_3] [i_3] [i_4 + 1] [i_3])));
                    var_38 ^= ((/* implicit */unsigned long long int) var_12);
                }
            }
        } 
    } 
    var_39 = ((/* implicit */long long int) var_18);
}
