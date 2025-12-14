/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83167
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
    var_15 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) ^ (var_4)))) ? (((((/* implicit */_Bool) (short)-31887)) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (2763985765U))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    var_16 -= ((/* implicit */signed char) 245760U);
                    var_17 = ((/* implicit */unsigned char) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - (arr_2 [i_0] [i_0]))));
                    arr_8 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_2] [i_3])) + (((/* implicit */int) (_Bool)1))))));
                    var_18 = ((/* implicit */_Bool) arr_1 [i_1]);
                }
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) (unsigned short)65534)))) : ((-(((/* implicit */int) arr_4 [i_2] [i_2] [i_0])))))))));
                        arr_14 [i_5 + 1] [i_2] [i_1] [i_0] = ((/* implicit */short) (((((+(((/* implicit */int) arr_0 [i_0])))) + (2147483647))) << (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_0])) : (((/* implicit */int) (unsigned short)4)))) - (75)))));
                    }
                    for (long long int i_6 = 1; i_6 < 16; i_6 += 4) /* same iter space */
                    {
                        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_11)) : (7411897049439178267ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-43))))));
                        arr_17 [i_0] &= ((/* implicit */unsigned short) ((unsigned long long int) arr_9 [i_4 + 1] [i_2] [i_2] [i_6 + 1] [i_6]));
                    }
                    for (long long int i_7 = 1; i_7 < 16; i_7 += 4) /* same iter space */
                    {
                        arr_20 [i_4 + 1] [i_4 + 1] [i_4] [i_4] [(_Bool)1] [i_4] [i_4 + 1] = arr_10 [i_0] [i_1] [i_4] [i_7];
                        arr_21 [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(arr_19 [i_0] [i_1] [i_1] [i_7 - 1] [i_7 - 1])));
                    }
                    arr_22 [i_4] [i_2] [i_1] [i_0] |= ((/* implicit */signed char) (((((_Bool)1) ? (12392922852402510270ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)0]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65530))))) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) arr_15 [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4])))))));
                }
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_1] [i_0])) >= (((/* implicit */int) (signed char)116))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        {
                            arr_28 [i_0] [i_0] [i_1] [(short)9] [i_2] [i_8] [i_1] = ((/* implicit */short) (unsigned short)12);
                            var_23 = ((/* implicit */short) arr_16 [i_9] [i_2] [i_1] [i_0]);
                        }
                    } 
                } 
            }
            for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                arr_31 [i_10] [i_10] [(short)7] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) arr_3 [i_10]))));
                /* LoopSeq 2 */
                for (long long int i_11 = 1; i_11 < 16; i_11 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_12 = 4; i_12 < 15; i_12 += 2) 
                    {
                        var_24 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-30463))) != (((arr_2 [i_10] [i_12]) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_11 + 1])))))));
                        arr_39 [i_0] [i_1] [(_Bool)1] [i_10] [i_11] [i_12] [i_12] = ((/* implicit */short) ((arr_25 [i_0] [i_1] [10LL] [i_11] [i_12 - 4]) >= (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                    }
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        arr_42 [i_13] [i_11] [i_13] [i_10] [i_13] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_0 [i_0])))) && (((/* implicit */_Bool) arr_32 [i_11] [i_10] [i_0]))));
                        arr_43 [i_1] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-24725)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_26 [i_0] [i_0])) : (((/* implicit */int) ((signed char) var_6)))));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) arr_16 [i_0] [i_10] [i_11] [i_13]))));
                        arr_44 [i_13] [i_11] [i_10] [i_1] [i_13] = ((/* implicit */short) (signed char)(-127 - 1));
                    }
                    arr_45 [i_0] = (~(arr_40 [i_11 - 1] [i_11 - 1] [i_11] [i_11] [i_11]));
                    arr_46 [i_1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_11 + 1] [(short)7] [i_11] [i_11 - 1])) / (((/* implicit */int) arr_11 [i_11 + 1] [i_11 + 1] [i_11] [i_11 - 1]))));
                    arr_47 [i_0] [i_0] [i_0] [i_11] [i_11] [i_11] &= ((/* implicit */short) ((((/* implicit */int) arr_35 [i_11 + 2] [i_11 + 2] [i_11 + 1] [i_11 - 1] [i_11 - 1])) >= (((((/* implicit */int) arr_35 [i_11] [i_1] [i_1] [i_1] [i_1])) - (((/* implicit */int) arr_38 [i_10] [i_10] [i_1] [i_1] [i_1] [i_0] [i_0]))))));
                    arr_48 [i_0] [i_1] [i_1] [i_0] [i_11] = ((/* implicit */long long int) ((short) arr_27 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11 + 2] [i_0]));
                }
                for (long long int i_14 = 1; i_14 < 16; i_14 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_37 [i_0] [i_1] [i_1] [i_10] [i_1]))))) ^ (((arr_1 [i_10]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))));
                    var_27 = ((/* implicit */short) ((((/* implicit */int) arr_30 [i_14 + 2])) & (((/* implicit */int) var_1))));
                }
                arr_51 [i_0] [8U] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) + (18)))));
            }
            for (short i_15 = 3; i_15 < 17; i_15 += 4) 
            {
                arr_54 [i_0] [i_1] [i_15] = (short)-32764;
                var_28 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (short)3))) ^ (((/* implicit */int) (_Bool)1))));
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_15 [i_0] [i_0] [i_1] [i_1] [i_15] [12LL] [i_0]) ? (1554116849U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) 1125865547104256LL)) ? (((/* implicit */int) (unsigned short)65509)) : (((/* implicit */int) arr_30 [i_0])))) : (((/* implicit */int) (short)15919))));
                arr_55 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]);
            }
            /* LoopNest 2 */
            for (unsigned int i_16 = 2; i_16 < 16; i_16 += 4) 
            {
                for (short i_17 = 1; i_17 < 17; i_17 += 3) 
                {
                    {
                        arr_60 [i_17] [i_16] [i_0] [i_0] = ((/* implicit */_Bool) (((~(3311949811U))) ^ (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-113)))))));
                        var_30 = ((((/* implicit */_Bool) (+(0U)))) || (((/* implicit */_Bool) arr_33 [i_1])));
                        var_31 = ((/* implicit */unsigned char) ((signed char) ((1229847292458445166ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_16] [i_17] [i_0] [i_1] [i_17]))))));
                    }
                } 
            } 
        }
        for (unsigned char i_18 = 0; i_18 < 18; i_18 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_19 = 1; i_19 < 17; i_19 += 3) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        var_32 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)1))));
                        var_33 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)-7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (arr_10 [i_0] [i_18] [i_19] [i_20])));
                        var_34 ^= ((/* implicit */short) ((((/* implicit */int) arr_62 [i_0] [i_18] [i_18])) << ((((~(((/* implicit */int) (short)16609)))) + (16632)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_21 = 0; i_21 < 18; i_21 += 1) 
            {
                for (unsigned char i_22 = 1; i_22 < 17; i_22 += 4) 
                {
                    {
                        arr_75 [i_0] [i_18] [i_21] [i_22] [i_18] [i_18] = ((/* implicit */short) ((arr_72 [i_0] [i_18] [16U] [i_21] [i_22]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_19 [i_22] [i_22 - 1] [i_22 + 1] [i_22] [i_22]))));
                        arr_76 [i_0] [i_18] [i_18] [i_21] [i_21] [i_22] = ((/* implicit */short) arr_11 [i_22 + 1] [i_22 - 1] [i_22 + 1] [i_22]);
                        arr_77 [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */int) (short)24724)) == (((/* implicit */int) (_Bool)1))));
                        arr_78 [(short)6] [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_34 [i_0] [i_18] [8U] [i_22] [i_18] [i_22]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((arr_70 [i_0] [i_0] [(short)17]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_21] [i_22])))))) : ((((_Bool)1) ? (((/* implicit */int) arr_30 [i_22])) : (((/* implicit */int) (short)24725))))));
                    }
                } 
            } 
            arr_79 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_0] [i_18] [i_18] [i_18] [i_18])) ? (11034847024270373371ULL) : (((/* implicit */unsigned long long int) arr_34 [i_0] [i_18] [i_18] [i_18] [i_0] [i_18]))))) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_18] [i_18])) : (((/* implicit */int) arr_74 [i_18] [(short)12] [i_0] [i_0]))));
            var_35 = ((/* implicit */signed char) (~(3699520738823765209ULL)));
        }
        for (unsigned char i_23 = 0; i_23 < 18; i_23 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_24 = 2; i_24 < 16; i_24 += 3) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    {
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) (short)24724))));
                        var_37 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_38 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24 + 1] [i_25]))));
                        arr_89 [i_25] [i_24] [i_23] [i_23] [i_23] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) % (((/* implicit */int) ((_Bool) arr_87 [i_0] [i_23] [i_24] [i_25])))));
                        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_57 [i_0] [i_0] [i_24] [i_24]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_73 [(unsigned char)17] [(unsigned char)17] [i_24 + 2] [i_25])) : (((/* implicit */int) arr_37 [i_0] [i_0] [i_23] [i_24] [i_23])))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_26 = 0; i_26 < 18; i_26 += 3) 
            {
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    {
                        var_39 = ((/* implicit */unsigned int) arr_57 [i_0] [i_0] [i_0] [i_0]);
                        var_40 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_16 [i_0] [i_23] [i_26] [i_27]))) == ((~(((/* implicit */int) (_Bool)1))))));
                        var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_27] [i_23] [i_26])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)0))));
                    }
                } 
            } 
            var_42 = ((/* implicit */unsigned long long int) ((arr_50 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]) ? (((/* implicit */int) arr_13 [i_23] [(signed char)11])) : (((/* implicit */int) arr_50 [i_0] [i_0] [i_23] [i_23] [i_23] [i_23]))));
        }
        var_43 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (var_0)))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))) : (350816449U))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_94 [i_0])) + (2147483647))) << (((((/* implicit */int) arr_93 [i_0] [i_0])) - (234))))))));
        var_44 = ((/* implicit */signed char) ((((_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_4))))));
    }
}
