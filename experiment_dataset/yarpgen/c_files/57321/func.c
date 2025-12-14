/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57321
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
    var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((13634617330285333062ULL), (13634617330285333080ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 14811910436847104306ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5070813798467587524ULL))))) : (var_6)))) : (((long long int) ((short) var_7)))));
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 803539358))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) ((var_3) >= (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_15))) - (arr_0 [i_0 - 1] [i_0 - 3]))))));
        /* LoopSeq 3 */
        for (short i_1 = 3; i_1 < 16; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                var_22 -= ((/* implicit */unsigned short) ((((-3819136840066753987LL) + (((/* implicit */long long int) -1477216736)))) < (((((/* implicit */_Bool) var_2)) ? (9223372036854775792LL) : (var_7)))));
                var_23 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_6 [i_0])) & (3634833636862447317ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                /* LoopSeq 1 */
                for (short i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((unsigned short) arr_3 [4LL])))));
                    var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) arr_5 [i_1] [i_3])))));
                    arr_9 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */long long int) ((int) (short)22683));
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (+(9223372036854775797LL))))));
                    var_27 = (short)-17993;
                }
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0 - 2] [i_0 - 1] [i_0]))) : (((((/* implicit */_Bool) 9223372036854775797LL)) ? (13634617330285333051ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22293))))))))));
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -3587155029134567125LL)))))));
                    var_30 = ((((/* implicit */_Bool) ((2094200682) | (-2094200709)))) ? (((var_3) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
                }
            }
            var_31 &= (~((((!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))) ? (arr_6 [i_0 - 1]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))));
            var_32 -= ((/* implicit */unsigned short) 13131187023364542221ULL);
        }
        /* vectorizable */
        for (short i_5 = 3; i_5 < 16; i_5 += 4) /* same iter space */
        {
            var_33 = var_18;
            var_34 += ((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) var_13))))));
        }
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            arr_20 [i_0] [i_0] = ((/* implicit */long long int) max((((arr_13 [i_0] [i_6] [i_0 + 1]) | (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) min((-3587155029134567125LL), (((/* implicit */long long int) (short)-18577)))))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                arr_23 [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) -9223372036854775798LL);
                var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)25)), (((var_8) ^ (var_3))))))));
                var_36 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (9223372036854775779LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-30)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_6])) && (((/* implicit */_Bool) var_16))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (1557224538)))))));
                var_37 |= ((/* implicit */long long int) ((min((max((((/* implicit */unsigned long long int) arr_3 [i_6])), (var_14))), (((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_0 - 3])))) == (((((/* implicit */_Bool) arr_17 [i_0] [i_7] [i_7])) ? (max((((/* implicit */unsigned long long int) var_6)), (var_0))) : (((/* implicit */unsigned long long int) ((int) 2094200659)))))));
            }
            var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) var_10)))));
            var_39 = ((/* implicit */signed char) max((var_39), (((signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 4756357838091282902LL))))))))));
            var_40 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_6]))), (((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */unsigned long long int) -1946890395)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6]))) : (arr_14 [i_0] [i_6] [i_6])))))));
        }
    }
    for (unsigned char i_8 = 1; i_8 < 20; i_8 += 2) 
    {
        var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) arr_25 [i_8 + 2]))));
        var_42 -= ((/* implicit */unsigned long long int) max((((unsigned short) ((((/* implicit */_Bool) 2094200676)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)182))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3728148100350163300LL)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((23ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (min((((((/* implicit */_Bool) arr_27 [i_8] [i_9] [i_9])) ? (arr_25 [i_9]) : (((/* implicit */unsigned long long int) 9223372036854775792LL)))), (arr_24 [i_8 + 2] [i_8]))) : (arr_25 [i_9])));
            arr_29 [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((unsigned int) arr_27 [i_8] [i_8] [i_9])), (((/* implicit */unsigned int) min((-2094200682), (((/* implicit */int) (unsigned char)87)))))))) ? ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_8] [i_8] [i_9]))) == (var_9)))))) : (((/* implicit */int) var_5))));
            /* LoopSeq 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    var_44 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) + (var_14)));
                    arr_36 [i_11] [i_9] [i_10] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 13634617330285333067ULL))));
                    /* LoopSeq 3 */
                    for (long long int i_12 = 1; i_12 < 19; i_12 += 1) 
                    {
                        var_45 ^= ((/* implicit */short) arr_25 [i_12]);
                        var_46 += ((/* implicit */long long int) arr_27 [i_12] [i_11] [i_10]);
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((arr_41 [i_13] [i_9] [i_10] [i_11] [i_11]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 + 3]))))))));
                        var_48 ^= ((/* implicit */long long int) (-(arr_41 [i_8] [i_8 + 3] [i_8] [i_8] [i_8])));
                    }
                    for (long long int i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        arr_45 [i_8] [i_9] [i_11] [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_9] [i_11])) - (((/* implicit */int) var_15)))))));
                        var_49 ^= ((/* implicit */unsigned long long int) arr_32 [i_8 + 1] [i_8 + 3]);
                    }
                    var_50 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned short)55468))));
                    var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) ((unsigned char) ((short) (unsigned short)10065))))));
                }
                for (unsigned long long int i_15 = 2; i_15 < 22; i_15 += 3) 
                {
                    var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775787LL)) ? (((/* implicit */int) arr_43 [i_15] [i_9] [i_8])) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))))));
                    var_53 = ((/* implicit */signed char) (~(((unsigned long long int) arr_27 [i_8 + 2] [i_8 + 3] [i_15 - 2]))));
                    var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) ((((/* implicit */_Bool) (~(arr_28 [i_15] [i_8])))) ? (((((/* implicit */_Bool) arr_37 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) ? (min((((/* implicit */unsigned long long int) var_7)), (var_9))) : (((/* implicit */unsigned long long int) min((-8483701332602278119LL), (6746056350482984195LL)))))) : (arr_25 [i_9]))))));
                }
                var_55 = (!((!(((/* implicit */_Bool) arr_42 [i_8] [i_8] [i_8] [i_8] [i_8 + 3] [i_8])))));
                var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) ((unsigned short) (unsigned short)55470)))));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                var_57 = ((/* implicit */int) var_2);
                var_58 ^= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)95)))))));
                var_59 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_25 [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_32 [i_16] [i_8])))))) ? (((((/* implicit */_Bool) -9223372036854775797LL)) ? (((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) -9223372036854775797LL))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_31 [i_9] [i_8]))))))) : (((/* implicit */int) max(((short)-7554), (var_5))))));
                var_60 *= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)87))) ? (arr_34 [i_16] [i_9] [i_9] [i_9] [i_8] [i_8]) : (((/* implicit */int) ((unsigned short) (_Bool)1))))), (((/* implicit */int) max((arr_46 [i_8 - 1] [i_8] [i_8] [i_8]), (arr_46 [i_8] [i_8] [i_8 + 1] [i_8]))))));
                arr_53 [i_8] [i_16] [i_9] [i_16] = ((/* implicit */unsigned long long int) -4022802349576256458LL);
            }
            /* vectorizable */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
            {
                var_61 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_8] [(short)22] [i_8] [i_8] [i_8 + 1] [i_9]))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_8] [i_8]))) : (var_11)))));
                var_62 = ((/* implicit */short) min((var_62), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) * (arr_33 [i_8 + 3]))))));
                arr_57 [i_8] [i_8] [i_8] = ((/* implicit */short) (~(((/* implicit */int) arr_48 [i_9] [i_8 + 1] [i_8] [i_8]))));
                arr_58 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) 18397612872092461644ULL);
            }
        }
        for (int i_18 = 1; i_18 < 20; i_18 += 2) 
        {
            var_63 -= ((/* implicit */unsigned short) max((((short) ((((/* implicit */_Bool) -396726937)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56588))) : (2037719935U)))), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)55465)) ? (((/* implicit */unsigned long long int) var_7)) : (18446744073709551615ULL)))))));
            var_64 &= ((/* implicit */short) max((((((/* implicit */_Bool) arr_54 [i_8] [i_8] [i_8] [i_8 + 1])) ? (((/* implicit */int) arr_56 [i_8] [i_8] [i_8] [i_8 + 2])) : (((/* implicit */int) arr_40 [i_8] [i_8] [i_8] [i_8 + 1] [i_8])))), ((+(((/* implicit */int) arr_60 [i_8 + 2] [i_8] [i_8]))))));
        }
    }
    /* vectorizable */
    for (long long int i_19 = 0; i_19 < 14; i_19 += 1) 
    {
        var_65 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_19]))))) | (arr_26 [i_19])));
        var_66 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_62 [i_19] [4LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_19] [i_19] [i_19] [i_19]))) : (var_14)));
    }
    var_67 = ((/* implicit */signed char) min((var_67), (((/* implicit */signed char) max(((unsigned short)10088), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))) && (((/* implicit */_Bool) max((var_1), (((/* implicit */int) (unsigned short)55475)))))))))))));
    var_68 = ((/* implicit */short) (~(((((/* implicit */int) max(((unsigned short)10077), (((/* implicit */unsigned short) (short)-25591))))) | (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_9)))))))));
}
