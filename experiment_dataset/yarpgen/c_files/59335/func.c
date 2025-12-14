/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59335
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
    var_12 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = max((((/* implicit */unsigned int) var_9)), ((+(arr_1 [i_0] [i_0 - 2]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_13 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (short)32766))));
            var_14 = ((/* implicit */unsigned char) ((arr_1 [i_0 - 2] [i_0]) <= (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                var_15 += arr_9 [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_0 - 2];
                var_16 += ((/* implicit */signed char) (short)-32762);
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_4 [i_0]))));
                        arr_17 [i_2] [i_2] [i_3] [18U] [18U] [i_2] = ((/* implicit */unsigned char) arr_9 [i_0] [i_0 - 3] [(signed char)2] [i_0]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) (unsigned char)195);
                        arr_22 [i_0 + 3] [i_2] [i_2] [i_2] [i_0 + 3] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) -1152201017033452357LL)) >= (arr_14 [i_2] [i_2] [4ULL] [i_0 - 2] [i_2] [7U]))) && ((!(((/* implicit */_Bool) arr_11 [i_2]))))));
                        arr_23 [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-122))));
                    }
                }
            }
            /* vectorizable */
            for (short i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                arr_27 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]));
                arr_28 [i_0] [i_0] [(signed char)0] |= ((/* implicit */long long int) arr_15 [i_0 - 3] [i_0 - 3] [i_0] [(short)19] [i_0 - 3]);
                var_19 = ((/* implicit */unsigned short) ((long long int) -7258157417330699830LL));
            }
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    {
                        arr_34 [(unsigned char)6] [i_2] [i_8] [i_9] = max((((/* implicit */unsigned int) ((_Bool) ((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))), (((((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2] [7LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32289))) : (arr_6 [i_2]))) + (((/* implicit */unsigned int) arr_25 [i_2] [i_2 - 1] [i_2])))));
                        arr_35 [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_2 - 1] [i_8] [i_9])) ? (((/* implicit */int) arr_20 [i_0] [i_2] [i_8] [i_8])) : (((/* implicit */int) arr_20 [i_0 + 1] [i_0 + 1] [i_8] [i_0 + 1]))))));
                        arr_36 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (~(min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)41482))) / (-1152201017033452360LL))), (((/* implicit */long long int) 659325657U))))));
                        arr_37 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_2] [i_0] [i_2 - 1])))))));
                    }
                } 
            } 
        }
        for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                var_20 = arr_7 [i_11];
                arr_42 [i_11] [i_10] [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) arr_39 [i_0] [i_0 - 2] [i_0 - 3])) << (((/* implicit */int) arr_39 [i_0] [i_0 - 1] [i_0 + 2])))));
                arr_43 [i_0] [i_10] |= var_2;
                arr_44 [i_10] = ((/* implicit */long long int) ((arr_30 [i_11] [i_0] [i_0]) * (((unsigned int) (+(((/* implicit */int) (unsigned char)207)))))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_0))));
            }
            for (unsigned int i_12 = 0; i_12 < 20; i_12 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned char)84))))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_12] [i_12] [i_12] [i_0 + 2])) ? (max((8470466991915135193ULL), (((/* implicit */unsigned long long int) (short)32767)))) : (((/* implicit */unsigned long long int) max(((+(arr_30 [14] [i_12] [(unsigned char)2]))), (((/* implicit */unsigned int) (unsigned char)113)))))));
                }
                for (unsigned int i_14 = 0; i_14 < 20; i_14 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned short) (-((+(((((/* implicit */int) arr_39 [i_0] [i_14] [i_0])) | (((/* implicit */int) (unsigned char)60))))))));
                    arr_53 [i_14] [(signed char)0] [i_0] [i_14] |= ((/* implicit */unsigned int) ((((((/* implicit */int) ((unsigned char) arr_25 [i_14] [i_12] [i_14]))) == (((/* implicit */int) ((_Bool) (unsigned char)195))))) ? (((/* implicit */long long int) (+((-(((/* implicit */int) var_10))))))) : (((long long int) (!(((/* implicit */_Bool) arr_1 [i_12] [(unsigned char)10])))))));
                }
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((unsigned char) (+((-(((/* implicit */int) var_2))))))))));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (unsigned short)508)) : (((/* implicit */int) (unsigned short)10763))));
            }
            var_27 = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */_Bool) (unsigned short)32289)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) : (var_1))), ((~(arr_5 [i_0])))))));
            arr_54 [i_10] [i_0] = ((/* implicit */unsigned char) (~(1494600447U)));
            var_28 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_8 [i_0] [i_10])), (((((/* implicit */_Bool) arr_38 [i_0 - 1])) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_11)), ((unsigned char)9)))) : ((-(((/* implicit */int) var_2))))))));
        }
    }
    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) min((((/* implicit */unsigned short) var_0)), (min((((/* implicit */unsigned short) var_0)), (min((((/* implicit */unsigned short) var_5)), (var_9))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_16 = 0; i_16 < 10; i_16 += 1) 
        {
            var_30 = ((/* implicit */unsigned char) arr_49 [i_16]);
            arr_59 [i_15] [i_16] = ((/* implicit */unsigned short) (~(arr_38 [i_16])));
        }
        for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 2) 
        {
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (~(arr_16 [i_15] [(unsigned short)6] [i_15] [i_17] [i_17]))))));
            var_32 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_17])) ? ((-(((/* implicit */int) (signed char)-22)))) : ((-(((/* implicit */int) var_5))))))) ? (((((/* implicit */unsigned long long int) arr_9 [i_15] [(signed char)4] [i_17] [i_17])) | (((((/* implicit */_Bool) arr_41 [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_14 [i_15] [i_15] [i_15] [i_15] [i_17] [i_15]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_50 [i_17] [i_17] [i_17] [i_17])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_18 = 0; i_18 < 10; i_18 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_19 = 3; i_19 < 9; i_19 += 1) 
                {
                    arr_69 [i_17] [i_18] [i_18] = ((arr_14 [i_19 - 3] [i_18] [i_19 - 3] [i_19 - 2] [i_18] [i_19 - 3]) & (((/* implicit */unsigned long long int) arr_57 [i_15] [i_15] [i_15])));
                    arr_70 [i_15] [i_15] [i_18] [i_19] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)176)) || (((/* implicit */_Bool) (unsigned short)65027))))) / (((((/* implicit */_Bool) 979604153)) ? (arr_25 [i_17] [i_17] [i_17]) : (((/* implicit */int) var_11))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_20 = 0; i_20 < 10; i_20 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_65 [i_20] [i_18] [i_15] [i_15]))) ? (((/* implicit */int) arr_11 [i_20])) : (((/* implicit */int) (_Bool)1))));
                        var_34 = ((/* implicit */unsigned long long int) ((signed char) arr_11 [i_20]));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_19 - 3] [i_19] [i_19 - 3] [i_20])) && (arr_29 [i_19 - 1] [i_20] [i_19 - 2] [i_20])));
                        arr_74 [i_20] [i_20] [i_18] [i_20] [i_15] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 2800366849U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)508))) : (0U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2)))));
                    }
                }
                var_36 = ((/* implicit */_Bool) arr_16 [i_15] [i_15] [i_17] [i_18] [i_18]);
                var_37 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_51 [i_15] [i_17] [i_18] [i_15] [i_18] [i_18])) ? (arr_46 [i_18] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_7))))));
            }
            for (long long int i_21 = 0; i_21 < 10; i_21 += 2) /* same iter space */
            {
                arr_78 [i_15] [(unsigned char)0] [i_15] = ((/* implicit */unsigned short) ((2728120669U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [0ULL] [i_17] [i_17] [i_17])))));
                var_38 += ((/* implicit */short) var_4);
            }
            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((unsigned char) 979604171))), (arr_60 [i_15] [i_15])))) ? (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned long long int) (unsigned short)44695)), (arr_14 [i_15] [i_15] [i_15] [i_17] [i_17] [i_17]))))) : (min((min((((/* implicit */unsigned long long int) (unsigned char)247)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) max((var_8), (arr_65 [i_17] [0LL] [(short)9] [i_15]))))))));
        }
        var_40 |= ((/* implicit */unsigned short) arr_2 [i_15]);
    }
    for (unsigned short i_22 = 0; i_22 < 16; i_22 += 2) 
    {
        var_41 = max(((unsigned char)246), (((/* implicit */unsigned char) (signed char)127)));
        /* LoopSeq 1 */
        for (signed char i_23 = 0; i_23 < 16; i_23 += 2) 
        {
            var_42 += ((/* implicit */signed char) ((unsigned int) arr_82 [i_22] [i_23] [i_22]));
            var_43 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((~(arr_5 [i_23])))))) ? ((~(((((/* implicit */_Bool) var_6)) ? (arr_1 [i_22] [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_80 [(signed char)12] [i_23]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_22] [i_23] [(unsigned char)13] [14LL] [i_22] [1U])))));
            var_44 = arr_52 [i_23] [i_22] [i_22] [i_23];
        }
        var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (_Bool)1))));
    }
    var_46 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))) * ((+(((/* implicit */int) (signed char)23))))));
}
