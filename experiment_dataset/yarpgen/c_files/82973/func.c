/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82973
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_21 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)10709)) : (((/* implicit */int) arr_4 [i_1] [(short)10])))))))));
            var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_1] [16U] [i_0]))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                var_23 = ((/* implicit */short) 3747565000U);
                /* LoopSeq 2 */
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_2 [17ULL] [17ULL] [i_1])) - (min((((((/* implicit */int) arr_10 [i_0] [i_2] [i_2])) / (((/* implicit */int) arr_6 [i_1] [i_2] [i_3])))), (((/* implicit */int) ((short) var_15)))))));
                    var_24 -= ((/* implicit */signed char) var_4);
                    var_25 = arr_1 [i_1];
                    var_26 = ((/* implicit */unsigned short) (unsigned char)117);
                }
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    arr_16 [19U] [i_2] = (+(((/* implicit */int) (unsigned char)169)));
                    arr_17 [i_0] [i_2] [i_0] = ((/* implicit */short) (unsigned char)108);
                    var_27 = ((/* implicit */signed char) min((var_10), (((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_15 [i_0]) != (((/* implicit */unsigned long long int) 3785406317U))))))))));
                    var_28 ^= max((((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_13 [i_2] [i_4])))), (((/* implicit */int) max((arr_0 [(signed char)9]), (((/* implicit */short) var_16))))));
                }
            }
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                var_29 += ((/* implicit */unsigned short) 33554430U);
                var_30 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (short)22811))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0]))) > (arr_19 [i_5] [i_1])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_17)))))), (((/* implicit */int) arr_4 [(short)2] [i_1]))));
                var_31 = ((/* implicit */_Bool) ((unsigned long long int) (-(18446744073709551615ULL))));
                var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_7 [i_0] [i_0] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-812)))))) ? (((((/* implicit */int) arr_18 [i_1] [i_5] [i_5])) | (((/* implicit */int) var_19)))) : (((/* implicit */int) arr_13 [i_1] [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_5])) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1895644041U))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_5] [i_5])) ? (arr_19 [i_5] [(unsigned short)14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [i_5] [6ULL]))))))) : (((((/* implicit */_Bool) 511ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((arr_19 [i_5] [i_1]), (((/* implicit */unsigned int) (signed char)50)))))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                for (unsigned int i_7 = 1; i_7 < 19; i_7 += 3) 
                {
                    {
                        var_33 = ((/* implicit */unsigned char) arr_7 [i_7] [(unsigned char)17] [(unsigned char)17]);
                        var_34 = arr_1 [i_0];
                    }
                } 
            } 
        }
        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((short)-16864), (((/* implicit */short) (unsigned char)30)))))))) && (((/* implicit */_Bool) arr_5 [i_0]))));
        var_36 = 18446744073709551104ULL;
        var_37 = ((/* implicit */_Bool) ((unsigned long long int) arr_19 [0U] [i_0]));
    }
    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
    {
        arr_28 [i_8] = ((/* implicit */unsigned int) ((signed char) (~(10356858623043113712ULL))));
        arr_29 [i_8] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63))) : (arr_15 [i_8])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)40)) <= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) == (arr_7 [i_8] [(_Bool)1] [i_8]))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-960)), (arr_5 [i_8])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_8] [i_8] [i_8]))) : (((unsigned long long int) var_15))))));
    }
    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_10 = 2; i_10 < 18; i_10 += 3) 
        {
            var_38 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) (-(min((var_15), (((/* implicit */unsigned int) arr_26 [15U] [15U]))))))) : (0ULL)));
            var_39 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) var_4)))));
            arr_35 [i_9] = ((signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) < (arr_20 [i_9] [i_9] [(signed char)14] [i_9])))) == (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)15610))))));
        }
        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_3))))))) : (((unsigned long long int) arr_21 [i_9] [i_9]))));
    }
    var_41 -= ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_16))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2662968692616089883ULL)) ? (6362332105997705907ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14157)))))) ? (((/* implicit */unsigned int) 511)) : (var_12)))));
    var_42 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopSeq 4 */
    for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
    {
        var_43 |= ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */unsigned long long int) var_18)) != (arr_1 [i_11]))) ? (((/* implicit */int) arr_18 [i_11] [i_11] [i_11])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)24))))))) : (((((/* implicit */_Bool) (((_Bool)0) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) arr_26 [(short)0] [i_11])) : (((/* implicit */int) var_19)))));
        var_44 &= ((/* implicit */signed char) var_3);
        var_45 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-23322)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))) : (arr_1 [i_11]))), (((/* implicit */unsigned long long int) var_7))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) /* same iter space */
    {
        var_46 = ((var_10) % (max((((/* implicit */unsigned int) arr_10 [(short)18] [i_12] [i_12])), (arr_23 [12U] [i_12]))));
        /* LoopSeq 1 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_47 &= ((((/* implicit */_Bool) (short)-734)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_12]))))) : (((/* implicit */int) (signed char)(-127 - 1))));
            arr_44 [i_12] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_12] [i_13] [(short)8])) ? (min((var_18), (((/* implicit */int) arr_30 [(signed char)11])))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? ((+(((/* implicit */int) arr_38 [i_12])))) : (((/* implicit */int) (short)-31112))))));
        }
        var_48 &= ((/* implicit */int) var_12);
        var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-106)), ((short)-22695)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214))) : (arr_5 [i_12])))) && (((/* implicit */_Bool) (((-(((/* implicit */int) arr_42 [i_12])))) - (((((/* implicit */_Bool) 18446744073709551599ULL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_6 [i_12] [i_12] [i_12])))))))));
    }
    for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 2) /* same iter space */
    {
        var_50 = ((/* implicit */signed char) ((_Bool) arr_36 [i_14]));
        var_51 = ((/* implicit */short) var_4);
        var_52 = ((/* implicit */short) (signed char)-74);
    }
    /* vectorizable */
    for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 2) /* same iter space */
    {
        var_53 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_15]))) - (0ULL)));
        /* LoopNest 2 */
        for (short i_16 = 0; i_16 < 19; i_16 += 3) 
        {
            for (unsigned long long int i_17 = 2; i_17 < 17; i_17 += 4) 
            {
                {
                    var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (unsigned char)63))) ? (((9828504889698459905ULL) / (((/* implicit */unsigned long long int) arr_20 [i_15] [i_16] [i_15] [i_15])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [11ULL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))));
                    arr_54 [i_15] [i_16] [i_15] [i_17] = ((/* implicit */unsigned char) ((((-1798953558) >= (((/* implicit */int) arr_27 [i_15] [i_16])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_17] [i_15])) % (((/* implicit */int) arr_33 [i_16]))))) : (arr_5 [i_17 - 1])));
                    var_55 = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_15] [i_16] [i_17 + 2]))));
                    var_56 = ((/* implicit */int) ((var_2) ^ (((/* implicit */unsigned long long int) arr_12 [i_17 - 1] [i_17 - 2] [i_17 - 2] [i_17 + 2]))));
                }
            } 
        } 
    }
}
