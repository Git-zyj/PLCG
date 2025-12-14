/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87628
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
    var_11 = ((/* implicit */unsigned short) ((max(((+(((/* implicit */int) var_10)))), (((61764321) | (((/* implicit */int) var_0)))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = var_2;
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_2 [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_6))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) 5U)) : (arr_5 [i_1]))) ^ (var_7))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) 20U)) : (arr_5 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14568)))))) : (((((/* implicit */unsigned long long int) arr_6 [i_1])) | (arr_5 [i_1])))))));
        var_12 = ((/* implicit */int) (((-(((/* implicit */int) ((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113)))))))) != (((/* implicit */int) arr_7 [i_1]))));
        arr_9 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) min((((unsigned char) arr_7 [i_1])), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_5 [i_1])))))))) == ((+(((/* implicit */int) var_3))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_3 = 3; i_3 < 18; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                for (short i_5 = 2; i_5 < 20; i_5 += 4) 
                {
                    {
                        var_13 ^= ((/* implicit */signed char) ((((/* implicit */int) (short)11395)) << (((/* implicit */int) ((35993612646875136LL) >= (((/* implicit */long long int) 4294967292U)))))));
                        arr_19 [i_2] [i_2] [i_3] [i_4] [i_3] = arr_15 [i_3];
                        var_14 = ((/* implicit */signed char) arr_7 [i_2]);
                        arr_20 [i_2] [i_2] [i_3] [i_3] [i_4] [i_2] = ((/* implicit */_Bool) arr_16 [i_3 + 1] [i_3] [i_4] [i_3]);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_6 = 4; i_6 < 19; i_6 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_6 - 1] [i_6 - 3] [i_6 - 4] [i_6 - 3])) ? (((/* implicit */int) ((unsigned char) arr_12 [i_2]))) : (((/* implicit */int) arr_18 [i_6 - 1] [i_6] [i_6] [i_6])))))));
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_7]))) ^ (var_7)))));
                        arr_29 [i_2] [i_6] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)0))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                for (short i_10 = 1; i_10 < 19; i_10 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                        {
                            arr_37 [i_11] [i_6] [i_9] [i_10] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)53662))))) >= (((long long int) var_7))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_27 [i_2] [i_2] [i_2] [i_9] [i_10] [i_11]))) ? (((/* implicit */int) arr_28 [i_6 - 3] [i_10] [i_10] [i_10] [i_10] [i_10 - 1])) : (((/* implicit */int) (unsigned short)38618))));
                            arr_38 [i_2] [i_6] [i_9] [i_9] [i_6] [i_9] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) arr_30 [i_10])))) : ((-(((/* implicit */int) var_6))))));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2] [i_6 + 2] [i_6] [i_10 - 1] [i_10 - 1] [i_10 - 1]))) / ((+(4294967276U))))))));
                            var_19 = ((/* implicit */_Bool) arr_13 [i_2] [i_6] [i_9]);
                        }
                        for (unsigned short i_12 = 1; i_12 < 18; i_12 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (arr_32 [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_32 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (((4294967295U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_6] [i_9] [i_12]))))) : (((/* implicit */unsigned int) ((1248504173) | (((/* implicit */int) (signed char)-122)))))));
                            arr_41 [i_9] [i_12] [i_9] [i_10] [i_12] = ((/* implicit */_Bool) arr_31 [i_2] [i_6] [i_12]);
                        }
                        for (unsigned int i_13 = 1; i_13 < 19; i_13 += 4) 
                        {
                            arr_44 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_2] [i_2] [i_2])) >= (((((/* implicit */_Bool) arr_31 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_24 [i_2] [i_2])) : (((/* implicit */int) var_10))))));
                            arr_45 [i_2] [i_6] [i_9] [i_9] [i_10] [i_13] = ((/* implicit */unsigned short) arr_15 [i_9]);
                        }
                        arr_46 [i_9] [i_9] [i_2] [i_2] = ((/* implicit */short) (+(((arr_25 [i_2] [i_10] [i_9] [i_10]) ? (arr_6 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                    }
                } 
            } 
            arr_47 [i_2] [i_2] [i_6] = ((/* implicit */unsigned short) ((61764321) / (61764323)));
        }
        for (unsigned short i_14 = 1; i_14 < 20; i_14 += 1) 
        {
            arr_52 [i_14] [i_14] [i_2] = ((/* implicit */unsigned int) arr_33 [(signed char)4] [i_14]);
            var_21 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_11 [i_14])) ^ (((/* implicit */int) (_Bool)1)))));
            arr_53 [i_14] = ((/* implicit */signed char) ((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_14]) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (20U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_22 = arr_42 [i_2] [i_2];
            var_23 = ((((((/* implicit */int) var_3)) >= (((/* implicit */int) var_2)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_54 [i_2] [i_2] [i_2])) / (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2]))))) : (((long long int) (_Bool)0)));
            var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)20994)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_2] [i_15]))) : (arr_5 [i_15]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(signed char)4])))));
            arr_58 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (short)8039);
        }
        arr_59 [i_2] = ((/* implicit */int) (((!(((/* implicit */_Bool) 3762035745U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((unsigned long long int) arr_24 [i_2] [i_2]))));
        var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3U)) ? (20U) : (((/* implicit */unsigned int) -61764327)))) + (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
    }
}
