/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61561
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
    var_12 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) -1610509833))))) ? (((/* implicit */int) var_4)) : ((~(var_1))))), (((/* implicit */int) ((((/* implicit */int) ((0U) != (7U)))) >= (((/* implicit */int) var_4)))))));
    var_13 |= var_11;
    var_14 = ((/* implicit */long long int) var_9);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (short i_1 = 1; i_1 < 21; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                var_15 -= ((/* implicit */unsigned char) var_6);
                var_16 += ((/* implicit */long long int) ((((/* implicit */int) ((short) var_9))) << (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_0)) : (0U))) - (1816313027U)))));
                var_17 = ((/* implicit */unsigned char) var_2);
            }
            for (int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((0U) > (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (arr_5 [(unsigned char)5] [i_1])))) : (((/* implicit */int) arr_5 [i_1] [i_3]))))) ? (((/* implicit */unsigned long long int) 0U)) : (((unsigned long long int) 4294967295U))));
                var_19 = ((/* implicit */int) (+(((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_10)) : (var_8))))));
            }
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_0)))) / (((unsigned long long int) 4294967284U)))))));
            arr_10 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_5 [(_Bool)1] [i_0]);
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_6 [(unsigned char)22] [i_1] [i_0]);
            var_21 += ((/* implicit */int) ((((/* implicit */_Bool) 4294967259U)) && (((/* implicit */_Bool) 4294967270U))));
        }
        /* vectorizable */
        for (short i_4 = 1; i_4 < 21; i_4 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) var_7);
            var_23 = ((/* implicit */unsigned long long int) 4294967239U);
            var_24 = ((/* implicit */unsigned long long int) var_2);
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_5])) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) 11U)) ? (((/* implicit */unsigned int) var_1)) : (4294967288U))))));
            arr_17 [i_0] [i_5] [i_5] = ((/* implicit */_Bool) var_7);
            arr_18 [i_0] [i_5] = ((/* implicit */unsigned short) ((signed char) var_6));
        }
        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            arr_21 [i_0] [i_6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (29U) : (arr_3 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((int) var_3))))) : (max(((+(4294967278U))), (((/* implicit */unsigned int) ((int) var_4)))))));
            var_26 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_6] [i_6]))) >= (((unsigned int) arr_0 [i_0] [i_6]))));
        }
        arr_22 [i_0] = ((/* implicit */unsigned char) 10U);
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
    {
        var_27 ^= ((/* implicit */unsigned long long int) var_1);
        var_28 = ((/* implicit */long long int) var_7);
        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((int) ((unsigned char) var_6))))));
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_8] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_10)))) : (var_8)));
        arr_28 [i_8] [i_8] = ((/* implicit */long long int) (~(arr_20 [i_8] [i_8] [i_8])));
        arr_29 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 21U)) ? (4294967284U) : (12U)));
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) arr_32 [i_9]))));
        /* LoopSeq 4 */
        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            var_32 = ((((/* implicit */_Bool) arr_15 [i_9] [i_9] [i_9])) ? (((/* implicit */long long int) arr_35 [i_9] [i_10])) : (arr_15 [i_9] [i_10] [i_9]));
            var_33 *= (-(4294967281U));
        }
        for (unsigned char i_11 = 2; i_11 < 19; i_11 += 3) 
        {
            var_34 = ((/* implicit */long long int) arr_14 [i_9] [i_9]);
            /* LoopSeq 3 */
            for (unsigned short i_12 = 1; i_12 < 21; i_12 += 4) 
            {
                arr_41 [i_11] [i_11] [(unsigned char)19] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) arr_40 [i_9] [(unsigned short)16] [i_12] [i_9])))));
                var_35 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((int) var_1))) - (6U)));
                var_36 = ((/* implicit */_Bool) arr_7 [i_11] [i_11] [i_11]);
            }
            for (long long int i_13 = 0; i_13 < 23; i_13 += 3) /* same iter space */
            {
                var_37 += ((/* implicit */unsigned long long int) ((signed char) arr_39 [i_11 + 3]));
                var_38 = ((/* implicit */unsigned int) max((var_38), ((+(24U)))));
            }
            for (long long int i_14 = 0; i_14 < 23; i_14 += 3) /* same iter space */
            {
                arr_46 [i_14] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) + (((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */unsigned long long int) var_0)) : (var_5)))));
                var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) | (((/* implicit */int) var_4))))) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
            }
            var_40 = ((/* implicit */unsigned long long int) arr_39 [i_9]);
            arr_47 [i_11] = ((/* implicit */short) var_6);
        }
        for (unsigned int i_15 = 1; i_15 < 20; i_15 += 1) 
        {
            var_41 = ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [7U]))) - (4294967293U))));
            /* LoopSeq 1 */
            for (unsigned char i_16 = 0; i_16 < 23; i_16 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_17 = 0; i_17 < 23; i_17 += 2) 
                {
                    var_42 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 20U)) ? (4294967276U) : (4294967295U)));
                    arr_55 [i_9] [i_16] = ((/* implicit */unsigned long long int) ((var_10) >> (((4294967285U) - (4294967259U)))));
                    var_43 -= ((/* implicit */short) ((unsigned short) var_5));
                }
                for (unsigned char i_18 = 0; i_18 < 23; i_18 += 4) 
                {
                    var_44 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_3)) <= (var_1))));
                    var_45 = ((/* implicit */long long int) 4294967295U);
                    var_46 = ((/* implicit */unsigned int) max((var_46), (((unsigned int) ((_Bool) var_9)))));
                    var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967276U)) ? (4294967264U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_15] [i_16])) - (((/* implicit */int) var_11)))))));
                }
                arr_58 [i_9] [(short)21] [0U] [(short)21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 22U)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_15] [i_9]))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                /* LoopSeq 1 */
                for (unsigned int i_19 = 0; i_19 < 23; i_19 += 3) 
                {
                    var_48 = ((/* implicit */unsigned long long int) ((4294967278U) * (3U)));
                    var_49 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_9])) ? (((/* implicit */unsigned int) var_2)) : (4294967276U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_6 [i_9] [i_16] [i_9])))) : (((((/* implicit */_Bool) arr_35 [i_9] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4294967283U)))));
                    var_50 -= ((/* implicit */short) ((unsigned long long int) var_6));
                    arr_61 [i_19] [i_16] [i_16] [i_15 + 1] [i_9] = ((/* implicit */_Bool) ((unsigned char) ((unsigned int) arr_51 [i_19])));
                }
                arr_62 [i_9] [i_15 + 1] [i_15 + 1] = ((/* implicit */unsigned short) arr_0 [i_9] [i_15 + 3]);
            }
            var_51 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11)))) | (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4294967282U)))));
            var_52 *= ((/* implicit */_Bool) ((((/* implicit */int) var_9)) / ((+(((/* implicit */int) var_11))))));
        }
        for (long long int i_20 = 0; i_20 < 23; i_20 += 2) 
        {
            var_53 = ((/* implicit */signed char) ((var_2) / (((/* implicit */int) arr_53 [i_9] [i_20] [i_20] [i_9] [i_9] [3]))));
            arr_66 [i_9] [i_20] [i_9] = ((/* implicit */unsigned short) ((4294967275U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_20] [i_9])))));
            var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (arr_13 [i_20] [i_9]) : (((/* implicit */unsigned long long int) 4294967272U))));
        }
        var_55 -= ((/* implicit */unsigned short) ((short) 4294967284U));
        var_56 = ((/* implicit */short) (~(0U)));
    }
    var_57 |= ((/* implicit */unsigned short) max((((var_1) >> (((((/* implicit */int) var_11)) - (49))))), (((/* implicit */int) ((_Bool) var_7)))));
}
