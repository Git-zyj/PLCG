/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54985
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -5509803455172296103LL)) ? (((/* implicit */long long int) -1617758999)) : (5509803455172296102LL))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) min((var_4), (((/* implicit */unsigned int) arr_1 [i_0 - 2])))))));
        var_12 &= ((/* implicit */unsigned short) (_Bool)0);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] &= (signed char)-27;
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                var_13 *= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 509922911)) ? (arr_3 [i_1]) : (((/* implicit */long long int) -27))))) ? (arr_8 [i_1] [i_2]) : (max((arr_8 [i_1] [i_1]), (-5509803455172296111LL))))));
                var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((0ULL) >> (((5509803455172296111LL) - (5509803455172296106LL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (var_4)))))) / (((/* implicit */unsigned long long int) (-(arr_8 [i_1] [i_2]))))));
                var_15 &= ((/* implicit */_Bool) -5509803455172296111LL);
                arr_13 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) ((signed char) arr_1 [i_1]))) : (((((/* implicit */_Bool) var_2)) ? (arr_9 [i_1] [i_2]) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (arr_3 [i_3])))))));
            }
            for (unsigned short i_4 = 2; i_4 < 10; i_4 += 4) 
            {
                arr_17 [i_1] [i_1] [i_2] [i_1] &= (((+(arr_12 [i_4 - 1] [i_4] [i_4 - 2] [i_4 - 1]))) >> (((/* implicit */int) (unsigned char)0)));
                arr_18 [i_1] [i_1] [i_2] [i_4] = max((((unsigned short) max((-1847437530), (((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) (signed char)-98)))))));
                arr_19 [i_1] [i_1] [i_4] |= ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_4 - 2] [8U] [i_4 - 2] [i_4 - 2])) ^ (((/* implicit */int) arr_10 [i_4] [i_4] [i_4 - 1] [i_4 + 1]))));
            }
            var_16 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_2])) : (var_5)))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_2)))));
            var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) arr_5 [2])) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))) : (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) 2147483647))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)53829)) : (((/* implicit */int) (_Bool)0))))) : (((arr_3 [i_1]) + (arr_3 [i_1])))))));
            var_18 = ((/* implicit */short) (+(((((/* implicit */int) arr_5 [i_2])) & (((/* implicit */int) arr_4 [i_1]))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            arr_22 [i_1] [i_1] [(unsigned short)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 38)) ? (var_4) : (((/* implicit */unsigned int) var_5))))) | (((((/* implicit */long long int) ((/* implicit */int) (signed char)-67))) & (arr_11 [i_5] [i_1] [i_1])))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_1] [i_5] [i_5] [i_5])) / (26)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3207614836U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4049726565U)))) : (var_6)))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 5509803455172296102LL)) ? (((/* implicit */int) (short)18902)) : (((/* implicit */int) (unsigned char)151)))))) : (max((((((var_0) + (2147483647))) >> (((/* implicit */int) arr_4 [i_5])))), (((((/* implicit */int) arr_2 [i_5])) / (((/* implicit */int) var_8)))))))))));
            var_20 = ((/* implicit */int) var_2);
        }
        for (unsigned short i_6 = 1; i_6 < 8; i_6 += 4) 
        {
            arr_26 [(unsigned char)3] [i_1] = ((/* implicit */unsigned short) 5509803455172296134LL);
            arr_27 [i_6] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(arr_20 [i_6]))) >> (((((((/* implicit */_Bool) var_1)) ? (1784831038) : (((/* implicit */int) var_8)))) - (1784831018)))))) ? ((~(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (var_7))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206)))));
        }
        for (unsigned short i_7 = 2; i_7 < 9; i_7 += 4) 
        {
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_7 [i_7 + 1] [i_7 - 1]))));
            var_22 = ((/* implicit */unsigned char) (short)-16384);
            /* LoopSeq 2 */
            for (short i_8 = 1; i_8 < 10; i_8 += 4) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    var_23 = ((((-3552048703287699714LL) ^ (-7018762733969089010LL))) | (((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_8])) ^ (((/* implicit */int) var_2))))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_7 - 1] [i_8 - 1])) ? (((var_9) - (((/* implicit */unsigned int) arr_32 [(signed char)3] [(_Bool)1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_9] [6ULL] [i_7 - 2] [i_1])))));
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 3; i_10 < 8; i_10 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 33)) ? (var_0) : (var_5)))) ? (((/* implicit */int) arr_10 [i_1] [(signed char)5] [i_8] [i_7])) : (((/* implicit */int) arr_15 [i_8 + 1] [i_10 + 3])))))));
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (arr_30 [i_7 - 1] [i_8 + 1] [i_9] [i_7 - 1])));
                        var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) arr_23 [i_1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)86)))))));
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 1) 
                    {
                        arr_40 [i_1] [i_9] [i_7] [(signed char)2] [(short)8] [4] [4LL] = ((/* implicit */signed char) arr_33 [i_7 - 2] [i_7 + 2] [i_7 - 1]);
                        var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-39) : (((/* implicit */int) (unsigned char)163))))) ? (((arr_20 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        var_29 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_7 - 2] [i_7 - 2] [i_7] [i_7] [i_11 - 1])) != (((/* implicit */int) (_Bool)1))));
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (-9223372036854775807LL - 1LL)))));
                    }
                    arr_41 [i_9] [i_8 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_7 - 2] [i_7 - 1])) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) arr_15 [i_1] [i_8]))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    arr_46 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-7315)) | (max((((/* implicit */int) var_3)), (var_1)))));
                    arr_47 [i_1] [i_1] [i_7] [i_8 + 1] [i_8] [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_37 [0] [i_7] [i_7] [i_8 - 1] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_1] [i_1] [i_12] [i_8 - 1] [i_1]))) : (arr_33 [i_1] [i_7] [i_8]))));
                    var_31 &= ((/* implicit */unsigned short) 1778103626140355292ULL);
                    var_32 *= ((/* implicit */unsigned char) var_9);
                }
                /* vectorizable */
                for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (arr_7 [i_7 + 2] [i_7 + 2])));
                    var_34 &= ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) var_6)))));
                }
                /* vectorizable */
                for (short i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    var_35 |= ((((/* implicit */_Bool) arr_29 [i_7 + 2] [i_7 + 2] [i_8 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((12923859810338932407ULL) == (((/* implicit */unsigned long long int) arr_16 [(unsigned char)7] [(unsigned char)7])))))) : (((((/* implicit */_Bool) arr_16 [(unsigned short)10] [i_7 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_1] [i_7] [i_8 + 1]))) : (4294967283U))));
                    arr_54 [i_1] [i_7] [i_7] [i_8 - 1] [i_8] [i_8 - 1] = ((/* implicit */_Bool) (+((+(var_5)))));
                    arr_55 [i_8] [i_8] [i_8] [i_14] [i_14] [i_14] = ((((/* implicit */int) arr_1 [i_7 - 1])) | (((/* implicit */int) (unsigned short)61006)));
                }
                var_36 -= arr_21 [i_7 - 2];
            }
            for (unsigned int i_15 = 1; i_15 < 7; i_15 += 4) 
            {
                var_37 = ((/* implicit */short) ((((/* implicit */unsigned int) (-(var_1)))) - (min((((unsigned int) var_9)), (((/* implicit */unsigned int) (unsigned char)55))))));
                arr_60 [i_1] [i_1] [6U] = ((/* implicit */int) ((((4029700794126450953LL) >= (((/* implicit */long long int) max((2147483647), (((/* implicit */int) (unsigned short)41482))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_9 [i_15 + 1] [i_7 + 1])) == (arr_36 [i_7] [i_7] [i_7] [i_7] [i_7]))))) : (((((/* implicit */_Bool) max((arr_50 [i_1] [i_7] [i_15] [i_1]), (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((unsigned int) 0ULL))) : (var_7)))));
                var_38 += ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)10694)) : (var_0))), (((/* implicit */int) ((((/* implicit */int) (signed char)64)) < (arr_9 [i_1] [i_7])))))), (((/* implicit */int) ((((/* implicit */int) arr_51 [i_1] [i_15 + 1] [i_7 - 2] [i_15] [i_1])) < (((/* implicit */int) arr_51 [i_15] [i_15 + 1] [i_7 - 2] [i_15] [i_15 - 1])))))));
                arr_61 [i_1] [4ULL] [1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((var_0) | (((/* implicit */int) arr_48 [i_15] [i_7] [(_Bool)1] [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_38 [(unsigned short)9] [(unsigned short)9] [i_7])))) : (((((/* implicit */_Bool) var_8)) ? (9299971195111094288ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))))))));
            }
        }
        var_39 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */long long int) 1982528255)) != (((((/* implicit */_Bool) -1982528256)) ? (arr_49 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_1] [i_1] [i_1])))))))), (((long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-3))) : (var_7))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
    {
        arr_64 [i_16 + 1] [i_16 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) 16U)) ? (var_6) : (((/* implicit */unsigned long long int) var_5))));
        arr_65 [i_16] &= ((signed char) ((((/* implicit */_Bool) arr_0 [i_16])) ? (((/* implicit */int) (unsigned short)58536)) : (((/* implicit */int) arr_63 [i_16]))));
        arr_66 [i_16] = (unsigned char)134;
        var_40 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_16 + 1])) ? (((/* implicit */int) arr_1 [i_16 + 1])) : (((/* implicit */int) arr_1 [(unsigned char)3]))));
    }
    for (unsigned int i_17 = 0; i_17 < 19; i_17 += 1) 
    {
        var_41 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_17])) ? (13533274338437168550ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (arr_0 [i_17])));
        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((((/* implicit */_Bool) (unsigned char)157)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (((((/* implicit */unsigned long long int) var_1)) & (var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_0 [i_17]) : (((/* implicit */long long int) var_0)))))))));
        arr_69 [1U] [(short)8] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_17])) ? (var_9) : (var_4)))) : (((((/* implicit */unsigned long long int) 982651170676990949LL)) * (10757634801331808879ULL))))));
        arr_70 [i_17] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 71987225293750272LL)) ? (((/* implicit */int) (unsigned short)17284)) : (((/* implicit */int) var_3))))) || (((var_6) < (((/* implicit */unsigned long long int) var_9)))))))));
    }
}
