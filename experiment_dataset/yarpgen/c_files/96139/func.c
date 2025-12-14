/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96139
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (+((+(-1LL))))))));
        var_12 = ((/* implicit */unsigned char) (-(4294967295U)));
        arr_4 [4ULL] [i_0 + 1] &= ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))));
        var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [(_Bool)1] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_1))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        arr_12 [3U] [(unsigned char)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(15250956690768153244ULL)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_1)) ? (-1LL) : (-1LL))) : (((/* implicit */long long int) var_3))));
        arr_13 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-24)), (arr_0 [i_2 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)53), (((/* implicit */unsigned char) (signed char)-24)))))) : (((((/* implicit */_Bool) (unsigned short)39806)) ? (1439445835823071283ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        var_15 = ((/* implicit */unsigned char) (_Bool)1);
        var_16 = ((/* implicit */long long int) ((min((((unsigned long long int) 3717114021174550302ULL)), (((/* implicit */unsigned long long int) var_4)))) << (((((/* implicit */int) var_8)) - (38536)))));
    }
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_17 [i_3])) ? (((/* implicit */long long int) var_1)) : (-9223372036854775789LL))) * (((/* implicit */long long int) -4)))) + (((/* implicit */long long int) var_1))));
        arr_18 [(_Bool)1] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) << (((/* implicit */int) (signed char)18))))), (var_4)));
    }
    for (signed char i_4 = 2; i_4 < 21; i_4 += 4) 
    {
        var_18 = ((/* implicit */_Bool) var_9);
        var_19 = ((/* implicit */long long int) max((((var_5) + ((+(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((_Bool) max(((_Bool)1), ((_Bool)1)))))));
    }
    /* LoopSeq 2 */
    for (signed char i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
    {
        var_20 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_9)));
        var_21 &= ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)4095)), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)12758))))) ? (((/* implicit */long long int) var_3)) : (((-9LL) + (((/* implicit */long long int) var_5))))))));
        var_22 &= (signed char)67;
        var_23 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_21 [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (arr_22 [i_5] [i_5])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_22 [i_5] [i_5])) : (var_9)))));
    }
    for (signed char i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
    {
        var_24 -= ((/* implicit */unsigned int) arr_23 [i_6]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            arr_29 [i_6] [i_7] [i_7] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)108)) == (((/* implicit */int) (unsigned char)184)))))));
            /* LoopSeq 4 */
            for (unsigned char i_8 = 1; i_8 < 21; i_8 += 1) 
            {
                arr_33 [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) var_7)))) : ((+(((/* implicit */int) (signed char)19))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        arr_40 [i_8] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((536767201) / (((/* implicit */int) var_0))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_39 [i_6] [i_9] [i_10]))));
                        var_26 = ((/* implicit */_Bool) ((arr_27 [i_8 - 1] [(unsigned char)9] [i_9 + 1]) ? (((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) var_7)))))));
                        var_27 = (!((_Bool)1));
                        var_28 = ((((long long int) (signed char)-68)) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)185))));
                        arr_41 [i_10] [i_8] [i_6] [i_8] [i_6] = (-(var_3));
                    }
                }
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7]))) > (1457168079U)));
                var_30 *= ((/* implicit */unsigned long long int) ((_Bool) -5878062617571010345LL));
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    arr_44 [i_6] [i_7] [i_8] [i_11] [i_8] = ((/* implicit */unsigned char) ((unsigned short) -5878062617571010345LL));
                    var_31 = ((/* implicit */_Bool) 1439445835823071283ULL);
                    arr_45 [i_8] [i_7] [i_8] [i_11] = (unsigned char)143;
                }
            }
            for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    var_32 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 17007298237886480340ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))) : (1133805779U)));
                    arr_52 [i_6] [i_12] [i_12] [i_12] [(unsigned char)11] = ((var_9) - (((/* implicit */unsigned long long int) var_5)));
                }
                for (unsigned int i_14 = 2; i_14 < 23; i_14 += 2) 
                {
                    arr_55 [i_7] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((var_2) - (7614758916642268987LL)))))) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (_Bool)1))));
                    var_33 -= ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((int) var_7)))));
                    var_35 = ((/* implicit */signed char) (~(805543544U)));
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 0; i_16 < 24; i_16 += 4) 
                    {
                        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) (((~(((/* implicit */int) (signed char)15)))) == (((/* implicit */int) var_6)))))));
                        arr_61 [(unsigned char)22] [i_7] [(unsigned char)22] [(unsigned char)22] [i_6] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_46 [i_6] [i_6] [i_6] [i_6])) == (((/* implicit */int) ((((/* implicit */long long int) 3U)) > (var_2))))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned char) 1006528443U);
                        var_38 = ((/* implicit */signed char) (_Bool)1);
                    }
                }
                for (unsigned char i_18 = 2; i_18 < 22; i_18 += 3) 
                {
                    var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))));
                    /* LoopSeq 2 */
                    for (signed char i_19 = 2; i_19 < 22; i_19 += 2) 
                    {
                        var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) var_2))));
                        arr_69 [i_19] [i_19] [i_6] |= ((/* implicit */_Bool) ((var_2) / ((~(-4977136003565769848LL)))));
                        var_41 = arr_31 [i_6] [20LL] [i_6];
                    }
                    for (unsigned long long int i_20 = 3; i_20 < 22; i_20 += 4) 
                    {
                        var_42 &= ((/* implicit */_Bool) ((long long int) (unsigned char)132));
                        arr_73 [i_7] [i_12] [i_18] [i_20] = ((/* implicit */int) 1133805762U);
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43))) ^ (var_1)));
                    }
                    var_44 += ((/* implicit */_Bool) arr_47 [i_6]);
                    var_45 += ((/* implicit */_Bool) ((unsigned char) arr_64 [i_18] [i_7] [i_18] [i_18 + 2] [i_7]));
                }
                var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
            }
            for (unsigned int i_21 = 1; i_21 < 23; i_21 += 4) /* same iter space */
            {
                var_47 = ((/* implicit */int) min((var_47), (arr_51 [i_7] [i_7] [(unsigned char)14] [i_21])));
                var_48 = ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
            }
            for (unsigned int i_22 = 1; i_22 < 23; i_22 += 4) /* same iter space */
            {
                var_49 &= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-22)) + ((~(((/* implicit */int) (signed char)90))))));
                arr_79 [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3778695588U)));
            }
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            var_50 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100)))));
            /* LoopSeq 1 */
            for (int i_24 = 0; i_24 < 24; i_24 += 2) 
            {
                arr_84 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (signed char)127);
                var_51 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) 113078053U)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (5699429090523059630LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_6] [i_23] [i_6])))));
                var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) (~(9223372036854775805LL))))));
            }
        }
    }
}
