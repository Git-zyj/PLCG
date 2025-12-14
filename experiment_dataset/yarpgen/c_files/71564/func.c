/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71564
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_2] [i_2] [i_2])) >> (0U)));
                arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [(short)16])) >= (((((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_2])) << (((((/* implicit */int) (unsigned char)255)) - (251)))))));
            }
            arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (arr_1 [i_0] [i_1])));
        }
        for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            var_14 ^= ((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_3]);
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_15 = ((/* implicit */unsigned char) (_Bool)1);
                var_16 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)29284))) * (((unsigned long long int) (short)-29296))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(arr_13 [i_0] [i_3] [i_5])))), (((((/* implicit */_Bool) arr_0 [i_0] [i_5])) ? (var_0) : (((/* implicit */unsigned long long int) -973821957))))));
                arr_15 [(short)8] [i_3] [i_3] = ((/* implicit */unsigned char) var_11);
                arr_16 [(unsigned short)13] = ((/* implicit */int) var_4);
                var_18 = -6867257983174710402LL;
            }
            /* LoopSeq 2 */
            for (signed char i_6 = 3; i_6 < 18; i_6 += 4) 
            {
                arr_19 [i_0] [i_0] [i_3] [i_6] = ((/* implicit */long long int) var_3);
                var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)1016))));
                arr_20 [i_6] [i_0] [i_6] = ((/* implicit */short) var_10);
                arr_21 [14ULL] [i_0] [i_3] [i_3] |= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) 6867257983174710398LL)) ? ((-(2454986244396531622LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47055))))));
            }
            for (int i_7 = 1; i_7 < 18; i_7 += 1) 
            {
                var_20 = ((/* implicit */unsigned short) arr_22 [i_0] [i_0] [12LL] [i_7]);
                /* LoopSeq 3 */
                for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    arr_26 [i_8] [i_7] [i_7] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+((+(((/* implicit */int) arr_23 [i_0] [i_3] [i_7 + 2] [i_8]))))))), (((((2454986244396531625LL) - (-1073190514163508734LL))) - (((((/* implicit */long long int) 134152192U)) + (0LL)))))));
                    arr_27 [i_0] [i_7] [i_7] [i_8] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)42286)), ((+(2LL)))))), (min((17113399242338626892ULL), (((/* implicit */unsigned long long int) -4592927095929461679LL))))));
                }
                for (signed char i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    var_21 += ((/* implicit */long long int) ((((((/* implicit */_Bool) 928198554719892709ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146))) : ((~(arr_1 [i_0] [(unsigned short)11]))))) ^ (((((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (arr_1 [i_0] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                    arr_30 [i_7] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) var_9);
                    var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */int) (short)8865)) : (((/* implicit */int) (unsigned char)214))))) ? (((/* implicit */int) (unsigned char)149)) : (((((/* implicit */int) (short)-29296)) * (((/* implicit */int) (unsigned char)103))))))) ? (((/* implicit */int) (unsigned short)24240)) : (((/* implicit */int) ((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) 17955868370548944218ULL)))))));
                    arr_31 [i_0] [i_0] [i_3] [i_3] [i_7 - 1] [i_9] &= ((max((((2454986244396531638LL) | (((/* implicit */long long int) 0U)))), (((/* implicit */long long int) arr_14 [i_3] [i_7])))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_23 [i_9] [i_7 - 1] [i_7 - 1] [i_7 + 1])) < (((/* implicit */int) var_1)))))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        arr_39 [i_7] [(short)2] [(unsigned char)10] [i_10] = ((/* implicit */unsigned int) max((-1161908236077185810LL), (((/* implicit */long long int) arr_28 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_11]))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_29 [i_7] [i_3] [(unsigned short)1] [16LL]))) && (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 3U)))) < (((((/* implicit */_Bool) -1161908236077185813LL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                        var_24 += ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7 + 2] [(short)3]))) & (3844612863U))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)26194)) && (((/* implicit */_Bool) (signed char)-28)))) && (((/* implicit */_Bool) (unsigned short)36699)))))));
                    }
                    for (long long int i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        arr_43 [i_0] [i_3] [i_7] [i_10] [i_12] = ((_Bool) arr_24 [i_0] [i_7 - 1] [i_7]);
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (_Bool)1))));
                        arr_44 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)43227))))) == (arr_35 [i_0] [i_3] [i_12] [i_7 - 1])));
                    }
                    for (unsigned char i_13 = 1; i_13 < 18; i_13 += 1) 
                    {
                        var_26 -= ((/* implicit */long long int) var_2);
                        arr_47 [i_0] [i_3] [i_7] [i_7] [i_13 + 1] = ((/* implicit */unsigned int) -14LL);
                    }
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (+((+(((/* implicit */int) ((((/* implicit */int) (short)-32363)) >= (2147483647)))))))))));
                }
                var_28 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) (short)6)) : (((/* implicit */int) (short)22417))))));
            }
            var_29 += ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (signed char)(-127 - 1))))));
        }
        arr_48 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((long long int) ((((/* implicit */int) (unsigned short)57353)) << (((((/* implicit */int) (short)32363)) - (32357)))))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-6299)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_14 = 1; i_14 < 17; i_14 += 3) 
        {
            arr_51 [i_14] [i_14 + 1] [i_14] = ((/* implicit */unsigned long long int) var_4);
            arr_52 [i_14] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)2689))));
        }
        for (unsigned int i_15 = 1; i_15 < 19; i_15 += 3) 
        {
            arr_57 [i_15] = var_9;
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 3) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 2) 
                {
                    {
                        arr_62 [i_15] [i_15] [i_16] [17U] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((17301194427371896275ULL), (((/* implicit */unsigned long long int) (unsigned char)107))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((unsigned long long int) (unsigned char)86))))) ? ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-32363)) : (((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) (short)5174)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57353))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)7)))))))));
                        arr_63 [i_0] [i_0] &= ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (-9223372036854775807LL - 1LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86))) : (var_3))))))), (-2023632664)));
                        arr_64 [i_0] [i_15] [i_15] [i_17] = ((/* implicit */unsigned char) (~((-(((((/* implicit */int) (signed char)121)) ^ (((/* implicit */int) (signed char)52))))))));
                        var_30 = ((/* implicit */long long int) min((var_30), (min((((/* implicit */long long int) (unsigned short)56595)), (max((arr_33 [i_15 - 1] [i_15] [i_15 - 1] [i_15] [i_16]), (((/* implicit */long long int) max(((unsigned char)129), ((unsigned char)86))))))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned long long int i_18 = 1; i_18 < 21; i_18 += 2) 
    {
        arr_67 [i_18 + 1] [i_18 + 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)105))));
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32365)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_18 - 1] [i_18]))) : (159699779U)));
    }
    var_32 = ((/* implicit */short) ((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28351)))));
    var_33 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_4))));
}
