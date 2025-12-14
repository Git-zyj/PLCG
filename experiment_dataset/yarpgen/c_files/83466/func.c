/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83466
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
    var_17 = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((var_9) - (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (unsigned char)247)))))))) : (min((((/* implicit */unsigned long long int) (signed char)101)), (min((2188793881302402024ULL), (8630410804465906202ULL)))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) (signed char)-103);
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) << (((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [4LL]))) : (var_11)))) ? (-260594207) : (arr_1 [i_0]))) + (260594227))) - (12)))));
        arr_2 [i_0] = ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */unsigned long long int) 260594203)) : (8331864506211607745ULL))), (((((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */unsigned long long int) 1886670134U)) : (16257950192407149591ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)10])))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-42))) % (var_14)))))) < ((-(((16257950192407149620ULL) & (var_10)))))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [(unsigned short)12] = ((/* implicit */unsigned short) arr_8 [i_1]);
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_0 [i_2])))))))));
        }
        for (int i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 - 1])) ? (((/* implicit */int) arr_7 [i_3] [i_3 + 2] [i_3])) : (var_2)))) ? (((/* implicit */unsigned int) 1011148060)) : (((arr_7 [i_3 - 1] [i_3 - 1] [i_3]) ? (arr_13 [i_3 + 2] [(unsigned char)3]) : (arr_13 [i_3 + 1] [i_3 + 1])))));
            var_23 = ((/* implicit */int) (+(((unsigned int) ((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) 2408297161U)))))));
            var_24 |= ((/* implicit */long long int) var_4);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            arr_16 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_9 [i_4])) : (((/* implicit */int) arr_9 [i_4]))));
            arr_17 [i_4] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1]))) / (1235892101047912758LL)));
        }
    }
    /* vectorizable */
    for (unsigned short i_5 = 3; i_5 < 16; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_6 = 1; i_6 < 17; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 1) 
                {
                    {
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) -1235892101047912764LL)))))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_5 - 2] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_8 + 1]))) * (2408297161U)));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_5 - 2])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (-1LL)))) : (((((/* implicit */_Bool) -732521561)) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) arr_28 [i_5 + 1] [i_5] [i_5] [i_5] [i_5 + 1]))))));
        arr_31 [i_5] = arr_28 [i_5] [i_5 - 1] [i_5] [i_5] [i_5];
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))) : (2408297161U)));
        var_29 += ((/* implicit */unsigned short) (~((~(1886670134U)))));
    }
    for (short i_9 = 0; i_9 < 21; i_9 += 2) 
    {
        arr_34 [i_9] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [10U])) ? (((/* implicit */unsigned long long int) 2408297152U)) : (var_10)))) ? ((-(2408297150U))) : (max((1886670135U), (var_6))))));
        /* LoopSeq 4 */
        for (int i_10 = 1; i_10 < 20; i_10 += 1) 
        {
            arr_39 [8LL] [i_10] [i_10 + 1] = ((/* implicit */long long int) (((-(((var_13) ? (var_8) : (((/* implicit */int) (signed char)63)))))) >= (((/* implicit */int) ((_Bool) var_12)))));
            var_30 *= ((/* implicit */signed char) 1886670110U);
            arr_40 [i_9] [i_10] [i_10] = arr_35 [i_9];
        }
        for (long long int i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            var_31 = ((/* implicit */long long int) var_11);
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (int i_13 = 2; i_13 < 20; i_13 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned long long int) (unsigned short)4838);
                        var_33 = ((/* implicit */long long int) var_13);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */int) arr_49 [1ULL] [i_14] [i_14]);
            var_35 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)253)) < (((/* implicit */int) arr_36 [i_9] [17ULL] [i_9]))));
            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) 6695197013890977374LL)) || (((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (((/* implicit */int) arr_42 [i_9] [i_14])))))));
            var_37 = ((/* implicit */unsigned int) 16257950192407149599ULL);
            arr_52 [i_9] = ((((/* implicit */_Bool) 2408297161U)) ? (3002444114988716519ULL) : (((/* implicit */unsigned long long int) 2147483136LL)));
        }
        for (unsigned short i_15 = 0; i_15 < 21; i_15 += 1) /* same iter space */
        {
            var_38 += ((/* implicit */_Bool) var_10);
            arr_56 [i_9] [i_9] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) 1583336120U)) && (((/* implicit */_Bool) (unsigned short)4838)))))))) : ((+(arr_48 [i_9] [i_15] [i_9] [i_15])))));
            var_39 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (16257950192407149591ULL)))) ? (2408297198U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)44710)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                arr_60 [i_9] = ((((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_9] [i_15] [i_9] [i_16])) || (((/* implicit */_Bool) arr_54 [i_9] [i_9]))))) - (((((/* implicit */_Bool) 2408297175U)) ? (((/* implicit */int) (unsigned short)52354)) : (((/* implicit */int) var_16)))));
                /* LoopSeq 3 */
                for (unsigned int i_17 = 2; i_17 < 19; i_17 += 4) 
                {
                    arr_65 [i_9] [i_9] [i_16] [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)33))) | (((((/* implicit */_Bool) arr_47 [i_9] [i_15] [i_16] [i_17 - 1])) ? (2423223149310412672ULL) : (((/* implicit */unsigned long long int) var_2))))));
                    var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_17 - 1] [i_17 + 1] [i_17 + 2] [i_17 + 2])))));
                    var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_57 [i_17 - 2] [i_9])) ? (arr_57 [i_9] [i_16]) : (arr_57 [i_17 - 2] [i_17 - 2]))))));
                }
                for (unsigned long long int i_18 = 1; i_18 < 19; i_18 += 3) 
                {
                    var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) (_Bool)1))));
                    arr_69 [i_18] [i_18] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)35045)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-2147483127LL)));
                    var_43 = ((/* implicit */int) 1740688226U);
                }
                for (unsigned long long int i_19 = 2; i_19 < 19; i_19 += 4) 
                {
                    var_44 *= ((/* implicit */unsigned int) ((((1770391314) >= (((/* implicit */int) (signed char)86)))) ? (((((/* implicit */_Bool) 2850440626U)) ? (14438271461832436597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) arr_37 [i_9] [i_15] [i_16]))));
                    var_45 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) var_12)))));
                    var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) 4294967295U)) ^ (2147483136LL)))) ? (3167210066U) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (var_11)))));
                    var_47 = (_Bool)1;
                }
            }
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_20 = 3; i_20 < 9; i_20 += 3) 
    {
        var_48 = ((/* implicit */int) var_12);
        var_49 ^= ((/* implicit */long long int) ((var_13) || (((/* implicit */_Bool) (short)1))));
        /* LoopNest 3 */
        for (unsigned char i_21 = 4; i_21 < 7; i_21 += 1) 
        {
            for (signed char i_22 = 4; i_22 < 8; i_22 += 2) 
            {
                for (int i_23 = 1; i_23 < 10; i_23 += 4) 
                {
                    {
                        var_50 = ((/* implicit */int) -7413783362426263194LL);
                        var_51 = ((/* implicit */unsigned long long int) arr_76 [i_23 + 1] [i_22 + 2]);
                        var_52 = ((((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-34))))) | (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-37))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_24 = 0; i_24 < 25; i_24 += 3) 
    {
        arr_84 [(_Bool)1] [i_24] = ((/* implicit */unsigned long long int) 2711631168U);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_25 = 0; i_25 < 25; i_25 += 2) 
        {
            var_53 = ((/* implicit */unsigned int) ((signed char) (_Bool)1));
            arr_88 [i_24] [i_24] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)33)) : (arr_85 [(unsigned short)6] [i_25])))) == (arr_87 [i_24] [i_24] [i_24])));
        }
        arr_89 [i_24] [(unsigned short)14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_85 [i_24] [21LL]))) ? (((((/* implicit */_Bool) -1641070179)) ? (-2147483137LL) : (((/* implicit */long long int) 1373153446U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4008472611877115003ULL)) ? (arr_87 [i_24] [i_24] [i_24]) : (arr_87 [i_24] [i_24] [i_24]))))));
    }
}
