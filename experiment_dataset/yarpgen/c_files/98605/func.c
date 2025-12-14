/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98605
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
    var_18 = var_5;
    var_19 -= ((/* implicit */unsigned long long int) var_7);
    var_20 = ((/* implicit */short) var_2);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) (~((+(13176972587095765355ULL)))));
        arr_3 [i_0] = ((/* implicit */_Bool) (-(((unsigned long long int) arr_2 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) min((max((var_3), (((/* implicit */unsigned long long int) 1825484285U)))), (((/* implicit */unsigned long long int) (~(86780829)))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (short)-18343)) ? (((/* implicit */int) (short)18323)) : (((/* implicit */int) (short)-18346)))));
                var_22 = ((/* implicit */int) ((_Bool) (unsigned short)20862));
                arr_13 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (((long long int) (short)-18355))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 2; i_3 < 14; i_3 += 3) 
                {
                    for (unsigned short i_4 = 1; i_4 < 15; i_4 += 3) 
                    {
                        {
                            arr_19 [i_4 + 1] [i_1] [i_0] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) (unsigned short)60699);
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */unsigned long long int) 4294967295U)) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18337))) / (5368855100411589779ULL)))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                var_24 ^= ((/* implicit */_Bool) 17894182194057464155ULL);
                var_25 += ((/* implicit */short) ((unsigned long long int) (unsigned char)142));
                arr_22 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */signed char) 134217600ULL);
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) (-(var_2)))) : (max((4839990061954487088ULL), (((/* implicit */unsigned long long int) var_13)))))))))));
                            arr_30 [i_7] [i_5] [i_0 - 1] [i_5] [i_0 - 1] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0 + 1] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0 - 1] [i_5] [i_0]))) : (var_9))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (short i_9 = 3; i_9 < 14; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_0))));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((signed char) (short)-18322)))));
                        }
                    } 
                } 
                arr_38 [i_0] [i_0] [i_0 - 1] [i_0] = ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) var_15)));
            }
            var_29 += ((/* implicit */short) max((((((/* implicit */_Bool) max((var_3), (17894182194057464157ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)27933))) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_11))))), (((long long int) arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1]))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
        {
            var_30 += (~(((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_0 + 1] [8U])) && (((/* implicit */_Bool) 2040ULL))))));
            arr_41 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_17))));
            /* LoopNest 2 */
            for (long long int i_12 = 3; i_12 < 14; i_12 += 4) 
            {
                for (unsigned int i_13 = 1; i_13 < 14; i_13 += 3) 
                {
                    {
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) var_6))));
                        arr_47 [i_13 - 1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) -2147483619);
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((unsigned short) arr_26 [i_0] [i_11] [i_12] [(unsigned short)8]))));
                    }
                } 
            } 
        }
        arr_48 [i_0] = ((/* implicit */signed char) min(((short)-18360), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_0 - 1] [i_0] [i_0 - 1] [i_0]))))))))));
    }
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 23; i_14 += 4) 
    {
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) 121254019U))));
        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((short) arr_50 [i_14] [i_14])))));
        var_35 = ((/* implicit */unsigned long long int) arr_49 [i_14]);
    }
    for (unsigned short i_15 = 0; i_15 < 15; i_15 += 1) 
    {
        var_36 ^= arr_45 [i_15] [8ULL] [i_15] [i_15] [i_15] [i_15];
        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)8)))))));
        var_38 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) arr_43 [i_15] [i_15] [0LL])) : (6009337230098857661ULL)))) ? (((var_5) - (((/* implicit */unsigned long long int) var_9)))) : (arr_4 [i_15] [2U])))));
        var_39 -= var_16;
    }
    var_40 *= ((/* implicit */short) ((long long int) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
}
