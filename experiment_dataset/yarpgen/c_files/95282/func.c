/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95282
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (70374881783371980ULL)));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */_Bool) (unsigned short)57459);
            arr_7 [i_1] = ((/* implicit */unsigned short) ((_Bool) -5293351803495087370LL));
            var_21 = ((((/* implicit */_Bool) var_17)) ? (arr_3 [i_0]) : (((((/* implicit */int) arr_0 [i_0 + 3] [i_1 + 1])) + ((-(((/* implicit */int) (signed char)109)))))));
        }
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            var_22 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 2]))));
            arr_10 [i_0] [i_0 + 4] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5293351803495087370LL))))) : (-220076582)));
        }
        for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        {
                            var_23 -= ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned long long int) arr_18 [i_0 + 3] [i_0 + 4] [i_6] [i_0 - 1] [i_0])) / (((unsigned long long int) arr_14 [i_0 + 4] [i_3] [i_5] [i_6])))));
                            var_24 = ((/* implicit */unsigned short) 5293351803495087357LL);
                            arr_22 [i_6] [i_4] [i_4] [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned short) (signed char)-51));
                        }
                    } 
                } 
            } 
            arr_23 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6182005065735658674LL)) ? (((((/* implicit */_Bool) (unsigned short)63023)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 3] [i_3]))) : (arr_5 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
        }
        for (int i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            arr_27 [i_0 + 3] = ((/* implicit */unsigned short) var_3);
            arr_28 [i_0] [i_0 + 2] [i_0] = ((/* implicit */unsigned short) (-(((long long int) arr_4 [(unsigned char)2] [i_7] [(short)2]))));
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((unsigned char) ((unsigned long long int) arr_8 [i_0 + 4]))))));
        }
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            for (int i_9 = 2; i_9 < 10; i_9 += 2) 
            {
                for (unsigned short i_10 = 4; i_10 < 11; i_10 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_26 = var_17;
                            var_27 -= ((/* implicit */signed char) 16127508882947749911ULL);
                            var_28 = ((/* implicit */int) (signed char)80);
                        }
                        arr_38 [8LL] [i_8] [i_9 + 3] [0LL] [i_9 + 3] [i_10 - 1] = ((/* implicit */short) (unsigned short)57443);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 14; i_12 += 1) 
                        {
                            var_29 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)69))));
                            var_30 = ((/* implicit */signed char) ((long long int) (unsigned char)249));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_0 + 4] [i_9 - 2])) <= (((/* implicit */int) arr_16 [i_0 - 1] [i_9 + 3]))));
                            var_32 = ((/* implicit */short) (+(arr_18 [i_10 - 1] [i_9 + 4] [i_12] [i_0 + 3] [i_0 + 3])));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 1) 
                        {
                            arr_44 [i_13] [0] [i_9 + 4] [i_9 + 4] [0LL] [i_9 + 4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5293351803495087388LL)) ? (-5293351803495087371LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            arr_45 [i_0 + 2] [i_13] [i_13] = ((short) ((unsigned short) arr_41 [i_0 + 2] [i_13] [i_8] [i_8] [i_9 - 2]));
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (signed char)-48))));
                        }
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_50 [i_9] [2ULL] [i_9 - 2] [i_10 + 1] [10] &= ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (unsigned char)30))) / (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned char)249)))))));
                            var_34 |= (+(((/* implicit */int) ((((/* implicit */_Bool) var_19)) || ((_Bool)1)))));
                            arr_51 [i_14] [13LL] [i_10 + 1] [i_14] = ((/* implicit */long long int) (+(((/* implicit */int) (short)16665))));
                            var_35 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)251)) <= (((/* implicit */int) (signed char)-80))));
                        }
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) var_16))));
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 14; i_15 += 2) 
        {
            for (long long int i_16 = 0; i_16 < 14; i_16 += 3) 
            {
                {
                    var_37 ^= ((/* implicit */unsigned long long int) ((short) var_16));
                    arr_56 [i_0 + 1] [i_15] [i_15] [i_16] = (unsigned char)198;
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        for (short i_18 = 1; i_18 < 14; i_18 += 4) 
        {
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                {
                    arr_65 [i_18] [i_19] = ((/* implicit */long long int) ((unsigned char) ((unsigned short) arr_64 [i_18 + 1] [i_18 + 3] [i_19] [i_18 + 2])));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_20 = 0; i_20 < 18; i_20 += 4) 
                    {
                        var_38 += ((/* implicit */short) ((((/* implicit */_Bool) (short)-16690)) ? (-7924045992867303024LL) : (5293351803495087365LL)));
                        var_39 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_66 [i_18 + 4] [i_18 + 3] [i_18 + 3])) ? (((/* implicit */int) arr_66 [i_18 + 2] [i_18 + 2] [i_18 + 2])) : (((/* implicit */int) arr_66 [i_18 + 1] [i_18 + 4] [i_18 + 3]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_21 = 0; i_21 < 18; i_21 += 1) 
                    {
                        var_40 -= ((/* implicit */signed char) (-((-(2319235190761801705ULL)))));
                        var_41 = ((/* implicit */unsigned char) max(((+(arr_64 [i_17] [(unsigned char)13] [i_19] [i_19]))), (((/* implicit */int) ((signed char) (_Bool)0)))));
                        var_42 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((arr_63 [(unsigned short)6] [i_18] [(unsigned short)6]) >= (arr_63 [8U] [i_17] [8U])))), (((((/* implicit */_Bool) -5293351803495087363LL)) ? (16127508882947749897ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11648)))))));
                        var_43 = ((/* implicit */unsigned char) max((arr_58 [8LL] [i_18]), (((/* implicit */signed char) ((_Bool) (unsigned short)0)))));
                        var_44 = ((/* implicit */long long int) (unsigned char)84);
                    }
                }
            } 
        } 
    } 
    var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) var_15))));
    var_46 += ((/* implicit */short) var_2);
}
