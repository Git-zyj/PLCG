/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6912
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
    var_17 &= ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_11)) - (58))))));
            arr_7 [(short)8] = ((arr_3 [i_1 - 1] [i_1 + 2]) ^ (arr_3 [i_1 + 2] [i_1 + 2]));
            arr_8 [12ULL] [i_0] = ((/* implicit */short) ((signed char) (unsigned char)193));
            arr_9 [i_1] = ((/* implicit */unsigned short) ((int) 11344839109299113134ULL));
        }
        for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
            {
                arr_14 [i_0] [i_2 + 2] [i_2] = ((/* implicit */short) 180159934);
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    arr_19 [i_2] = ((/* implicit */unsigned short) ((signed char) arr_15 [i_2 + 3] [i_2] [i_2 + 3] [i_2 + 3]));
                    arr_20 [i_2] [i_3] [i_3] [i_4] = arr_3 [i_4] [0U];
                    var_19 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_0] [i_3] [i_4]))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29065)) ? (((/* implicit */int) arr_0 [8LL] [8LL])) : (((/* implicit */int) var_14))))) ? (var_7) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                }
                for (signed char i_5 = 1; i_5 < 17; i_5 += 3) 
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) arr_18 [i_2] [i_2 + 2] [i_2 + 2])))))));
                    var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_2]))) ? (((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) arr_5 [(signed char)18])) : (180159937))) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_5 - 1]))));
                    arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [14LL] = ((((/* implicit */_Bool) arr_18 [i_2 + 2] [i_2 - 1] [i_5 + 1])) ? (arr_18 [i_0] [i_2 + 2] [i_5 + 2]) : (arr_18 [i_2] [i_2 + 3] [i_5 - 1]));
                }
                arr_26 [i_2] [i_0] [i_2] = ((((/* implicit */_Bool) (signed char)115)) && (((/* implicit */_Bool) (short)17799)));
            }
            for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_16)))) ? (((arr_27 [i_2 - 1] [i_2 + 3] [i_2 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_27 [i_6] [i_6] [i_2 + 1]), (arr_27 [i_6] [i_6] [i_2 + 2])))))));
                var_24 = ((/* implicit */short) ((unsigned int) max((arr_15 [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2 + 2]), (arr_15 [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2 + 2]))));
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) max((((/* implicit */long long int) max((var_16), (((/* implicit */unsigned int) (short)17799))))), (max((arr_4 [i_2] [i_2 + 3] [i_6]), (arr_4 [i_2] [i_2 + 3] [i_2 + 2]))))))));
            }
            /* vectorizable */
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
            {
                arr_32 [i_0] [i_2] [i_7] [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-31739))));
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 4) 
                {
                    arr_35 [i_0] [i_2] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_13 [i_2] [i_7] [i_2])) ? (9096466140849501376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                    var_27 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) -180159951)) ? (arr_1 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29066)))))));
                }
                for (unsigned long long int i_9 = 3; i_9 < 19; i_9 += 2) 
                {
                    arr_38 [i_2] [i_0] [i_2] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_2 - 1] [i_7]))));
                    var_28 = ((/* implicit */int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((unsigned long long int) -180159948)) - (18446744073529391647ULL)))));
                }
                arr_39 [i_0] [i_2 + 3] [i_2] [i_7] = ((/* implicit */short) ((arr_2 [i_2 + 2]) < (arr_37 [i_2 + 3])));
                var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0] [i_2] [i_0] [i_2] [i_2])) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) var_8)))))));
            }
            /* LoopSeq 2 */
            for (signed char i_10 = 1; i_10 < 19; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_11 = 1; i_11 < 16; i_11 += 3) 
                {
                    for (signed char i_12 = 2; i_12 < 19; i_12 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) ((5128419173519341333LL) % (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_10] [i_2 - 1])))));
                            arr_49 [i_2] [i_10] = min((((((unsigned long long int) -67096263756059266LL)) * (((/* implicit */unsigned long long int) max((-180159938), (((/* implicit */int) (signed char)(-127 - 1)))))))), (((/* implicit */unsigned long long int) var_3)));
                            var_31 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_11] [i_11] [i_10]))) : (var_16))) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)-40)))))) & (((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) * (((/* implicit */int) arr_23 [i_12] [i_2 - 1] [i_0] [i_2 - 1] [i_0] [i_0])))) * (((/* implicit */int) var_4)))))));
                            var_32 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -180159905)) ? (6323944389388635619LL) : (9223372036854775803LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_10] [i_10 + 1] [i_0] [i_10] [i_0]))) : (arr_1 [i_2 + 2]))) <= (min((((/* implicit */unsigned long long int) arr_40 [i_2] [i_10 + 1] [i_10 + 1])), (((549755813887ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) min((((/* implicit */short) arr_13 [i_0] [i_2 - 1] [i_10])), (var_8))))))));
            }
            for (unsigned short i_13 = 2; i_13 < 17; i_13 += 4) 
            {
                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) % (arr_29 [i_0] [i_2 + 3] [i_2 + 3])))) ? ((+(((/* implicit */int) (signed char)10)))) : (((/* implicit */int) arr_31 [i_13] [i_13] [i_13 + 1])))) : ((((+(((/* implicit */int) var_13)))) >> ((((~(-4580331070990556572LL))) - (4580331070990556557LL))))))))));
                /* LoopNest 2 */
                for (unsigned int i_14 = 4; i_14 < 19; i_14 += 2) 
                {
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_22 [i_13 + 1] [i_13] [i_13] [(signed char)2] [i_2] [i_2 + 3])))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (5232668535653004768ULL)))))));
                            arr_57 [i_0] [i_2 + 1] [i_2] [i_2] [i_15] [i_14] [i_2 - 1] = ((((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) (signed char)-21))))))) > (max((arr_47 [i_13]), (((/* implicit */long long int) ((unsigned int) (signed char)1))))));
                            arr_58 [i_0] [i_2] [i_0] [i_0] [i_15] [i_15] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_47 [i_0]) : (arr_47 [i_2 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65532)))))) : (((((/* implicit */_Bool) arr_47 [i_0])) ? (arr_47 [i_0]) : (arr_47 [i_0])))));
                        }
                    } 
                } 
                arr_59 [i_13 - 1] [i_2] [i_0] = ((/* implicit */unsigned long long int) (-((((-(((/* implicit */int) (short)3024)))) / (((((/* implicit */int) (short)-29066)) * (((/* implicit */int) arr_45 [i_13] [i_13] [i_2] [i_2] [i_0]))))))));
            }
            var_36 = ((/* implicit */unsigned long long int) (unsigned short)31737);
        }
        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) -2147483642)) % (-380081891931275465LL)))))))));
        arr_60 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -2147483642)) : (arr_15 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((signed char) (unsigned short)33797))) : (((/* implicit */int) ((signed char) min((((/* implicit */signed char) arr_27 [i_0] [i_0] [i_0])), (arr_50 [i_0] [i_0] [i_0])))))));
    }
}
