/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64075
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    arr_9 [i_1] [i_1] [i_2] [5U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)115))))) ? ((-(arr_8 [i_0] [(unsigned char)8] [i_2] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    var_19 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [(short)0] [(short)0] [i_0])))))));
                    var_20 = (+((-9223372036854775807LL - 1LL)));
                }
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) (short)12636)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned short)26910)))), (((/* implicit */int) min((var_18), (((/* implicit */unsigned short) var_9)))))))));
                    var_22 = ((/* implicit */short) min(((-((+(var_14))))), (((/* implicit */long long int) (~((-(((/* implicit */int) arr_1 [i_0])))))))));
                    arr_12 [i_1] = ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_7 [i_1 + 2] [i_1 + 1] [i_1 - 1])))) : (((((/* implicit */_Bool) var_13)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34258))))));
                }
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        var_23 = min((min((((/* implicit */long long int) (unsigned short)26912)), (-9223372036854775782LL))), (((/* implicit */long long int) (unsigned char)64)));
                        arr_17 [i_0] [i_1] [i_1] [i_1] [(unsigned short)15] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_4])), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)38630)) | (((/* implicit */int) var_6))))) ? (min((((/* implicit */long long int) 3452645188U)), (9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)25)))))))));
                        var_24 = ((/* implicit */unsigned short) -9223372036854775807LL);
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_1 + 1] [i_1 + 2])))) ? (((((/* implicit */long long int) (-(((/* implicit */int) var_5))))) ^ (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-8012010248704618225LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6457))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_15 [i_1 + 2] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [(unsigned short)2] [i_4] [i_1 + 2]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (arr_5 [i_1]))))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        var_26 = (unsigned short)45823;
                        arr_21 [i_1] [i_1] [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_1])) >= (((/* implicit */int) var_5)))))) : ((+(4124730186U))))) % (arr_8 [i_1] [i_4] [i_0] [i_1])));
                    }
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        var_27 = ((/* implicit */short) ((unsigned int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)23375)))), (((/* implicit */int) var_12)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_8 = 1; i_8 < 15; i_8 += 3) 
                        {
                            arr_27 [i_0] [(short)5] [i_4] [i_4] [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_9);
                            var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_10 [i_1] [(unsigned char)1] [i_7] [(unsigned char)1]))));
                            var_29 = ((/* implicit */unsigned int) var_3);
                        }
                        for (unsigned int i_9 = 1; i_9 < 13; i_9 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : ((~(1065353216U)))))) ? (((314702201025583045LL) << (((max((var_14), (((/* implicit */long long int) (unsigned short)26905)))) - (8598090453862924218LL))))) : (((((/* implicit */_Bool) ((long long int) var_6))) ? (9223372036854775805LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]))))))))));
                            arr_32 [i_0] [i_0] [i_0] [i_7] [i_4] |= arr_24 [i_0] [i_1] [i_1] [(unsigned short)9] [(unsigned char)13];
                            var_31 = ((/* implicit */short) var_16);
                            var_32 += ((/* implicit */unsigned char) min((((unsigned int) (-(((/* implicit */int) (unsigned short)26910))))), (((/* implicit */unsigned int) arr_29 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9] [i_9]))));
                        }
                        var_33 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_15 [i_0] [i_1]))))));
                        var_34 = ((/* implicit */long long int) (unsigned char)234);
                    }
                    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_17)) < (((/* implicit */int) (unsigned short)23384)))))) : (1085875654U))), (((/* implicit */unsigned int) ((((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) var_11))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_11)) & (((/* implicit */int) arr_3 [i_1]))))))))));
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (~(var_14))))) ? ((-(((/* implicit */int) ((unsigned short) var_11))))) : (((((/* implicit */_Bool) 2568843715U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)26910))))));
                        var_37 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_29 [i_1] [(unsigned short)3] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_29 [i_10] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 1; i_11 < 15; i_11 += 1) 
                    {
                        for (short i_12 = 2; i_12 < 13; i_12 += 2) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned short) min((var_38), (((unsigned short) ((unsigned char) ((((/* implicit */int) arr_10 [i_0] [i_0] [7LL] [i_0])) >= (((/* implicit */int) var_18))))))));
                                var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)52)), ((-9223372036854775807LL - 1LL))))) ? (min((9223372036854775807LL), (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-20120)), (1977045422U)))))) : (((/* implicit */long long int) 3209091641U))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) 
                {
                    arr_44 [i_0] [i_1] [3U] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 2568843715U)) ? (9223372036854775785LL) : (((/* implicit */long long int) 1726123581U))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 16; i_15 += 4) 
                        {
                            {
                                var_40 = max((((/* implicit */unsigned int) (unsigned char)57)), (max(((+(arr_14 [i_1] [i_14] [i_1] [i_1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)26908))))))));
                                var_41 -= ((/* implicit */unsigned short) (unsigned char)35);
                                arr_50 [i_0] [i_1] [i_1] [(unsigned char)15] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)231)), (arr_37 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 + 1])))) || (((/* implicit */_Bool) min((var_16), (((/* implicit */long long int) arr_37 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 + 2])))))));
                            }
                        } 
                    } 
                }
                arr_51 [i_1] [i_1] = 1726123574U;
                var_42 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_1 [i_1]))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [(unsigned char)15] [i_0])) ^ (((/* implicit */int) arr_1 [i_0])))))));
                arr_52 [i_1] = ((/* implicit */unsigned char) var_18);
                arr_53 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_1] [i_0])) ? ((+(arr_16 [i_0] [i_0] [i_1]))) : (851653943U)))) ? (((/* implicit */int) arr_47 [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1] [i_1])) : (((/* implicit */int) ((unsigned char) (short)32577)))));
            }
        } 
    } 
    var_43 -= ((/* implicit */unsigned short) ((unsigned char) var_14));
    /* LoopNest 3 */
    for (unsigned char i_16 = 0; i_16 < 23; i_16 += 4) 
    {
        for (short i_17 = 0; i_17 < 23; i_17 += 4) 
        {
            for (unsigned short i_18 = 1; i_18 < 21; i_18 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_19 = 1; i_19 < 21; i_19 += 3) 
                    {
                        arr_66 [i_19] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) : (var_13))) * (3209091643U)));
                        arr_67 [18U] [18U] [18U] [18U] [18U] = ((/* implicit */unsigned char) (~(min((2568843714U), (((/* implicit */unsigned int) min(((unsigned short)0), (arr_56 [i_17] [i_17]))))))));
                    }
                    var_44 = ((/* implicit */unsigned int) var_1);
                    arr_68 [i_16] [i_16] |= ((/* implicit */unsigned int) arr_65 [i_16] [i_17] [1U] [1U] [i_18] [(unsigned short)4]);
                    var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) (~((+(((/* implicit */int) var_3)))))))));
                    var_46 = ((/* implicit */unsigned int) max((var_46), ((-((+(4294967293U)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_20 = 0; i_20 < 10; i_20 += 4) 
    {
        arr_72 [i_20] [i_20] = ((/* implicit */unsigned char) (-((+(((3209091620U) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
        var_47 |= ((unsigned short) min((((/* implicit */short) arr_18 [i_20] [i_20] [i_20] [i_20])), (var_2)));
        /* LoopNest 3 */
        for (unsigned short i_21 = 3; i_21 < 9; i_21 += 1) 
        {
            for (unsigned short i_22 = 2; i_22 < 7; i_22 += 4) 
            {
                for (unsigned int i_23 = 2; i_23 < 7; i_23 += 4) 
                {
                    {
                        var_48 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) 3209091620U))) ? (max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)16))))), (((long long int) 3209091620U)))) : (((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) (unsigned char)185))))))));
                        var_49 |= ((/* implicit */unsigned int) (unsigned short)55580);
                    }
                } 
            } 
        } 
        var_50 = ((/* implicit */unsigned short) (+(((/* implicit */int) max(((unsigned short)0), ((unsigned short)29469))))));
    }
    for (long long int i_24 = 0; i_24 < 21; i_24 += 2) 
    {
        var_51 *= ((/* implicit */unsigned short) (-((-((~(9223372036854775805LL)))))));
        arr_83 [i_24] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (3209091620U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26905)))))));
    }
}
