/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81632
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
    var_12 = ((/* implicit */unsigned long long int) (signed char)-99);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_13 = ((/* implicit */_Bool) arr_0 [i_0]);
        var_14 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18808))) : (arr_1 [4] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)12611)) || (((/* implicit */_Bool) (short)-12607)))))));
        var_15 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) (+(4144248381U)))) : (arr_1 [i_0] [i_0])))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_2 [(unsigned short)10]))));
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) 1482538669U))));
            var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1])) ? (arr_3 [i_0 - 1] [(signed char)4]) : (((/* implicit */unsigned long long int) var_3))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 3) /* same iter space */
            {
                var_18 |= ((/* implicit */unsigned char) arr_2 [i_1]);
                var_19 += ((/* implicit */unsigned char) arr_8 [i_1]);
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (short)12611))));
            }
            for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_3] [i_0])) : (((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_1]))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0 + 1] [i_0])) <= (((/* implicit */int) var_8))));
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
                {
                    var_23 += ((/* implicit */unsigned long long int) ((unsigned int) var_8));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */_Bool) arr_13 [i_0] [i_0 + 1]);
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_1] [i_3 + 1])) || (((/* implicit */_Bool) (short)12618))));
                        var_26 = ((/* implicit */unsigned short) (~(var_3)));
                    }
                    for (unsigned short i_6 = 2; i_6 < 10; i_6 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_6 - 1])) ? (((((/* implicit */_Bool) (short)12612)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_2 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12621)))));
                        var_28 = arr_0 [i_0];
                        var_29 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) (short)12612)) : ((~(var_10)))));
                        arr_20 [(unsigned short)10] [i_0] = ((/* implicit */_Bool) (signed char)86);
                    }
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (_Bool)1))));
                }
                for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned int) var_0);
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_0 - 1] [i_3 - 2] [i_3 - 2] [i_3])) & (((/* implicit */int) arr_22 [i_0 - 1] [i_3 + 1] [i_3] [i_3 + 1]))));
                        arr_26 [(_Bool)1] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */short) (unsigned short)65533);
                    }
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned short) 1165139869960510346LL);
                        var_34 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_0] [i_0 + 1] [i_3 - 1] [i_7] [i_7])) % ((-(((/* implicit */int) arr_0 [i_7]))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        var_35 = ((-1968874138) ^ (((/* implicit */int) (unsigned short)44940)));
                        arr_34 [i_0] [i_1] [(signed char)4] [i_7] [i_0] = ((/* implicit */short) ((var_8) ? (((/* implicit */int) (short)-20989)) : (((/* implicit */int) var_2))));
                        var_36 *= ((/* implicit */unsigned int) arr_14 [i_7]);
                    }
                    var_37 = ((/* implicit */unsigned char) arr_13 [i_0] [i_0]);
                }
                var_38 += ((/* implicit */unsigned char) arr_31 [(signed char)3] [i_3] [i_1] [i_0] [(signed char)3] [i_0]);
                var_39 = ((/* implicit */unsigned char) arr_17 [i_0 - 1] [i_1] [i_1] [i_0 - 1] [i_3] [i_3 + 1]);
            }
        }
        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) 
        {
            var_40 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 11768717992363548442ULL)) ? (((/* implicit */int) arr_37 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) (short)12597)))));
            arr_39 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_35 [i_11] [i_0])), (max((arr_14 [i_0]), (((/* implicit */long long int) (unsigned char)28))))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13052))) : (((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52467)))));
            var_41 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2812428627U)) && (((/* implicit */_Bool) (unsigned short)44923))))), (min((1589308476U), (((/* implicit */unsigned int) arr_17 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]))))));
            var_42 *= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1])) ? (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */int) var_11)))) : (((474908189) / (((/* implicit */int) var_5))))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_0] [i_0 - 1]))) - (var_6))));
        }
        /* vectorizable */
        for (signed char i_12 = 1; i_12 < 10; i_12 += 2) 
        {
            arr_43 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_12 + 4])) ^ (((/* implicit */int) var_9))));
            var_43 = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [(unsigned short)13] [(unsigned short)13] [i_0] [(unsigned short)13] [i_12] [i_12])) << (((((/* implicit */int) arr_17 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0])) - (12219)))));
        }
        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) 
        {
            var_44 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((_Bool) var_2))), ((unsigned short)17891)));
            var_45 = ((/* implicit */unsigned short) max((((max((1114932064U), (((/* implicit */unsigned int) arr_47 [i_0])))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) arr_41 [i_0] [i_0])) : (((/* implicit */int) arr_25 [i_13] [i_0 - 1]))))))), (((/* implicit */unsigned int) (unsigned short)3843))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 1) 
            {
                var_46 = ((((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0])) > (((/* implicit */int) var_9)));
                /* LoopSeq 1 */
                for (unsigned short i_15 = 0; i_15 < 14; i_15 += 3) 
                {
                    var_47 += ((/* implicit */long long int) 0ULL);
                    var_48 |= ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) var_11)))));
                    var_49 = ((/* implicit */unsigned short) ((short) arr_40 [i_15] [i_14] [i_13]));
                }
            }
        }
        arr_56 [i_0] [i_0] = arr_9 [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (signed char i_16 = 1; i_16 < 21; i_16 += 2) 
    {
        var_50 ^= (+(((/* implicit */int) var_8)));
        var_51 = ((/* implicit */unsigned int) arr_58 [i_16] [i_16]);
        var_52 += ((arr_59 [(unsigned char)22]) ? (arr_58 [i_16 + 2] [i_16 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191))));
    }
    for (signed char i_17 = 0; i_17 < 19; i_17 += 1) 
    {
        var_53 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_9)), (var_3))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) (unsigned char)234)) : (474908189))))))) ? (((/* implicit */unsigned long long int) max((-474908190), (((/* implicit */int) (unsigned char)46))))) : (((unsigned long long int) max((arr_58 [i_17] [i_17]), (((/* implicit */unsigned long long int) var_1)))))));
        /* LoopSeq 4 */
        for (unsigned char i_18 = 0; i_18 < 19; i_18 += 2) 
        {
            var_54 = ((/* implicit */short) min((((/* implicit */unsigned int) (unsigned char)156)), (2812428623U)));
            /* LoopSeq 1 */
            for (unsigned short i_19 = 0; i_19 < 19; i_19 += 3) 
            {
                var_55 = ((/* implicit */int) ((2812428623U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6)))));
                arr_70 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned int) 474908187);
                var_56 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) arr_59 [i_17])), (((-1LL) | (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_17] [i_19])))))))));
                var_57 = ((/* implicit */unsigned long long int) (-(((max((((/* implicit */long long int) var_5)), (arr_57 [i_18]))) * (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_17] [i_18])))))));
            }
        }
        for (unsigned int i_20 = 0; i_20 < 19; i_20 += 3) /* same iter space */
        {
            var_58 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_17] [i_17] [i_17]))) % (((((/* implicit */_Bool) arr_58 [i_17] [i_20])) ? (arr_58 [i_17] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24)))))));
            var_59 = ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_17]))) : (var_6)))));
            var_60 = ((/* implicit */unsigned char) 2602945474U);
        }
        for (unsigned int i_21 = 0; i_21 < 19; i_21 += 3) /* same iter space */
        {
            var_61 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) 2146102261)), (9223372036854775803LL)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((signed char) ((int) var_9))))));
            var_62 = ((/* implicit */short) ((((arr_60 [i_17] [i_21]) || (arr_60 [i_21] [i_17]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) arr_68 [i_17] [i_17] [i_17] [i_17])) : (((/* implicit */int) arr_61 [i_21]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_17] [i_17] [i_17]))) | (1692021832U)))))));
            var_63 += ((/* implicit */unsigned int) arr_62 [4] [4] [4]);
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            var_64 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1482538683U)))) ? (arr_73 [i_17] [i_17]) : (min((arr_73 [i_17] [i_17]), (arr_73 [i_17] [i_17])))));
            var_65 = ((/* implicit */unsigned short) 18446744073709551615ULL);
        }
    }
}
