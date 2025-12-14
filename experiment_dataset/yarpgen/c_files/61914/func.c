/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61914
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [(unsigned char)1] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (4517910623160800041LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)5)))))) ? ((~(arr_1 [i_0] [i_0]))) : (((var_18) ? (arr_1 [i_0] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) + (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)-20689)))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [0ULL]))))))) : ((~(((arr_0 [(unsigned short)8]) ? (arr_1 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 1; i_2 < 13; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (short i_4 = 1; i_4 < 14; i_4 += 2) 
                {
                    {
                        arr_14 [i_1 - 2] [i_2 + 2] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) max((max(((-(((/* implicit */int) (short)4783)))), (((/* implicit */int) ((arr_12 [i_1] [i_2] [(unsigned char)4] [i_4] [i_3]) >= (arr_12 [(_Bool)1] [i_2] [7U] [i_2] [i_2])))))), (((/* implicit */int) ((((/* implicit */_Bool) ((var_16) ? (arr_4 [i_1] [i_2 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_4] [i_2] [15ULL] [i_3] [2ULL])))))) || ((!(((/* implicit */_Bool) var_4)))))))));
                        var_20 ^= ((/* implicit */unsigned long long int) ((arr_1 [2LL] [2LL]) << ((((+(((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_12 [i_1] [(unsigned char)4] [i_1] [i_1] [i_1]))))) - (4294962514U)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            arr_19 [i_5] [i_6] = ((/* implicit */_Bool) ((((((var_18) ? ((~(((/* implicit */int) arr_17 [i_6])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) arr_16 [i_6])))))) + (2147483647))) << ((((((~(((/* implicit */int) arr_17 [(unsigned short)1])))) + (31))) - (4)))));
            arr_20 [10U] [10U] [i_6] |= ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_18 [i_6])) | (((/* implicit */int) arr_15 [i_5]))))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_5]))))) ? (((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) arr_18 [i_5]))))) ? ((+(var_15))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_5]))))))) : (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (short)20688)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [16U])) : (((/* implicit */int) arr_18 [i_5])))))))));
        }
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) arr_16 [i_5]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [(signed char)8] [(unsigned short)1]))))) : (((/* implicit */int) arr_21 [i_7] [i_5]))))));
            arr_23 [i_5] [(unsigned char)18] [i_7] = ((/* implicit */unsigned long long int) var_3);
        }
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
        {
            arr_28 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) (unsigned short)23904))));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)12)))))));
        }
        arr_29 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)20688)) ? (((/* implicit */int) (short)20698)) : (((/* implicit */int) (short)-20689))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
    {
        var_24 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_9]))));
        arr_34 [(signed char)16] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (short)20696))))))) / (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))), (((((/* implicit */_Bool) arr_32 [(signed char)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_9]))) : (arr_25 [i_9])))))));
    }
    var_25 = ((((((((/* implicit */_Bool) (short)4786)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)150))))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (((((var_16) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_14))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_6))))))));
    var_26 |= ((/* implicit */unsigned int) (((((~(var_19))) ^ (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_15))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
}
