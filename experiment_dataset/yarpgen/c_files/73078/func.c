/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73078
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((long long int) arr_2 [i_0]));
        arr_4 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)4922)) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) var_5))))));
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)60614)) > (1967810915)))) == (-1967810922)));
                    var_18 = ((/* implicit */signed char) -2147483640);
                    arr_11 [i_0] [(unsigned char)4] = ((unsigned char) ((((/* implicit */_Bool) -1967810922)) ? (((/* implicit */int) arr_5 [(short)3] [7] [(short)3])) : (((/* implicit */int) var_1))));
                    var_19 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_2 [i_2]))))) * (((/* implicit */int) ((unsigned short) var_6)))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) min((var_20), ((unsigned short)23956)));
    }
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_5 = 2; i_5 < 14; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        {
                            var_21 = (-(((((/* implicit */_Bool) min(((unsigned short)60203), (((/* implicit */unsigned short) var_7))))) ? ((+(((/* implicit */int) (unsigned short)60203)))) : (((/* implicit */int) max((arr_20 [i_3] [i_3] [i_5 + 1] [11LL]), ((unsigned short)60612)))))));
                            arr_24 [i_3] [i_4] [i_4] [i_3] [i_6] [i_4] [(signed char)13] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))) < (min((((/* implicit */int) (!(((/* implicit */_Bool) -918266340))))), (168233186)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)87)) ? (1916901591) : (((/* implicit */int) (unsigned short)60217))));
            }
            /* vectorizable */
            for (signed char i_8 = 2; i_8 < 11; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) (unsigned short)60199);
                            arr_33 [i_3] [i_8] [i_8] = ((/* implicit */short) ((signed char) (unsigned short)4921));
                            var_24 += ((unsigned short) arr_27 [i_3] [i_4] [i_4]);
                        }
                    } 
                } 
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_14 [i_3] [i_3])) : (((/* implicit */int) (signed char)-120)))))))));
            }
            /* vectorizable */
            for (short i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                arr_36 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)(-127 - 1))) == (((/* implicit */int) ((signed char) (unsigned short)30017)))));
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((~(((/* implicit */int) (signed char)10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60203))))))))));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        {
                            arr_44 [i_3] [i_3] [i_3] [i_12] [i_3] [i_13] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)5332))));
                            var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)9624))) / (var_16))))));
                            arr_45 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7928533411810365526LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) (unsigned char)150)) : ((~(((/* implicit */int) (signed char)34)))));
                            var_28 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_34 [i_4] [i_13] [(unsigned short)10])) == (((/* implicit */int) arr_34 [i_13] [i_13] [i_13]))));
                        }
                    } 
                } 
            }
            arr_46 [6LL] [i_3] = ((/* implicit */signed char) min((((/* implicit */int) max(((unsigned short)65527), (((/* implicit */unsigned short) (signed char)-61))))), (((((/* implicit */_Bool) arr_18 [i_3] [i_3])) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) var_14))))));
            arr_47 [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned char) max((min((1916901591), (((/* implicit */int) (short)31474)))), (((/* implicit */int) var_1)))));
            arr_48 [i_3] [i_3] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (unsigned short)4671)) - (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_40 [i_3])) : (((/* implicit */int) (signed char)(-127 - 1))))))));
        }
        for (unsigned short i_14 = 0; i_14 < 15; i_14 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) min((((/* implicit */int) var_17)), ((+(((((/* implicit */int) var_12)) / (((/* implicit */int) var_4)))))))))));
            var_30 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) arr_28 [i_3] [i_3] [i_14] [i_14])))));
            var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)4923)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) (unsigned short)60612)))))))));
        }
        for (unsigned short i_15 = 0; i_15 < 15; i_15 += 4) /* same iter space */
        {
            arr_53 [i_3] = ((/* implicit */unsigned short) var_17);
            var_32 *= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (unsigned char)43)) >> (((((((/* implicit */int) arr_31 [i_3] [2LL] [i_15] [i_15])) << (((((/* implicit */int) arr_22 [(unsigned short)12] [i_3] [i_3] [i_3] [i_15])) - (167))))) - (133930996))))));
            var_33 = ((/* implicit */unsigned char) (signed char)-59);
            var_34 = ((/* implicit */long long int) (signed char)30);
            var_35 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)5337)) - (((/* implicit */int) (unsigned short)5333))));
        }
        var_36 = ((signed char) ((((/* implicit */_Bool) ((-8400230507626888394LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5357)))))) ? (max((var_11), (((/* implicit */long long int) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)-101))))));
        var_37 = (unsigned short)60203;
        var_38 += ((/* implicit */signed char) ((min((((/* implicit */int) arr_43 [i_3] [i_3])), (918266339))) % ((~(((/* implicit */int) (unsigned short)47885))))));
        arr_54 [i_3] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (signed char)2)), ((unsigned short)21893)));
    }
    /* LoopNest 2 */
    for (signed char i_16 = 0; i_16 < 25; i_16 += 4) 
    {
        for (unsigned short i_17 = 0; i_17 < 25; i_17 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_18 = 0; i_18 < 25; i_18 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 25; i_19 += 2) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 25; i_20 += 4) 
                        {
                            {
                                var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)4910)) : (((/* implicit */int) (short)32765))));
                                var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_55 [i_16] [i_18])) : (((/* implicit */int) (short)-17598))));
                                var_41 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_60 [i_16] [i_19] [(unsigned short)22] [i_16])) ? (((long long int) var_4)) : (((/* implicit */long long int) 1434567558))));
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)57298))));
                    var_43 = ((/* implicit */long long int) ((unsigned short) ((int) var_5)));
                    arr_68 [20LL] [23LL] [23LL] = ((/* implicit */short) ((((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) (signed char)-30)))) || (((/* implicit */_Bool) ((int) 8191)))));
                    var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) arr_67 [i_16] [i_16] [i_16] [i_16])) : (((/* implicit */int) arr_61 [(signed char)7] [i_16])))) >> ((((+(var_11))) - (4265555805602504324LL))))))));
                }
                var_45 = ((signed char) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (short)31487)) : (((/* implicit */int) (unsigned short)4923))));
                var_46 -= ((/* implicit */long long int) arr_62 [i_16]);
                /* LoopNest 2 */
                for (unsigned short i_21 = 1; i_21 < 23; i_21 += 1) 
                {
                    for (int i_22 = 0; i_22 < 25; i_22 += 1) 
                    {
                        {
                            arr_74 [i_21] [(unsigned char)20] [i_21] [i_22] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40310))));
                            var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) max((((/* implicit */int) ((short) (short)-22535))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))))))));
                        }
                    } 
                } 
                arr_75 [(short)2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)28)), ((unsigned short)61417)))) <= (((/* implicit */int) var_10))))) >> (((/* implicit */int) ((((long long int) (short)-3975)) != (((/* implicit */long long int) ((/* implicit */int) (signed char)23))))))));
            }
        } 
    } 
}
