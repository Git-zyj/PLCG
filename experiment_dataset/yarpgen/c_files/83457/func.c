/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83457
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
    var_11 += ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((unsigned int) 1138962096U)), (4294967284U)))) >= (min((var_4), (((/* implicit */long long int) 1138962103U))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                arr_9 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (signed char)-78);
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)78)) && (((/* implicit */_Bool) (unsigned char)12))));
            }
            for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        {
                            var_13 = ((arr_12 [i_4] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))));
                            var_14 = ((/* implicit */signed char) ((var_8) != (((/* implicit */int) (short)22761))));
                        }
                    } 
                } 
                var_15 -= ((/* implicit */signed char) (+(var_2)));
            }
            var_16 = ((/* implicit */short) var_10);
        }
        var_17 = ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((short) min((arr_10 [i_0] [i_6] [i_6] [i_7]), (((/* implicit */unsigned long long int) var_8)))));
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((8388607U), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78))) : (331172331U)))));
                    var_19 += (+(((/* implicit */int) max(((signed char)-79), (((/* implicit */signed char) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        var_20 = ((/* implicit */int) (_Bool)1);
                        var_21 = ((/* implicit */long long int) (~(min((min((((/* implicit */unsigned int) (short)27521)), (arr_14 [i_0] [i_6] [i_7] [i_8] [i_8]))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_10)))))))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) 3677365608U);
                        var_22 += ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) && ((_Bool)1)))), (((int) var_4))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        for (int i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((min((2123793673U), (((/* implicit */unsigned int) (_Bool)1)))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)49)))));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (4294967295U)))) && (((/* implicit */_Bool) min((1296840048U), (((/* implicit */unsigned int) var_3)))))));
                                var_25 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) 2767203792U)), (4750518083047787575LL)))) && (((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_21 [i_10] [i_10] [i_9] [i_7] [i_6] [i_0])), (arr_29 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))));
                                var_26 = ((/* implicit */_Bool) max((((/* implicit */long long int) max((min((4161536U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) var_1))))), (((long long int) min((((/* implicit */int) var_3)), (var_7))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_12 = 0; i_12 < 15; i_12 += 3) 
        {
            for (unsigned char i_13 = 0; i_13 < 15; i_13 += 2) 
            {
                for (unsigned char i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 1) 
                        {
                            var_27 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((min((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1)))), ((-(var_4)))))), (((max((var_2), (((/* implicit */unsigned long long int) arr_43 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))) - (arr_31 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))));
                            var_28 *= ((((min((((/* implicit */unsigned int) var_8)), (4290805760U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_11] [i_12] [i_13] [i_14] [i_14] [i_15])) && (((/* implicit */_Bool) 2767203798U)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8)))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (arr_26 [i_11] [i_12] [i_13] [i_14])))), (((var_9) >> (((var_1) - (66456445))))))));
                        }
                        var_29 = ((/* implicit */unsigned char) (~(max((((((/* implicit */unsigned long long int) 1974792343U)) | (10651931048260796876ULL))), (max((var_9), (((/* implicit */unsigned long long int) arr_16 [i_11]))))))));
                    }
                } 
            } 
        } 
        var_30 *= min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4215987120U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_11] [i_11] [i_11] [i_11]))) : (var_6))));
        var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
        /* LoopNest 3 */
        for (unsigned int i_16 = 0; i_16 < 15; i_16 += 4) 
        {
            for (unsigned char i_17 = 0; i_17 < 15; i_17 += 1) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 4) 
                {
                    {
                        var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 440956146413958943ULL))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 1974792370U))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (2767203792U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)42))))), (((/* implicit */unsigned int) (((_Bool)1) && ((_Bool)0)))))))));
                        var_34 = ((/* implicit */signed char) (-(var_7)));
                    }
                } 
            } 
        } 
    }
}
