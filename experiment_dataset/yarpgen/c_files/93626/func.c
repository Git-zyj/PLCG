/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93626
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
    var_11 = var_6;
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1636392419U)) ? (1994261398U) : (4294967287U))))));
                        var_13 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) ((short) arr_5 [i_1] [2LL] [i_3]))) : (((((/* implicit */_Bool) 11460635515834063186ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [(signed char)8]))))))));
                        arr_10 [i_3] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */int) min((arr_4 [i_1] [i_1] [i_1]), (((/* implicit */long long int) (+(2147483647))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_0] [9] [i_0]))));
    }
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 2; i_5 < 14; i_5 += 1) 
        {
            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_6 [i_5 - 1] [i_5 - 1]), (((/* implicit */long long int) arr_9 [i_5] [i_5 + 1] [i_5] [(unsigned short)12] [i_5 + 1] [i_5 - 1]))))) ? (((/* implicit */unsigned long long int) 7U)) : (17ULL)));
            var_15 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_4] [i_5] [i_5])) ? (arr_4 [i_4] [i_5] [i_5]) : (arr_4 [i_4] [i_5] [i_5])))) != ((~(((((/* implicit */unsigned long long int) arr_13 [i_4])) | (arr_2 [i_4] [i_5])))))));
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_6 [i_6] [i_8])))))))));
                        arr_25 [i_7] = ((/* implicit */unsigned int) arr_16 [i_4] [i_8] [i_7]);
                        var_17 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(var_1)))) ? (((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7])) ? (arr_2 [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29040))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_15 [i_4] [i_4] [i_4])))))));
                        var_18 -= ((/* implicit */_Bool) (~(min((((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_7])), (-1204600334)))), (((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (arr_6 [i_4] [i_7])))))));
                    }
                } 
            } 
        } 
        var_19 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_21 [i_4] [i_4] [i_4])))) ? (arr_6 [i_4] [i_4]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (1783819646) : (((/* implicit */int) arr_1 [i_4])))))))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_9])) | (((/* implicit */int) arr_3 [i_12] [i_9] [i_9]))))) ? (arr_6 [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
                        arr_36 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)121))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_9] [i_9] [i_9] [i_9] [i_9])) ? (2147483647) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_13 [i_9])) ? (((/* implicit */unsigned long long int) arr_26 [i_9] [i_9])) : (var_4)))));
                    }
                    for (int i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        var_21 = ((/* implicit */_Bool) ((unsigned int) (short)25814));
                        /* LoopSeq 3 */
                        for (unsigned char i_14 = 2; i_14 < 14; i_14 += 2) /* same iter space */
                        {
                            var_22 *= ((/* implicit */unsigned int) (_Bool)1);
                            var_23 |= ((/* implicit */_Bool) (~(arr_39 [i_9] [i_10] [i_11] [i_14 + 1] [i_14])));
                            var_24 = ((/* implicit */unsigned int) arr_34 [i_9] [i_11] [2] [i_11]);
                        }
                        for (unsigned char i_15 = 2; i_15 < 14; i_15 += 2) /* same iter space */
                        {
                            arr_43 [i_9] = ((/* implicit */_Bool) arr_28 [i_15]);
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (!(((((/* implicit */_Bool) arr_39 [i_9] [i_10] [i_11] [(unsigned short)5] [i_15])) && (((/* implicit */_Bool) (signed char)-96)))))))));
                            var_26 ^= ((/* implicit */unsigned short) (short)25814);
                        }
                        for (long long int i_16 = 0; i_16 < 16; i_16 += 2) 
                        {
                            var_27 &= arr_27 [i_9];
                            var_28 -= ((/* implicit */unsigned char) ((_Bool) -27LL));
                            var_29 = ((/* implicit */unsigned char) arr_8 [(_Bool)1] [(unsigned short)3] [(signed char)7]);
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */int) arr_0 [i_16])) : (((/* implicit */int) (signed char)-109))));
                        }
                    }
                    var_31 = (_Bool)1;
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((arr_17 [i_9] [i_9] [i_11]) - ((~(((/* implicit */int) var_9)))))))));
                }
            } 
        } 
        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_9] [i_9] [i_9] [(_Bool)1] [(short)13] [i_9])) ? (((/* implicit */int) var_8)) : (arr_40 [i_9] [i_9] [i_9] [11LL] [i_9] [11LL])));
        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8)))))));
    }
}
