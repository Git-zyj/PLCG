/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58941
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_3))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))))) ? (((((/* implicit */_Bool) max((((/* implicit */short) arr_1 [i_0])), ((short)-6343)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))))) : (arr_5 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_3 [i_0])))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_20 = arr_9 [i_3] [i_0] [i_1] [i_0];
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] = max((((/* implicit */unsigned long long int) (short)6343)), (((unsigned long long int) min((arr_6 [(unsigned char)10] [i_2] [i_3]), (var_7)))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) 18446744073709551615ULL))));
            var_21 *= ((/* implicit */short) arr_18 [i_0] [i_0] [i_0]);
        }
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                var_22 = ((/* implicit */unsigned long long int) min((min((((((/* implicit */int) (unsigned char)219)) % (((/* implicit */int) (unsigned char)218)))), (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) max((((/* implicit */short) var_5)), (min((((/* implicit */short) var_5)), ((short)-14031))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 3; i_7 < 10; i_7 += 3) 
                {
                    arr_29 [i_7] [i_0] [i_0] [(short)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) min(((short)18128), ((short)-4194)))) ? (arr_9 [i_7 + 3] [i_7 - 1] [i_7] [i_7 + 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (unsigned char)159))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-664))) : (7439949948085895075ULL)))) ? ((+(((/* implicit */int) arr_26 [i_5])))) : (((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) (short)-14031)) : (((/* implicit */int) (unsigned char)47)))))))));
                    var_23 = ((/* implicit */short) 11365230416380065595ULL);
                    arr_30 [i_7 + 3] [i_7 + 2] [i_0] [i_7] [i_7 + 1] [i_7 + 1] = max((((((/* implicit */_Bool) arr_8 [i_0] [(unsigned char)5] [i_7 - 2] [(unsigned char)11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50))) : (arr_8 [i_7 - 2] [i_5] [i_7 + 3] [i_7 - 3]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))));
                }
                for (short i_8 = 2; i_8 < 12; i_8 += 1) 
                {
                    arr_33 [i_0] [i_5] [i_6] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 107018762299168218ULL))));
                    arr_34 [(short)5] [i_5] [i_6] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))) != (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) * (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_5] [i_8])))))));
                }
                arr_35 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((4503599627370488ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((17254796046134356516ULL) + (var_1)))))) : (((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)32238)) : (((/* implicit */int) (short)-4549))))) : (((((/* implicit */_Bool) 9088306684349564983ULL)) ? (2681372523450371172ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160)))))))));
            }
            arr_36 [i_0] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (unsigned char)78))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_31 [i_0] [i_5] [i_0] [i_0] [i_0]))))) ? (arr_5 [(unsigned char)0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) 5716843387551967672ULL)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14031)))));
        }
        var_24 ^= ((/* implicit */short) (-(arr_27 [i_0] [i_0] [i_0])));
        arr_37 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? (min((((/* implicit */unsigned long long int) var_2)), (arr_22 [i_0] [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (4503599627370488ULL)))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) arr_16 [i_9])))) : (((/* implicit */int) ((unsigned char) (unsigned char)29)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) /* same iter space */
            {
                arr_46 [i_10] [i_10] = ((unsigned char) max((max((562949953421311ULL), (((/* implicit */unsigned long long int) (unsigned char)128)))), (((/* implicit */unsigned long long int) ((unsigned char) 14262644862407377711ULL)))));
                arr_47 [i_10] [i_10] [i_11] [7ULL] = ((((/* implicit */_Bool) ((arr_45 [4ULL] [i_10] [i_11]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-32261)), (2590985509729814943ULL)))) ? (((((/* implicit */_Bool) (short)32722)) ? (((/* implicit */int) arr_11 [i_9] [i_9] [i_10] [i_9] [i_11])) : (((/* implicit */int) var_19)))) : (((/* implicit */int) arr_32 [i_9] [i_9] [i_10] [i_11] [i_11]))))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_31 [i_10] [5ULL] [i_11] [i_10] [i_9])) ? (4677955143545739089ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) : (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))))))));
                arr_48 [(unsigned char)11] [i_10] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) 13768788930163812541ULL))));
                arr_49 [(unsigned char)12] [(unsigned char)8] |= (+(((((/* implicit */_Bool) (unsigned char)35)) ? (262143ULL) : (4962820868952628753ULL))));
            }
            for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 1) /* same iter space */
            {
                var_26 = ((max((12977862814317860328ULL), (var_17))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_9] [i_9]))) : (13768788930163812509ULL)))) ? (((/* implicit */int) ((unsigned char) 281474976710655ULL))) : (((/* implicit */int) ((short) arr_22 [i_9] [i_10])))))));
                var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)43)) % (((/* implicit */int) var_2)))))));
            }
            for (unsigned long long int i_13 = 2; i_13 < 11; i_13 += 4) 
            {
                arr_56 [i_10] [i_10] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) ((short) (unsigned char)179)))))) ? (((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (short)20106)))) : ((+(((((/* implicit */_Bool) arr_10 [i_9] [i_10] [i_10] [i_13])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)15569))))))));
                var_28 -= 16166905786531146679ULL;
            }
            arr_57 [i_10] [i_10] = min((1488901478819892458ULL), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)10005)) ? (((/* implicit */int) arr_3 [i_10])) : (((/* implicit */int) (unsigned char)16)))), (((/* implicit */int) var_15))))));
            /* LoopNest 2 */
            for (unsigned char i_14 = 1; i_14 < 12; i_14 += 4) 
            {
                for (short i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    {
                        arr_62 [i_9] [i_10] [i_14] [i_10] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_58 [i_14 - 1] [i_10] [i_14 + 1] [i_14 + 1])) == (((/* implicit */int) arr_58 [i_14 - 1] [i_10] [i_14] [i_15]))))), (min((var_1), (((/* implicit */unsigned long long int) (unsigned char)12))))));
                        arr_63 [i_10] = ((unsigned long long int) ((((((/* implicit */_Bool) arr_21 [i_10])) ? (var_16) : (18446744073709551615ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)33), ((unsigned char)223)))))));
                        arr_64 [i_9] [(short)10] [i_14] [i_15] &= ((unsigned char) (unsigned char)102);
                    }
                } 
            } 
        }
        var_29 = (short)-14031;
        arr_65 [i_9] = ((/* implicit */short) max((((((((/* implicit */_Bool) (unsigned char)89)) || (((/* implicit */_Bool) arr_31 [(unsigned char)12] [i_9] [i_9] [i_9] [i_9])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-28852))))) : (((unsigned long long int) var_10)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) - (17995947586605077032ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)32)))) : (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146)))))))));
    }
    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_18))))))))) : (((((/* implicit */_Bool) var_12)) ? (((unsigned long long int) var_19)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14030))) : (var_17)))))));
}
