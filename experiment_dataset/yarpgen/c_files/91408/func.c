/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91408
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) << (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_2 [i_0])))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (!((_Bool)1))))))) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_21 -= ((/* implicit */signed char) (~(((/* implicit */int) (!(arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */long long int) (~(min((max((((/* implicit */int) (_Bool)1)), (var_16))), (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 2; i_2 < 8; i_2 += 3) /* same iter space */
        {
            var_22 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_9 [i_1 - 1])))) ? (min((arr_9 [i_1 - 1]), (arr_9 [i_1 - 1]))) : (arr_9 [i_1 - 1])));
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            arr_18 [i_1] [i_3] [i_3] [9ULL] [(unsigned char)7] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_1 - 1]))));
                            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_17 [i_3]))));
                            arr_19 [i_3] [i_3] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (-(arr_5 [3])))) ? (((/* implicit */int) max((arr_12 [i_2 + 2] [i_2 + 2]), (((/* implicit */short) var_5))))) : (((/* implicit */int) (_Bool)1))))));
                            arr_20 [i_3] [(_Bool)1] [i_3] [i_4] [i_5] = ((/* implicit */int) (_Bool)1);
                        }
                    } 
                } 
            } 
        }
        for (long long int i_6 = 2; i_6 < 8; i_6 += 3) /* same iter space */
        {
            arr_23 [i_1] [i_1] |= (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_1 - 1] [(short)0]))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= ((-9223372036854775807LL - 1LL)))))) : (max((((/* implicit */long long int) arr_13 [(short)3] [i_1 - 1] [4U] [(short)2])), (9223372036854775807LL))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : ((-9223372036854775807LL - 1LL)))) : (((((/* implicit */_Bool) arr_12 [(unsigned short)3] [i_6 + 1])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18691))))))));
            arr_24 [i_1] [(unsigned char)6] = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(unsigned char)8] [(unsigned char)8])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)123)))))))), ((!(((/* implicit */_Bool) arr_9 [i_1 - 1]))))));
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_24 |= ((/* implicit */unsigned char) ((max((var_3), (((/* implicit */long long int) (_Bool)1)))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))) >= (max((((/* implicit */unsigned long long int) arr_17 [i_7])), (var_4)))))))));
                        var_25 = ((/* implicit */short) arr_2 [i_8]);
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (~(arr_11 [i_1 - 1] [i_6 - 2]))))));
                    }
                } 
            } 
        }
        arr_31 [4U] = ((/* implicit */long long int) ((short) var_11));
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                for (unsigned int i_11 = 3; i_11 < 8; i_11 += 1) 
                {
                    {
                        arr_39 [i_1] [i_11] [i_10] [i_11] [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_6 [i_1] [3ULL])))))))));
                        /* LoopSeq 2 */
                        for (signed char i_12 = 3; i_12 < 9; i_12 += 3) 
                        {
                            arr_42 [i_11] [i_11] = ((unsigned int) (~(arr_8 [i_1 - 1])));
                            var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) ((signed char) var_8))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            arr_45 [6U] [(unsigned char)1] [i_10] [i_11] [2ULL] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 - 1] [i_11] [(unsigned char)1] [i_1 - 1]))) - (2564407289U)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) != (-576460752303423488LL)))) : (((/* implicit */int) var_8)));
                            arr_46 [4ULL] [3U] [0U] [3U] [i_11] [(short)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_1 - 1] [i_1 - 1] [i_11] [i_11 + 2] [i_13])) ? (arr_8 [i_1 - 1]) : (((/* implicit */int) arr_38 [i_1 - 1] [i_1 - 1] [i_11] [i_11 + 1] [i_11 - 1]))));
                            arr_47 [i_11] [i_11] [(unsigned char)9] [(unsigned char)3] [7ULL] = ((/* implicit */unsigned char) (~(var_12)));
                            var_28 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_11 + 2]))));
                        }
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */_Bool) var_3);
}
