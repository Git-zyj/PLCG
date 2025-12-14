/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72077
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
    var_10 += ((/* implicit */unsigned long long int) var_6);
    var_11 |= ((/* implicit */unsigned int) var_6);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0])))) | (max((((/* implicit */int) arr_1 [i_0 - 2])), (var_7)))))) : ((-(arr_0 [i_0 + 1] [i_0 + 2]))))))));
        var_13 = ((/* implicit */short) arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) ((((long long int) arr_3 [i_0 - 1])) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0 + 1] [i_0 + 2])))));
                        var_15 = ((/* implicit */unsigned long long int) var_1);
                        arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1 - 1] [i_0 + 2] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)10] [i_3])) || (((/* implicit */_Bool) var_1)))))) : (arr_6 [i_0] [i_1 - 1] [i_1 - 1] [i_3] [i_2]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            var_16 -= ((/* implicit */unsigned int) var_2);
            arr_11 [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0)))) + (((/* implicit */int) (signed char)-11))));
        }
        for (unsigned char i_5 = 2; i_5 < 11; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 1; i_6 < 11; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    {
                        arr_20 [6LL] [i_7] [i_7] [i_0 - 2] = ((/* implicit */short) var_0);
                        var_17 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (arr_12 [i_7] [i_7]))))) >= (var_8)));
                    }
                } 
            } 
            arr_21 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) (signed char)-11)) * (((/* implicit */int) var_6)))), (arr_16 [i_0] [i_5])))) ? (((((/* implicit */int) (signed char)10)) + (((/* implicit */int) (signed char)-11)))) : (var_7)));
        }
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            var_18 -= ((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) (-((-(var_2))))))));
            arr_25 [i_0] = arr_5 [i_0] [i_8] [i_0];
            arr_26 [i_0] [(signed char)3] = ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) arr_14 [i_0 + 1] [i_0 + 2])), (var_6))))));
            var_19 &= ((/* implicit */unsigned int) ((long long int) arr_13 [i_0 + 2] [i_0 - 2] [i_0 - 2]));
        }
        arr_27 [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) (-((((~(((/* implicit */int) var_1)))) & ((~(((/* implicit */int) var_3))))))));
    }
    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_29 [i_9])), (((long long int) arr_29 [i_9]))));
        arr_30 [i_9] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_28 [i_9])) ? (((/* implicit */int) arr_29 [i_9])) : (((/* implicit */int) arr_29 [i_9]))))));
        arr_31 [i_9] [i_9] = var_9;
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_3))));
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) != (((/* implicit */int) ((((((/* implicit */_Bool) arr_35 [i_11] [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)15)))) == (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_29 [i_9]))))))))));
                    arr_36 [i_9] [i_10] [i_10] [i_9] = ((/* implicit */unsigned short) ((short) ((long long int) ((((/* implicit */int) var_6)) >= (arr_34 [i_11] [i_11] [i_11] [i_9])))));
                    /* LoopSeq 3 */
                    for (unsigned char i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (signed char)-11))));
                        var_24 = var_0;
                    }
                    for (unsigned char i_13 = 3; i_13 < 20; i_13 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) max((((arr_35 [i_9] [i_13 + 2] [i_11] [i_13]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (arr_35 [(unsigned short)18] [i_13 + 2] [i_11] [(unsigned short)18])));
                        var_26 = ((/* implicit */long long int) (signed char)15);
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)34))))) - ((+(arr_32 [i_10] [i_11] [i_11])))))))));
                        var_28 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_35 [i_13 - 3] [(unsigned short)9] [i_9] [i_13 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_38 [i_13 - 3] [i_13] [i_13] [i_13 + 2] [i_13 + 1] [i_13]))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_14 = 3; i_14 < 20; i_14 += 1) /* same iter space */
                    {
                        var_29 ^= ((/* implicit */unsigned short) ((arr_42 [i_10] [i_14 + 2] [i_14] [i_14 + 1] [i_14 - 1]) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_29 [i_11])))))));
                        arr_44 [i_9] [i_9] [i_11] [i_14] = ((/* implicit */unsigned short) ((var_9) | (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_10] [i_10] [i_11])))));
                    }
                    var_30 = ((/* implicit */short) (~(arr_42 [i_9] [i_10] [i_11] [i_11] [i_10])));
                    arr_45 [i_9] [i_9] [(_Bool)1] [i_11] = ((/* implicit */unsigned int) arr_41 [i_9] [i_10] [i_10]);
                }
            } 
        } 
    }
    var_31 *= ((/* implicit */short) var_3);
}
