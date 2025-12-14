/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93902
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                var_18 = var_13;
                arr_11 [i_0] [i_1] [i_0] &= ((/* implicit */_Bool) (-(arr_3 [i_0])));
                arr_12 [i_0] [3ULL] [i_2] [i_1] = ((/* implicit */long long int) arr_10 [i_0] [i_2]);
            }
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                var_19 += ((/* implicit */long long int) (+((((+(((/* implicit */int) var_12)))) - ((+(((/* implicit */int) (_Bool)1))))))));
                var_20 -= ((/* implicit */long long int) var_5);
            }
            /* LoopSeq 2 */
            for (unsigned char i_4 = 4; i_4 < 15; i_4 += 4) 
            {
                /* LoopSeq 4 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    arr_22 [i_5] [4LL] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)66)) << (((max((((/* implicit */unsigned long long int) var_3)), (arr_5 [i_5] [i_1 + 1]))) - (15029778105762346921ULL))))))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (signed char)-66))) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (signed char)87))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))) : (var_10))))))) : ((~(((/* implicit */int) (unsigned short)993))))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_8 [i_0] [i_0]))));
                    }
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
                    {
                        arr_30 [i_4] [i_1] [i_4] [i_5 - 1] [i_5 - 1] [i_7] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-66)), ((+(((/* implicit */int) (signed char)61))))))) | (arr_3 [(signed char)5])));
                        arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)76))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)-109)) + (123)))));
                        var_24 = ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(signed char)7] [i_4 - 3])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-118))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_5 [i_5 - 1] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_12)))))));
                        arr_32 [i_4] [i_5] [i_4] [i_4] &= ((/* implicit */long long int) var_8);
                    }
                    var_25 |= ((/* implicit */signed char) (+(((/* implicit */int) arr_24 [i_1] [i_1] [i_4] [i_5] [i_5] [i_0]))));
                }
                for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 4) 
                {
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (var_8))))))))))));
                    arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) (-(max((((((/* implicit */int) var_17)) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))));
                    arr_36 [i_0] [(signed char)0] [(signed char)0] [i_4] [i_4 - 3] [i_8] = ((/* implicit */_Bool) max(((~(min((((/* implicit */long long int) var_5)), (arr_2 [i_0]))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_15 [i_4 - 3] [i_8 - 1] [i_1 - 1] [i_8])) + (2147483647))) << ((((-(3428844657012216177ULL))) - (15017899416697335439ULL)))))) ? ((-(((/* implicit */int) arr_19 [i_0] [i_0] [i_4 - 2] [i_8 - 2] [i_4])))) : (((/* implicit */int) var_1)))))));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (+(((max((((/* implicit */long long int) (_Bool)1)), (var_10))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16)))))))))))));
                }
                for (unsigned short i_9 = 3; i_9 < 13; i_9 += 1) 
                {
                    var_29 ^= ((/* implicit */signed char) ((((/* implicit */int) ((arr_33 [i_0] [i_1] [i_1 - 1]) < (((/* implicit */long long int) 4183662188U))))) % (((((/* implicit */int) max((var_13), ((unsigned char)255)))) + (((/* implicit */int) (unsigned short)55147))))));
                    arr_40 [i_4] = ((/* implicit */long long int) (-(((unsigned int) max((var_5), (var_6))))));
                }
                for (long long int i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) arr_27 [i_0] [i_0] [i_1 + 1] [i_4] [i_10] [i_10]))));
                    var_31 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)8)) ? (arr_5 [i_1] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_13)))))) >> (((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_6 [i_0] [i_4])) : (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_10])) ? (((/* implicit */int) (unsigned short)3917)) : (((/* implicit */int) (signed char)42)))))) - (26189)))));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        var_32 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8171)) && (((/* implicit */_Bool) 15017899416697335438ULL)))))));
                        arr_45 [i_0] [(signed char)1] [i_0] [i_10] [i_11] [(signed char)1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)69)))) + (((/* implicit */int) arr_16 [i_4] [i_4] [i_11]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) var_2)))))))) : ((-(((/* implicit */int) (signed char)88))))));
                        var_33 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((min((arr_17 [i_0] [i_4]), (var_1))), (arr_1 [i_1 + 1] [i_4 + 1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_16)))) + (max((((/* implicit */unsigned long long int) arr_38 [i_0] [i_1] [i_4] [i_10] [i_11])), (arr_42 [i_0] [i_0] [i_0] [i_0])))))));
                        arr_46 [i_11] [i_1] [i_4] [i_1] [i_4] = ((/* implicit */signed char) ((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-6666691345272094259LL))) ? (arr_26 [6ULL] [i_4] [(signed char)7] [i_10] [i_4 + 2]) : (0LL))) >> ((((-(((/* implicit */int) ((signed char) arr_6 [i_0] [i_0]))))) + (167)))));
                    }
                }
                var_34 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) arr_37 [i_0] [i_0] [i_0] [i_0])), ((-(0LL))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-7)) & (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
            }
            /* vectorizable */
            for (unsigned short i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                var_35 -= arr_47 [i_0] [i_0] [i_12];
                var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0)))))));
            }
        }
        for (unsigned char i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            arr_52 [i_13] = ((/* implicit */unsigned int) (!((_Bool)1)));
            var_37 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 6666691345272094268LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)21226)))) << (((((/* implicit */int) min((arr_28 [i_0] [i_13] [i_0] [i_13]), (arr_28 [i_0] [i_0] [(_Bool)1] [i_13])))) - (86)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_14 = 0; i_14 < 17; i_14 += 1) 
            {
                var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((signed char) arr_14 [i_0] [i_0] [i_0] [i_0])))));
                var_39 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)57101)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) < (arr_2 [i_13])));
                var_40 = ((/* implicit */_Bool) ((((/* implicit */int) arr_41 [i_0])) % (((/* implicit */int) arr_41 [i_0]))));
                /* LoopSeq 2 */
                for (long long int i_15 = 4; i_15 < 16; i_15 += 2) 
                {
                    var_41 = ((signed char) arr_0 [i_13] [i_0]);
                    var_42 = ((/* implicit */signed char) arr_42 [i_0] [i_13] [i_13] [i_13]);
                    var_43 *= ((2680985241U) << (((((/* implicit */_Bool) (unsigned short)57365)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-77)))));
                    var_44 = ((/* implicit */unsigned char) min((var_44), (var_13)));
                }
                for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    arr_61 [i_0] [i_0] [i_13] [(unsigned char)8] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) var_13)) != (((/* implicit */int) arr_25 [i_16] [i_14] [i_13] [i_0] [i_0])))));
                    /* LoopSeq 2 */
                    for (long long int i_17 = 1; i_17 < 16; i_17 += 4) 
                    {
                        arr_65 [i_0] [i_14] [i_14] [i_13] [i_17 + 1] [i_14] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                        var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) ((arr_42 [i_16] [i_16] [i_16] [i_16]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                    }
                    for (long long int i_18 = 0; i_18 < 17; i_18 += 2) 
                    {
                        var_46 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
                        var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((long long int) (unsigned short)30)))));
                    }
                    arr_70 [i_0] [(signed char)12] [i_16] &= ((/* implicit */signed char) arr_24 [i_0] [i_0] [(unsigned char)2] [i_14] [i_16] [i_0]);
                }
            }
            var_48 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_62 [i_0] [i_13] [i_13])) != (((/* implicit */int) arr_62 [i_0] [i_0] [i_0]))))) == (((/* implicit */int) min((var_5), ((unsigned short)43))))));
        }
        for (unsigned short i_19 = 3; i_19 < 16; i_19 += 1) 
        {
            arr_73 [i_19] = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_19] [(signed char)12] [(signed char)12])) : (((/* implicit */int) (unsigned char)16))))) ? (((/* implicit */int) arr_19 [i_0] [i_19] [i_0] [i_0] [i_19])) : ((+(((/* implicit */int) var_3))))))) & (-9177913770618678424LL));
            var_49 = ((/* implicit */_Bool) min((var_49), (min(((((+(((/* implicit */int) arr_58 [i_19] [i_19 - 3] [i_19 + 1])))) <= (((/* implicit */int) (signed char)44)))), (var_14)))));
        }
        var_50 -= ((/* implicit */_Bool) (+(((/* implicit */int) var_13))));
    }
    var_51 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) == (min((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)0)), (var_5)))), ((+(((/* implicit */int) var_6))))))));
}
