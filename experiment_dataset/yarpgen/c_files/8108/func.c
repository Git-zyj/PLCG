/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8108
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    var_13 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
                    var_14 = arr_5 [i_2 - 2] [1ULL] [i_0];
                    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(unsigned short)19] [i_2]))));
                    arr_9 [i_1] [i_0] = min((((/* implicit */int) min(((short)-25758), (((/* implicit */short) (!(((/* implicit */_Bool) var_8)))))))), (max((((int) arr_3 [18] [i_2])), (((/* implicit */int) (short)31161)))));
                }
                for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_3] [i_0])) ? (((/* implicit */long long int) ((unsigned int) (short)31172))) : (((long long int) 2147483647)))) << (((((((/* implicit */_Bool) ((signed char) (short)31161))) ? ((+(((/* implicit */int) (short)-31170)))) : (((/* implicit */int) arr_6 [i_0] [i_0])))) + (31193)))));
                    arr_13 [i_0] [i_0] [6U] = ((/* implicit */unsigned long long int) ((unsigned char) max((arr_11 [i_3] [i_3] [i_1] [i_0]), (arr_11 [i_0] [(unsigned char)22] [i_1] [i_3]))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    var_17 = ((/* implicit */unsigned short) arr_2 [(_Bool)1]);
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) 1802845159))));
                }
                var_19 -= ((/* implicit */long long int) ((_Bool) ((int) ((1076977708) > (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_1] [1U]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 4; i_5 < 24; i_5 += 3) 
    {
        for (signed char i_6 = 1; i_6 < 23; i_6 += 1) 
        {
            {
                var_20 -= ((/* implicit */unsigned char) 1604656582353224905LL);
                var_21 = ((/* implicit */unsigned short) arr_19 [14U] [i_6]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            for (long long int i_9 = 4; i_9 < 15; i_9 += 4) 
            {
                {
                    arr_31 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : ((~(arr_30 [i_9 - 2] [i_9] [i_9 - 1] [i_9 - 3]))))));
                    /* LoopSeq 3 */
                    for (short i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 4) 
                        {
                            var_22 -= ((/* implicit */signed char) 8310953281741332240LL);
                            arr_37 [6] [i_8] [i_9 - 3] [6] = ((/* implicit */short) 2147483644);
                            var_23 = ((/* implicit */short) ((long long int) 4097507203779777493ULL));
                        }
                        for (unsigned short i_12 = 2; i_12 < 15; i_12 += 4) 
                        {
                            var_24 *= arr_15 [i_8] [(signed char)3] [(signed char)3] [i_8];
                            var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (var_1)))) | (max((((/* implicit */unsigned int) arr_5 [i_7] [i_7] [5LL])), (arr_33 [9LL] [i_8] [i_8] [10LL] [i_10] [i_12])))))) ? (437326716) : (((/* implicit */int) var_8))));
                            var_26 = ((/* implicit */unsigned int) ((_Bool) ((arr_2 [i_7]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)0)))));
                            arr_41 [7U] [i_7] [i_10] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((signed char) -1076977709))), (min((((/* implicit */unsigned long long int) ((int) 331288772U))), (max((4097507203779777493ULL), (var_12)))))));
                        }
                        arr_42 [i_10] [i_10] [i_10] [i_10] = ((4911116277161795176ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)100)))))));
                        arr_43 [i_8] [i_9 + 1] [i_8] = ((/* implicit */unsigned short) ((((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (-1076977708) : (((/* implicit */int) (_Bool)1))))), (((long long int) (short)-31173)))) + (9223372036854775807LL))) << (((max((((/* implicit */int) (_Bool)1)), (var_11))) - (739796575)))));
                        var_27 = ((/* implicit */unsigned int) ((signed char) ((long long int) max(((short)32765), (((/* implicit */short) arr_6 [i_8] [i_8]))))));
                        arr_44 [i_8] [(_Bool)1] [i_10] |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((arr_19 [i_8] [i_10]) ? (var_4) : (((/* implicit */int) var_8))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (2393402378799140583ULL))) : (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)1984)) ? (var_4) : (((/* implicit */int) (signed char)68)))) & (-697953635))))));
                    }
                    /* vectorizable */
                    for (short i_13 = 0; i_13 < 16; i_13 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) (-(841453084U)));
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) var_9))));
                        var_30 = var_9;
                        var_31 = ((/* implicit */_Bool) arr_38 [i_7] [i_9 - 3] [i_7] [i_7]);
                    }
                    for (short i_14 = 0; i_14 < 16; i_14 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) var_4))));
                        var_33 += ((/* implicit */unsigned long long int) var_5);
                        var_34 += ((/* implicit */short) arr_38 [i_14] [i_9] [i_8] [13LL]);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_15 = 2; i_15 < 12; i_15 += 4) 
    {
        for (long long int i_16 = 0; i_16 < 14; i_16 += 1) 
        {
            {
                var_35 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((arr_20 [i_15 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76)))))), (max((arr_30 [i_15 - 1] [i_15 + 2] [i_15 - 2] [i_15 + 1]), (((/* implicit */unsigned int) -419612147))))));
                arr_56 [i_16] = ((/* implicit */long long int) arr_35 [i_15] [i_15 - 1] [5U] [i_16] [i_16] [i_16] [i_16]);
                var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */_Bool) ((((arr_25 [i_15 - 2] [i_16] [i_15 - 2]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))))) & (((/* implicit */long long int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned char) (signed char)-68))))))))) ? (2379671106226510195LL) : (((/* implicit */long long int) max(((~(((/* implicit */int) (unsigned char)204)))), (((int) (unsigned char)204))))))))));
                /* LoopSeq 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) ((_Bool) min((arr_20 [(signed char)15]), (arr_20 [i_15])))))));
                    var_38 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) max((((/* implicit */unsigned char) var_2)), (arr_57 [i_15 + 2] [i_15] [i_15 + 2] [i_15]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)55747)) > (var_6)))), (((unsigned short) var_7))))) : (((int) ((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)9789)))))));
                    var_39 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_15] [(_Bool)1] [i_15] [4U])) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) arr_39 [(unsigned char)6] [i_15] [i_15] [(short)10] [i_17])) ? (((/* implicit */int) (_Bool)1)) : (arr_4 [i_15] [i_15])))))) ? (((/* implicit */int) ((unsigned short) max((arr_27 [i_15] [i_15] [i_15]), (((/* implicit */int) (signed char)-89)))))) : (((/* implicit */int) ((((/* implicit */long long int) -1768329964)) >= (-1135131037373892342LL)))));
                }
                for (unsigned int i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    arr_61 [i_15] [i_16] = ((/* implicit */_Bool) arr_27 [(signed char)8] [(unsigned char)9] [i_18]);
                    arr_62 [i_15] [i_16] [i_15] [2LL] &= ((/* implicit */signed char) -1075024894);
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                var_40 = 1076977708;
                                arr_70 [i_16] [(_Bool)1] [i_18] [(_Bool)1] = ((/* implicit */short) ((unsigned char) 216172782113783808LL));
                                var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) max((((((/* implicit */int) ((unsigned char) (_Bool)1))) % (((/* implicit */int) max((arr_36 [i_18] [i_18]), ((signed char)127)))))), (((/* implicit */int) arr_49 [i_15] [i_15] [i_18] [i_19])))))));
                                var_42 &= ((/* implicit */unsigned int) max((((/* implicit */int) arr_0 [i_16])), (((max((1883800317), (((/* implicit */int) (short)26641)))) << ((((((((_Bool)1) ? (-1883800307) : (((/* implicit */int) (signed char)59)))) + (1883800310))) - (3)))))));
                                var_43 = ((/* implicit */_Bool) (unsigned short)20577);
                            }
                        } 
                    } 
                    var_44 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))) & (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                }
                var_45 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) == (var_12));
            }
        } 
    } 
}
