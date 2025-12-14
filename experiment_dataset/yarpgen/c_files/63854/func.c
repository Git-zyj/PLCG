/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63854
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) - (((((/* implicit */_Bool) 1696329211219084607LL)) ? (13067491545465563230ULL) : (arr_1 [i_0])))));
        arr_4 [i_0] [i_0] = (-(((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
        var_15 = ((/* implicit */short) (-((~(arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 4; i_2 < 12; i_2 += 2) /* same iter space */
        {
            var_16 -= ((/* implicit */long long int) (((-((~(5379252528243988374ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_2 + 1])))) == (min((((/* implicit */unsigned long long int) var_7)), (13067491545465563242ULL)))))))));
            var_17 = ((/* implicit */unsigned short) min(((~(min((arr_6 [i_1]), (arr_1 [i_2 - 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_1]) - (((/* implicit */unsigned long long int) arr_2 [i_2]))))) ? (1696329211219084607LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_2 - 1]))))))));
            var_18 = ((/* implicit */_Bool) (((((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) ((/* implicit */int) (short)32767))))) ? (((/* implicit */int) max(((signed char)120), ((signed char)32)))) : (((((/* implicit */_Bool) (unsigned short)54921)) ? (arr_2 [i_2 - 2]) : (-1631194904)))));
        }
        for (signed char i_3 = 4; i_3 < 12; i_3 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */short) ((((((var_2) >> (((((/* implicit */int) (signed char)-24)) + (83))))) << (((((/* implicit */_Bool) arr_10 [i_1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_1 [i_1]))))) << (((((/* implicit */int) var_10)) - (56691)))));
            var_20 = ((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_3 - 3]))) : (var_13))), (((unsigned long long int) arr_7 [i_1])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
            arr_13 [i_1] = ((/* implicit */_Bool) 9645498761629482215ULL);
            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((17227403059594700908ULL) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_3])) * (((/* implicit */int) (unsigned char)124))))))))));
        }
        arr_15 [i_1] = ((/* implicit */_Bool) ((unsigned short) min((0ULL), (((/* implicit */unsigned long long int) var_9)))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        arr_19 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -1041709268)))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_5)))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_18 [i_4]))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_5])) ? (arr_21 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))));
        arr_22 [i_5] = ((/* implicit */long long int) 1041709276);
        var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)23771))));
    }
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        arr_26 [i_6] = ((/* implicit */short) ((((/* implicit */long long int) 3485002238U)) / (max((((/* implicit */long long int) max((arr_17 [i_6]), ((unsigned char)54)))), (((((/* implicit */_Bool) (unsigned char)64)) ? (2433178511397465658LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-51)))))))));
        var_24 = ((/* implicit */unsigned long long int) var_11);
        var_25 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_7 [i_6]))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_12))))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 1; i_8 < 11; i_8 += 4) 
            {
                var_27 ^= ((/* implicit */unsigned long long int) (-(1696329211219084607LL)));
                /* LoopSeq 4 */
                for (unsigned char i_9 = 1; i_9 < 11; i_9 += 3) 
                {
                    var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) : ((~(var_2)))));
                    arr_35 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) 1125899904745472LL))) % (((/* implicit */int) (unsigned char)228))));
                    arr_36 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)68)) ? (17870283321406128128ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56)))));
                }
                for (unsigned int i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((((/* implicit */_Bool) (unsigned short)65520)) ? (var_1) : (arr_1 [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_8] [i_7] [i_8 + 1]))))))));
                    arr_40 [i_7] [i_10] [i_8 - 1] [i_8] [i_7] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_7] [i_10] [i_8 - 1])) <= (((/* implicit */int) arr_12 [i_7] [i_10] [i_8]))));
                }
                for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) /* same iter space */
                {
                    arr_44 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 2] [i_11] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_6] [i_7]))) ? (((/* implicit */int) ((_Bool) var_8))) : (((/* implicit */int) (!(((/* implicit */_Bool) 9753301314462431265ULL)))))));
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) arr_32 [i_6] [(signed char)10] [i_6] [i_6]))));
                }
                for (unsigned int i_12 = 0; i_12 < 13; i_12 += 1) /* same iter space */
                {
                    var_31 -= ((/* implicit */unsigned int) (unsigned short)65535);
                    var_32 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned long long int) 3086257371U)) <= (arr_21 [i_6]))));
                    arr_47 [i_6] [i_12] [i_8] [i_12] = var_11;
                }
                arr_48 [i_6] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_0 [i_6] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7] [i_8])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6]))))) : (((/* implicit */int) (unsigned short)32)));
            }
            arr_49 [i_7] [i_6] [i_6] = ((/* implicit */signed char) 0U);
            arr_50 [i_6] = ((/* implicit */int) arr_21 [i_6]);
        }
        for (long long int i_13 = 0; i_13 < 13; i_13 += 2) /* same iter space */
        {
            var_33 = ((/* implicit */int) max((var_33), (((((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_6]))))), (((((/* implicit */_Bool) 8081011506509122770LL)) ? (-1246527814) : (((/* implicit */int) var_7)))))) + (2147483647))) << (((((max(((-(((/* implicit */int) arr_43 [i_6] [i_13] [i_6] [i_6])))), (arr_16 [i_6] [i_13]))) + (1980))) - (23)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_15 = 0; i_15 < 13; i_15 += 4) 
                {
                    arr_59 [i_6] [i_14] [i_13] [i_13] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_53 [i_6] [i_6] [i_14] [i_6]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65518)))))) ? (((/* implicit */unsigned long long int) (-(-2117724576)))) : (((arr_53 [i_6] [i_6] [i_14] [i_6]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8)))))));
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)64)), (var_7)))))))));
                    arr_60 [i_14] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) ((short) -1246527814))), (arr_6 [i_14]))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_46 [i_6] [i_13] [i_14] [i_6]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) -1395450208361088174LL)) : (arr_24 [i_6] [i_6])))))));
                }
                arr_61 [i_6] [i_13] [i_14] = ((/* implicit */unsigned long long int) (!((((_Bool)0) && (((/* implicit */_Bool) (unsigned char)113))))));
                arr_62 [i_13] [i_13] [i_14] [i_13] = ((/* implicit */signed char) (((+(var_9))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) < (((((/* implicit */int) (signed char)14)) << (((arr_21 [i_14]) - (13748114488739846353ULL)))))))))));
                /* LoopSeq 2 */
                for (unsigned char i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    var_35 *= ((/* implicit */short) (-(((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_14]))))))));
                    arr_65 [i_6] [i_14] [i_13] [(unsigned short)1] [12ULL] = arr_29 [i_6] [i_6];
                }
                /* vectorizable */
                for (unsigned long long int i_17 = 4; i_17 < 9; i_17 += 2) 
                {
                    var_36 = ((/* implicit */unsigned long long int) ((int) arr_46 [i_17 + 4] [i_17 - 1] [i_17 - 1] [i_17 + 4]));
                    arr_70 [i_14] [(unsigned short)1] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
                }
            }
            for (long long int i_18 = 0; i_18 < 13; i_18 += 3) 
            {
                var_37 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) <= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) -706284899)) : (arr_6 [i_6]))))))) != ((-9223372036854775807LL - 1LL))));
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((144114638320041984ULL), (13252855927731634305ULL)))) && (((/* implicit */_Bool) var_10))));
                /* LoopSeq 1 */
                for (unsigned char i_19 = 3; i_19 < 12; i_19 += 3) 
                {
                    arr_76 [i_6] [i_13] [i_18] |= ((/* implicit */_Bool) (unsigned short)65526);
                    var_39 = ((/* implicit */unsigned int) (_Bool)1);
                    arr_77 [i_19 - 1] |= ((/* implicit */int) ((((/* implicit */unsigned int) max((((/* implicit */int) arr_11 [i_19 - 1] [i_19 + 1])), (-1449512564)))) + (min((0U), (((/* implicit */unsigned int) (signed char)14))))));
                    arr_78 [i_19] [i_18] [i_13] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_18 [i_19 + 1]), (arr_18 [i_19 + 1]))))));
                    var_40 = ((/* implicit */int) max((((((/* implicit */_Bool) 11663003309520563271ULL)) ? (((/* implicit */long long int) 2147483647)) : (0LL))), (((/* implicit */long long int) ((var_13) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65524)) - (((/* implicit */int) (_Bool)1))))))))));
                }
            }
        }
        for (long long int i_20 = 0; i_20 < 13; i_20 += 2) /* same iter space */
        {
            arr_81 [i_20] = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33009))) / (1637473675U)))));
            var_41 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_16 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) 416901505U)) : (18446744073709551615ULL))) & (((((/* implicit */_Bool) var_2)) ? (arr_10 [i_20] [i_20]) : (((/* implicit */unsigned long long int) arr_34 [i_6] [i_6] [i_6] [i_6] [i_20])))))), (min((((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) var_9))))));
        }
        /* vectorizable */
        for (long long int i_21 = 0; i_21 < 13; i_21 += 2) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_33 [i_6] [5] [i_6] [(unsigned short)11]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_21] [i_6]))))))));
            arr_85 [i_6] [i_6] [i_6] &= ((/* implicit */_Bool) arr_18 [i_21]);
            var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (unsigned short)3755))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_6] [i_21] [i_21] [i_6] [i_6] [i_21]))) : (var_9))) : (((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_21] [i_6])) - (((/* implicit */int) arr_67 [i_6] [i_6] [i_6] [i_21] [i_21] [i_21])))))));
        }
        var_44 = ((/* implicit */short) ((var_6) * (((min((18446744073709551608ULL), (((/* implicit */unsigned long long int) arr_30 [i_6] [i_6])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_22 = 3; i_22 < 17; i_22 += 2) 
    {
        for (long long int i_23 = 1; i_23 < 17; i_23 += 1) 
        {
            for (signed char i_24 = 0; i_24 < 19; i_24 += 4) 
            {
                {
                    arr_94 [i_22] [i_22] = ((/* implicit */int) ((((max((arr_21 [i_22 - 2]), (((/* implicit */unsigned long long int) (unsigned short)65535)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)55222))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (max((((/* implicit */unsigned long long int) var_3)), (arr_21 [i_22]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_3))))) : (arr_86 [i_23 + 1] [i_22]))))));
                    var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) var_0))));
                }
            } 
        } 
    } 
}
