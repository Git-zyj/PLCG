/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73629
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
    for (short i_0 = 1; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_1)))));
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((min(((~(-1275186808737508776LL))), (((arr_2 [i_0]) & (var_4))))) & (arr_2 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 12; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (signed char i_3 = 2; i_3 < 12; i_3 += 4) 
            {
                for (signed char i_4 = 3; i_4 < 11; i_4 += 4) 
                {
                    {
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4LL)));
                        arr_12 [i_1] [i_1] [i_3 - 2] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1 + 1]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
        {
            arr_17 [4U] [i_5] [(unsigned char)10] |= ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                arr_22 [i_5] [i_1] [6LL] = ((/* implicit */short) ((var_9) ^ (arr_16 [i_1 + 1] [i_5])));
                arr_23 [i_1] [6LL] = var_4;
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    for (long long int i_8 = 3; i_8 < 12; i_8 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) -26LL);
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7]))) * (arr_16 [i_5] [i_5]))) * (var_0))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_16 |= ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_5] [i_6] [i_9]))));
                    arr_33 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_1 - 1] [i_5] [i_9]))));
                }
                for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    var_17 = ((/* implicit */_Bool) (~(arr_21 [i_1 + 1] [i_1 + 1] [i_1 - 1])));
                    var_18 ^= ((/* implicit */unsigned char) 1036979949146812953LL);
                    var_19 = ((/* implicit */unsigned int) (+(((arr_4 [i_1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)58)))))));
                }
                for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_8 [i_1] [i_5] [i_6]))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [2U] [i_1 + 1] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_13 [i_1] [i_1 + 1] [i_6])));
                }
            }
            for (short i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                arr_44 [i_1] [i_1] [i_1] [i_12] = (unsigned char)2;
                /* LoopSeq 2 */
                for (unsigned int i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1036979949146812953LL)) || (((/* implicit */_Bool) arr_16 [i_1 + 1] [i_1])))))));
                    arr_49 [(short)7] [i_1] [i_13] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)253)) % (((/* implicit */int) var_8))));
                }
                for (unsigned char i_14 = 3; i_14 < 10; i_14 += 4) 
                {
                    var_23 += ((/* implicit */long long int) ((((/* implicit */int) arr_30 [i_1 + 1] [i_14 - 3])) != (((/* implicit */int) var_8))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) ((_Bool) arr_10 [i_1] [i_1] [i_12])))));
                    arr_54 [i_1] [11U] [i_12] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_1] [i_1 + 1] [i_14 + 1])) ? (arr_42 [i_1 + 1] [i_1 - 1] [i_14 - 2] [i_14 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    arr_55 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((arr_51 [i_1 + 1] [i_14 + 3] [i_14 + 3] [i_12]) ^ (-4LL)));
                }
                arr_56 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) && (((/* implicit */_Bool) ((signed char) var_3)))));
            }
            arr_57 [i_1] [i_1] [(_Bool)1] = -1036979949146812949LL;
            var_25 = ((/* implicit */short) var_6);
            arr_58 [i_1] = ((/* implicit */long long int) var_0);
        }
        for (unsigned int i_15 = 0; i_15 < 13; i_15 += 1) /* same iter space */
        {
            arr_62 [i_1] [(short)12] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_15] [i_15]))) + (-1036979949146812943LL))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_1))))));
            var_26 = ((/* implicit */_Bool) ((arr_7 [i_1]) + (arr_7 [i_1])));
            var_27 = ((((/* implicit */_Bool) arr_40 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : ((~(arr_21 [i_15] [i_15] [i_1]))));
            arr_63 [i_1] [i_1] [i_1] = ((long long int) ((unsigned char) var_10));
        }
        for (unsigned int i_16 = 0; i_16 < 13; i_16 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_60 [i_16] [i_1 + 1] [i_1 - 1]))));
            var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
            arr_67 [i_1 + 1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
        }
    }
    var_30 = ((/* implicit */unsigned char) max((-3432278167439423385LL), (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_10)))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)-4011)) * (((/* implicit */int) var_6))))))))));
    var_31 *= max((((/* implicit */long long int) var_6)), (((long long int) (short)-4011)));
    var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) 3827231831U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))))));
}
