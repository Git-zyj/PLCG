/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58688
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
    var_13 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) ((6698995033128274492LL) + (((/* implicit */long long int) var_12))))) ? (var_2) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) var_10))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) var_5);
                    var_14 = ((/* implicit */short) (((-(var_3))) > (var_5)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0 - 2] [i_1] [i_2] [i_1] [i_0 - 2] = ((/* implicit */short) arr_7 [i_2] [i_1] [i_2]);
                                var_15 = ((/* implicit */unsigned long long int) var_7);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 1) 
                    {
                        arr_17 [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)70);
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (~(((unsigned int) arr_15 [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 - 2] [5U])))))));
                        var_17 = ((/* implicit */unsigned int) ((signed char) (unsigned char)71));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(3786052788133226878ULL)))) ? (((/* implicit */int) (unsigned short)44300)) : (((63) << (((((/* implicit */int) arr_4 [i_0] [i_0 - 1])) - (50241)))))));
                        arr_23 [i_1] [i_1] [i_2] [9LL] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_18 = ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_2] [i_0] [i_7])))) - (((/* implicit */int) var_11))))) ? (arr_7 [i_0 - 2] [i_1] [i_2]) : (((/* implicit */unsigned int) (~(((arr_12 [i_2] [12] [i_1] [i_2] [11LL]) ? (var_10) : (var_8)))))));
                        arr_26 [i_0 + 2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_10 [i_0] [i_0] [(_Bool)1] [(unsigned char)7] [i_0 - 1]);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            var_19 += ((/* implicit */unsigned short) (+((-(arr_0 [i_0 - 1])))));
                            var_20 = ((/* implicit */long long int) ((signed char) ((unsigned char) var_8)));
                            var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1])) ? (((/* implicit */int) arr_4 [i_8] [i_1])) : (((/* implicit */int) (unsigned char)77))))))))));
                            var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0 + 2] [i_0 - 1])) ? (arr_13 [(short)14] [i_0] [i_0] [i_0 - 2] [i_0 - 1]) : (arr_13 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0] [i_0 - 1])))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_23 = ((/* implicit */short) min((((arr_33 [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61))))), ((-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (14967241430474114163ULL)))))));
                            arr_35 [i_0] [i_1] [i_2] [i_8] [i_8] = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) var_11)), (((long long int) (unsigned short)0)))), (((/* implicit */long long int) arr_1 [(_Bool)1] [i_1]))));
                            var_24 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_3 [i_0 - 2] [i_2] [2LL]))))));
                            var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 2] [(signed char)7] [10] [i_10]))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-62)))))))))));
                            arr_36 [i_10] [i_10] [i_1] [i_10] [i_10] = ((/* implicit */unsigned long long int) (~(((arr_31 [i_0] [i_0] [i_2] [i_8] [i_0 - 2] [(unsigned short)5] [i_10]) << (((((/* implicit */int) arr_34 [i_0] [(signed char)4] [i_2] [i_8] [i_0 - 2])) - (29970)))))));
                        }
                        for (signed char i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            var_26 = arr_20 [i_0 + 2] [i_0] [0ULL] [i_0] [i_0];
                            var_27 = ((/* implicit */int) arr_34 [i_0] [(_Bool)1] [i_2] [i_0] [i_11]);
                        }
                        for (short i_12 = 0; i_12 < 16; i_12 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) (~((-(arr_41 [i_8])))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_1] [i_8] [i_8])))))) ? (-6698995033128274508LL) : (((/* implicit */long long int) ((var_8) | (((/* implicit */int) (unsigned short)65535)))))))) || (((/* implicit */_Bool) (unsigned short)54258))));
                            var_30 = ((/* implicit */_Bool) var_4);
                        }
                        var_31 = ((/* implicit */unsigned short) (~((+(15376626089867176460ULL)))));
                        var_32 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 6698995033128274492LL)))))));
                        var_33 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (signed char)-32)))) + ((-(((/* implicit */int) arr_2 [i_0 + 2]))))));
                    }
                    arr_42 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(-1272203862)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_13 = 3; i_13 < 15; i_13 += 1) 
    {
        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_15 = 0; i_15 < 19; i_15 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */short) ((signed char) arr_49 [i_14]));
                    var_35 = ((/* implicit */_Bool) (((+(max((var_8), (((/* implicit */int) (signed char)-94)))))) + (((/* implicit */int) (signed char)-1))));
                    var_36 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((128192043) / (arr_46 [i_15] [i_14] [i_13])))) ? (arr_44 [i_13] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63))))) < ((-(((/* implicit */int) arr_49 [i_13 + 2]))))))))));
                    arr_50 [i_15] [i_14] [i_13] [i_13] |= ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) var_7)) > (((/* implicit */int) var_7)))) ? (((arr_45 [i_13 - 2] [(unsigned short)0] [i_13 + 2]) ? (var_5) : (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_43 [i_14])), ((unsigned short)16382)))))))));
                }
                for (signed char i_16 = 0; i_16 < 19; i_16 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned short) arr_47 [i_13] [i_13]);
                    var_38 ^= ((/* implicit */_Bool) (unsigned short)44293);
                    arr_53 [i_14] |= ((/* implicit */unsigned short) (~(max(((-(25ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6698995033128274502LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_14]))) : (3877657863U))))))));
                    var_39 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1589233099))));
                }
                var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_46 [i_14] [(short)13] [i_13])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_6)) ? (arr_44 [i_14] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_13 + 4])))))))) ? (((((/* implicit */int) (unsigned short)44275)) - (((/* implicit */int) var_1)))) : (max((var_10), (((/* implicit */int) (signed char)-3))))));
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned long long int) (~(var_3)));
}
