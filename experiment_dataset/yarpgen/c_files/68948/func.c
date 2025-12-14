/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68948
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_16 = ((/* implicit */signed char) ((274877644800LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) var_13);
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                arr_11 [i_1] [i_1] [i_2] [15LL] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_9 [i_0] [i_1] [i_2]))))));
                var_17 = ((/* implicit */unsigned short) var_9);
            }
            /* LoopSeq 2 */
            for (unsigned short i_3 = 1; i_3 < 17; i_3 += 2) 
            {
                var_18 *= ((/* implicit */unsigned char) (_Bool)0);
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (arr_7 [11ULL] [i_1] [i_1] [(_Bool)1]) : (((/* implicit */long long int) var_15))));
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_0])))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_18 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */unsigned int) (+(913384126)));
                var_21 = ((/* implicit */unsigned short) ((var_10) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [(unsigned short)12] [i_1] [i_4])))));
                var_22 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_17 [16ULL] [i_0]))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                arr_23 [i_1] [3] [i_1] [i_1] = ((/* implicit */signed char) ((int) (short)1023));
                var_23 = ((/* implicit */unsigned short) (-(arr_14 [(unsigned short)0] [i_1])));
            }
        }
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            /* LoopSeq 3 */
            for (int i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                var_24 = ((/* implicit */unsigned short) var_2);
                var_25 = ((/* implicit */_Bool) var_15);
                var_26 = (_Bool)1;
                var_27 ^= ((/* implicit */short) (_Bool)1);
            }
            for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
                {
                    var_28 ^= ((/* implicit */unsigned long long int) var_2);
                    var_29 = ((/* implicit */short) arr_0 [i_6]);
                    var_30 *= ((/* implicit */long long int) (_Bool)1);
                }
                for (long long int i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                {
                    arr_39 [i_0] [i_6] [i_8] [i_8] = ((/* implicit */unsigned short) ((var_10) * (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10] [i_8] [(_Bool)1] [i_0])))));
                    var_31 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (17592186044400LL)))));
                    arr_40 [i_0] [i_6] [(_Bool)1] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 630650624U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_8] [i_6] [i_0]))) : (2047373811U))) / (((/* implicit */unsigned int) var_15))));
                }
                for (long long int i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
                {
                    var_32 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_36 [i_8] [(signed char)0] [i_11] [i_11] [i_11] [i_6])) : (((/* implicit */int) arr_42 [(unsigned short)8] [i_6] [i_6] [i_6] [i_6]))));
                    arr_44 [i_8] = ((/* implicit */unsigned int) (signed char)90);
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -255614053)))))));
                    arr_45 [i_0] [i_6] [1ULL] [i_8] [i_8] = ((/* implicit */short) (_Bool)1);
                }
                /* LoopSeq 3 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_34 = ((/* implicit */short) arr_4 [i_8] [(signed char)1]);
                    var_35 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!((_Bool)1))))));
                }
                for (unsigned short i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    arr_53 [i_0] [i_0] [i_0] [18ULL] [i_8] = ((/* implicit */unsigned short) arr_16 [2U] [i_8]);
                    arr_54 [(unsigned short)17] [i_8] [(unsigned short)2] [6ULL] = ((/* implicit */unsigned short) var_10);
                    var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [20LL])) && ((_Bool)1)));
                    arr_55 [i_0] [10] [i_8] = ((/* implicit */unsigned int) arr_31 [(unsigned char)11] [i_6] [(unsigned char)0]);
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        arr_60 [i_0] [i_8] [10ULL] [4ULL] = ((/* implicit */long long int) (unsigned short)53410);
                        var_37 ^= ((/* implicit */unsigned short) ((arr_29 [i_0] [(signed char)5] [(signed char)11] [i_13]) ? (((/* implicit */int) arr_29 [(unsigned short)0] [(_Bool)1] [i_8] [i_8])) : (((/* implicit */int) arr_29 [(unsigned short)2] [i_8] [5LL] [i_14]))));
                        arr_61 [i_0] [i_6] [i_8] [i_13] [(signed char)5] = ((/* implicit */unsigned short) ((short) arr_57 [i_0] [14] [i_14]));
                        arr_62 [i_14] [i_8] [(signed char)4] [i_13] [i_8] [i_8] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                        var_38 = ((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_0] [i_6] [i_8] [i_14])) * (((/* implicit */int) arr_29 [i_0] [i_6] [i_13] [17]))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) (~((+(((/* implicit */int) var_1)))))))));
                        var_40 = ((/* implicit */unsigned long long int) var_14);
                        var_41 = (!(((/* implicit */_Bool) arr_15 [i_13] [i_6] [6U])));
                        arr_67 [i_0] [i_6] [i_8] [i_8] [(unsigned char)7] [i_8] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)17958)) ? (((/* implicit */int) arr_4 [i_8] [i_8])) : (-1321888771)))));
                        arr_68 [(_Bool)1] [i_6] [i_8] [i_8] [i_15] [(unsigned char)19] [i_6] = ((/* implicit */short) (unsigned short)50383);
                    }
                }
                for (long long int i_16 = 1; i_16 < 20; i_16 += 1) 
                {
                    var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_69 [18ULL] [i_6] [i_8] [i_8])) / (((/* implicit */int) (unsigned short)53426)))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 0; i_17 < 21; i_17 += 2) 
                    {
                        var_43 = ((/* implicit */_Bool) ((((/* implicit */int) (short)1023)) % (arr_35 [i_16 - 1])));
                        arr_74 [i_0] [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) ((unsigned int) 0ULL));
                        var_44 = ((/* implicit */int) (~(arr_48 [i_16 + 1] [i_16 + 1] [20ULL] [(_Bool)1])));
                        var_45 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_0] [i_0] [i_8] [i_16 - 1]))) + ((+(-1LL)))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        arr_78 [0LL] [i_6] [i_6] [i_8] [(signed char)16] = arr_66 [(unsigned short)4] [i_6] [i_16 + 1] [(unsigned char)8] [(_Bool)1];
                        var_46 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (short)1023)) <= (((/* implicit */int) arr_13 [(unsigned char)9] [i_8] [i_18]))))) - (arr_72 [(signed char)1] [9ULL] [i_16 - 1] [i_16] [i_16 + 1] [i_18])));
                        var_47 = ((/* implicit */signed char) var_14);
                    }
                    var_48 = (i_8 % 2 == zero) ? (((/* implicit */int) ((arr_58 [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16 - 1] [i_8]) >> (((arr_58 [i_16 + 1] [i_16 + 1] [15LL] [i_16 - 1] [i_8]) - (2220399490128611126LL)))))) : (((/* implicit */int) ((((arr_58 [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16 - 1] [i_8]) + (9223372036854775807LL))) >> (((((arr_58 [i_16 + 1] [i_16 + 1] [15LL] [i_16 - 1] [i_8]) - (2220399490128611126LL))) + (6901444738203625363LL))))));
                }
            }
            for (unsigned char i_19 = 0; i_19 < 21; i_19 += 4) 
            {
                arr_82 [18ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)17067))));
                var_49 = ((/* implicit */unsigned char) (+(arr_14 [i_0] [i_19])));
                var_50 *= ((/* implicit */int) arr_80 [i_0] [i_6] [i_19]);
                arr_83 [i_0] [i_0] = ((_Bool) (!(((/* implicit */_Bool) var_13))));
                var_51 *= ((/* implicit */signed char) (unsigned char)170);
            }
            var_52 *= ((/* implicit */unsigned char) var_7);
            var_53 ^= ((/* implicit */long long int) (+((~(((/* implicit */int) (signed char)92))))));
        }
        for (long long int i_20 = 0; i_20 < 21; i_20 += 4) 
        {
            var_54 = ((/* implicit */short) 10LL);
            /* LoopSeq 2 */
            for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
            {
                var_55 = ((/* implicit */int) max((var_55), ((~((-2147483647 - 1))))));
                var_56 *= ((/* implicit */unsigned char) 17451448556060672ULL);
                var_57 *= ((/* implicit */unsigned long long int) arr_48 [i_0] [i_0] [9LL] [(signed char)17]);
            }
            for (int i_22 = 0; i_22 < 21; i_22 += 2) 
            {
                var_58 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8720629593841732701LL)) ? (2160206970U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_20] [i_22])))))) ? (((/* implicit */int) (!((_Bool)0)))) : (arr_35 [i_22])));
                arr_93 [i_0] [i_20] [7U] = ((/* implicit */short) 255614050);
                var_59 = ((/* implicit */long long int) arr_15 [i_0] [i_20] [i_22]);
                var_60 = ((/* implicit */long long int) max((var_60), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_2))) - (((/* implicit */int) (unsigned char)190)))))));
                arr_94 [i_20] [i_22] = ((/* implicit */unsigned char) var_5);
            }
            var_61 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_32 [i_0] [i_20] [i_20] [i_20])));
        }
        var_62 *= ((/* implicit */long long int) (!(arr_24 [i_0] [(unsigned char)9] [i_0])));
        var_63 *= var_9;
        /* LoopSeq 1 */
        for (unsigned char i_23 = 0; i_23 < 21; i_23 += 1) 
        {
            var_64 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_73 [0LL]))));
            arr_97 [9U] [i_23] [i_23] = (+(4294967272U));
        }
    }
    var_65 = ((/* implicit */short) max((var_65), (((/* implicit */short) 7512894166704798523LL))));
    var_66 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65515)) ? (((/* implicit */int) (unsigned short)12126)) : (((/* implicit */int) (unsigned short)12126))));
    var_67 *= ((/* implicit */_Bool) var_15);
}
