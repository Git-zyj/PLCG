/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71859
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
    var_17 = var_10;
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_18 -= ((/* implicit */short) 3528330379U);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */signed char) var_0);
                        arr_11 [i_0] [7U] [i_1] [i_0] &= ((((/* implicit */_Bool) max(((unsigned char)157), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_0)) < (2U))))))) ? (((((/* implicit */unsigned long long int) max((4U), (((/* implicit */unsigned int) (unsigned short)18677))))) * (((7823697371196918662ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))) : (((/* implicit */unsigned long long int) 7U)));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_20 += ((/* implicit */short) ((((/* implicit */_Bool) 252201579132747776ULL)) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned int) arr_12 [i_2 + 1] [i_2 + 1] [i_0]))));
                            arr_15 [i_4] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) arr_9 [i_0] [(unsigned short)5] [(unsigned short)5] [i_2 + 2] [5U] [(unsigned char)2])))));
                            var_21 = ((/* implicit */_Bool) ((10623046702512632958ULL) & (((/* implicit */unsigned long long int) -774487821))));
                        }
                        for (long long int i_5 = 4; i_5 < 8; i_5 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) arr_5 [i_3]);
                            arr_19 [i_0] [(_Bool)1] [i_5] [(unsigned short)9] [i_0] [(unsigned short)5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_2 - 2] [i_2 - 2] [i_3] [i_5 - 3] [0] [i_5 + 2])) ? (((/* implicit */unsigned long long int) 2147483647)) : (arr_18 [i_0] [i_2 - 2] [i_2 - 2] [i_3] [i_5 - 3] [1] [i_5 + 1])))) ? (max((10623046702512632960ULL), (((/* implicit */unsigned long long int) 327968636)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
                        }
                        for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 2) 
                        {
                            arr_22 [i_0] [i_6] [i_0] [3] [6U] = ((/* implicit */unsigned int) arr_7 [0] [1LL] [4] [i_6]);
                            var_23 = ((/* implicit */int) min(((~((~(18194542494576803860ULL))))), (((((/* implicit */_Bool) (~(var_5)))) ? (min((18194542494576803840ULL), (((/* implicit */unsigned long long int) 4294967294U)))) : (((/* implicit */unsigned long long int) ((-5087126283743566716LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))))))))));
                            var_24 -= ((/* implicit */short) arr_4 [i_6]);
                        }
                        var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_2]))));
                        var_26 = ((/* implicit */int) ((long long int) -607904452));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                var_27 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 1920256445)), (1022ULL)));
                var_28 = ((/* implicit */long long int) (short)4313);
            }
            var_29 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) arr_3 [i_0])), (((((/* implicit */_Bool) (unsigned char)3)) ? (1U) : (((/* implicit */unsigned int) (-2147483647 - 1))))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(17U)))) ? (((/* implicit */int) ((short) (unsigned short)8))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0] [i_7] [i_0] [2] [i_0])) && (((/* implicit */_Bool) 3916576036545447946ULL))))))))));
            arr_28 [(signed char)0] [i_0] [i_0] = 3010637885U;
        }
        for (int i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((((/* implicit */unsigned int) -1070243685)) ^ (26U))) | ((~(arr_4 [8LL]))))))));
            arr_31 [i_9] [i_9] = ((/* implicit */unsigned char) ((252201579132747755ULL) + (((/* implicit */unsigned long long int) 607904455))));
        }
    }
    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            for (int i_12 = 1; i_12 < 8; i_12 += 3) 
            {
                for (int i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    {
                        arr_44 [i_10] [i_10] [i_10] [i_10] &= ((/* implicit */long long int) (+(526756696U)));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_13]))) / (max((((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34759))) : (2147481600U))), (((/* implicit */unsigned int) min((arr_12 [i_13] [i_12] [7]), (((/* implicit */int) arr_23 [i_10] [i_12] [i_13])))))))));
                    }
                } 
            } 
        } 
        arr_45 [i_10] = ((((/* implicit */_Bool) ((arr_10 [i_10] [i_10] [i_10] [(signed char)2] [i_10]) % (arr_20 [i_10] [i_10] [i_10] [i_10] [i_10])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 612112968333680959LL)) : (8121246002848038306ULL)))) ? (((/* implicit */unsigned long long int) 607904451)) : ((-(18194542494576803860ULL)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
    {
        arr_48 [i_14] [1] &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_16 [i_14] [i_14] [i_14] [i_14]))));
        arr_49 [i_14] [9LL] = ((/* implicit */unsigned long long int) 266338304U);
        var_32 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_14] [5] [4ULL] [i_14])) / (((/* implicit */int) (unsigned short)3481))))) ? (((((/* implicit */_Bool) -2031665806)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_4 [i_14]))) : (arr_14 [9U] [i_14] [4U] [i_14] [i_14])));
        var_33 = ((/* implicit */int) arr_29 [i_14]);
        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) >> (((arr_9 [i_14] [i_14] [6U] [i_14] [(_Bool)1] [i_14]) + (2358086989905013964LL)))))) ? (((/* implicit */unsigned long long int) (~(0U)))) : (((((/* implicit */unsigned long long int) arr_35 [i_14])) & (arr_7 [i_14] [(unsigned short)4] [i_14] [i_14]))))))));
    }
    for (unsigned short i_15 = 3; i_15 < 22; i_15 += 2) 
    {
        arr_52 [i_15] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))) >= (18446744073709551611ULL)))) >= (((/* implicit */int) var_2)))))) ^ (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)158)), (6997246018075330023ULL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)98))))) : ((+(-8421317673708178661LL)))))));
        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) min((var_8), (((/* implicit */unsigned int) arr_51 [i_15 + 1] [(_Bool)1])))))) ? (arr_51 [2U] [i_15]) : (((/* implicit */int) (!(arr_50 [i_15] [i_15 - 1])))))))));
        var_36 = ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */int) arr_50 [i_15] [i_15])) * (((/* implicit */int) var_1))))) - (((/* implicit */unsigned long long int) arr_51 [i_15] [i_15 + 1]))));
        var_37 = ((/* implicit */unsigned int) arr_50 [(unsigned char)19] [i_15 + 1]);
    }
    var_38 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_11)) / (min((((/* implicit */unsigned int) var_13)), (3440693312U)))));
}
