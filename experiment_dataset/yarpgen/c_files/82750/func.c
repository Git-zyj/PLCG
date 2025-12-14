/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82750
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) var_5);
                    arr_7 [i_0] [i_0] [9ULL] [i_0] = ((/* implicit */long long int) (~(3857984818U)));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)24))));
        arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) max((((/* implicit */int) min((arr_8 [i_3] [i_3]), (((/* implicit */unsigned short) arr_1 [(signed char)2]))))), ((+(((/* implicit */int) (signed char)61))))))) + (max((((arr_9 [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-622085732398743725LL))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)61)))))))));
        arr_14 [i_3] [i_3] |= ((/* implicit */unsigned int) (+(arr_11 [i_3])));
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_10 [i_3] [i_3])), ((+(((/* implicit */int) arr_1 [(_Bool)1]))))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(short)8]))))), (((((/* implicit */int) (signed char)-69)) + (((/* implicit */int) (signed char)69)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) >= (((((/* implicit */_Bool) (signed char)94)) ? (arr_11 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3]))))))))));
    }
    for (short i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        var_12 -= (((~(arr_16 [i_4]))) % (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((13275882891075380769ULL), (((/* implicit */unsigned long long int) arr_17 [i_4] [i_4]))))))))));
        /* LoopSeq 3 */
        for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
        {
            var_13 = ((/* implicit */int) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_4] [i_5]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (925447058691694306ULL))) : (((/* implicit */unsigned long long int) 1056902661)))), (((/* implicit */unsigned long long int) arr_17 [i_4] [i_4]))));
            var_14 = ((/* implicit */unsigned short) ((_Bool) arr_15 [i_5] [i_5 + 1]));
            /* LoopSeq 2 */
            for (unsigned int i_6 = 1; i_6 < 21; i_6 += 1) /* same iter space */
            {
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) arr_16 [(signed char)0]))));
                var_16 &= ((/* implicit */int) max((((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? ((((_Bool)1) ? (9223372036854775807LL) : (-8313070223634831461LL))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) ((((_Bool) -8313070223634831461LL)) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) ((short) arr_15 [i_5 - 1] [i_5]))))))));
                arr_22 [i_5] = ((/* implicit */long long int) (signed char)-95);
            }
            /* vectorizable */
            for (unsigned int i_7 = 1; i_7 < 21; i_7 += 1) /* same iter space */
            {
                arr_26 [i_4] [i_4] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_7] [i_7 + 1] [i_7 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_21 [i_7 - 1] [i_7] [i_7 - 1]))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (-(((/* implicit */int) arr_20 [i_4] [i_4] [i_5] [1LL])))))));
            }
            var_18 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5 + 1])))) ? (((((/* implicit */_Bool) max((arr_23 [i_5 - 1] [i_4] [i_4]), (((/* implicit */unsigned long long int) var_4))))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_15 [i_5 - 1] [i_5 - 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_5] [i_5 + 1] [i_4])) && (((/* implicit */_Bool) min((-2147483643), (((/* implicit */int) var_6))))))))));
        }
        /* vectorizable */
        for (signed char i_8 = 2; i_8 < 19; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                var_19 = ((/* implicit */long long int) max((var_19), (var_3)));
                var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_8] [i_8])) ? (arr_24 [i_9] [i_9] [i_8] [i_4]) : (arr_23 [i_9] [i_8] [i_4])));
            }
            var_21 = ((/* implicit */unsigned short) ((arr_24 [i_8] [3LL] [i_4] [i_4]) ^ (4472127292255442210ULL)));
            arr_31 [i_8] [i_8 - 1] |= ((/* implicit */_Bool) arr_18 [i_8 + 2] [i_4]);
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    {
                        var_22 = ((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_8 + 1] [i_8 + 1] [i_8]))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) 2500017248U))));
                        arr_37 [i_4] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-69)) && (((/* implicit */_Bool) arr_24 [i_4] [i_8 - 2] [i_10] [i_11])))) && (((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_10] [i_10]))));
                    }
                } 
            } 
        }
        for (unsigned char i_12 = 3; i_12 < 20; i_12 += 3) 
        {
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                for (short i_14 = 2; i_14 < 18; i_14 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_15 = 0; i_15 < 22; i_15 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) arr_21 [5ULL] [5ULL] [5ULL]);
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_46 [i_14 - 1] [i_15] [i_14 - 1] [i_14 - 1] [i_14 - 1])) - (((/* implicit */int) ((signed char) arr_32 [i_13])))));
                        }
                        /* vectorizable */
                        for (unsigned short i_16 = 0; i_16 < 22; i_16 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((arr_23 [i_16] [i_16] [i_12 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_16] [i_12 - 1] [i_12 - 1] [i_12 - 1])))));
                            arr_52 [i_12] [(unsigned char)1] [i_13] [i_12] [(unsigned char)1] = ((((/* implicit */_Bool) arr_49 [i_14 + 1] [i_12 + 2] [i_12 + 1])) ? (((((/* implicit */_Bool) arr_51 [i_16] [i_13] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) 1794950048U)) : (arr_24 [i_13] [i_14 + 2] [i_13] [10LL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_14 + 4] [i_14 + 1] [i_12 - 1] [i_12 + 1]))));
                            var_27 = ((/* implicit */unsigned long long int) ((signed char) (_Bool)1));
                            var_28 ^= ((/* implicit */unsigned char) (~((+(arr_24 [i_4] [i_4] [i_14] [i_16])))));
                            var_29 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (_Bool)1)))));
                        }
                        var_30 = ((/* implicit */unsigned short) var_0);
                        var_31 = ((/* implicit */unsigned char) arr_41 [(unsigned short)3] [i_14]);
                        var_32 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_4] [i_12 - 2] [i_13])) & (((((/* implicit */_Bool) (signed char)127)) ? (arr_34 [i_12]) : (((/* implicit */int) (signed char)-69))))))) & ((+(arr_51 [i_14 - 2] [i_14] [i_14 + 1] [i_14 - 2])))));
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        arr_53 [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_28 [i_4]) - (arr_28 [i_4])))) + (arr_40 [i_4] [i_4] [i_4])));
        var_34 += ((/* implicit */unsigned int) (-((~(max((((/* implicit */unsigned long long int) var_6)), (5170861182634170854ULL)))))));
    }
    for (unsigned short i_17 = 3; i_17 < 19; i_17 += 3) 
    {
        arr_56 [i_17] [i_17 - 1] = ((/* implicit */unsigned long long int) arr_16 [(unsigned char)20]);
        var_35 = ((/* implicit */int) min((var_35), ((-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (757613039U)))) ? (((/* implicit */int) ((_Bool) arr_29 [i_17 + 1] [i_17 - 3] [i_17 + 1]))) : (((/* implicit */int) var_4))))))));
    }
    var_36 = ((/* implicit */unsigned char) var_6);
}
