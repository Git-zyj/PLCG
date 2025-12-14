/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60199
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned long long int) var_7);
                    arr_8 [i_0] [i_2] = ((/* implicit */short) (-(min((arr_4 [i_2 + 4] [i_0] [i_2 + 4]), (arr_4 [i_2 + 1] [i_1] [i_2 + 1])))));
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_9)))))))))));
    }
    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
    {
        var_13 += ((((((/* implicit */_Bool) arr_10 [i_3 + 2])) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3 + 2])) || (((/* implicit */_Bool) arr_10 [i_3 + 2]))))) : ((+(((/* implicit */int) arr_10 [i_3 + 2])))));
        arr_11 [i_3] = ((/* implicit */short) var_5);
    }
    for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_13 [i_4])) ? ((+(var_11))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4]))))), ((+((-9223372036854775807LL - 1LL)))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (short i_6 = 1; i_6 < 19; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    {
                        arr_23 [i_4] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) (~(arr_22 [i_4] [i_5] [(signed char)19] [i_6 + 1] [i_7])));
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            arr_28 [i_4] [i_5] [i_6] [i_6] [i_8] = ((/* implicit */short) ((signed char) arr_25 [i_4] [i_5 + 2] [i_6 - 1] [i_5 + 2] [i_8] [i_5]));
                            arr_29 [i_4] [i_5] [(unsigned char)8] [i_7] [(unsigned char)8] [i_6] = ((/* implicit */signed char) (+(min((2492505477U), (((/* implicit */unsigned int) var_7))))));
                            var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2492505475U)) ? (2492505477U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)77)), (arr_13 [i_7])))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_6] [i_9])) ? (arr_19 [i_5 + 1]) : (((/* implicit */unsigned long long int) (-(arr_24 [i_5 + 4] [i_5] [i_5 + 3] [i_5 + 4] [i_6] [i_7]))))));
                            var_17 ^= ((/* implicit */int) var_5);
                            var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_6 + 1] [i_6] [i_6])) ? (((/* implicit */int) arr_27 [i_9] [i_7] [i_6 + 3] [i_6] [i_5])) : (((/* implicit */int) var_9))))));
                        }
                        var_19 = ((/* implicit */int) (~((~(var_2)))));
                    }
                } 
            } 
            arr_32 [i_4] [i_4] [(_Bool)1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)113)) ? (-5786901231633441533LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)14505)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_27 [i_4] [i_4] [i_5] [i_5] [i_5]))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
        {
            var_21 = ((/* implicit */long long int) arr_34 [i_4] [i_10]);
            arr_37 [i_4] = ((/* implicit */signed char) ((arr_15 [i_4]) ^ (arr_15 [i_4])));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((max((arr_35 [i_4] [i_10]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_33 [i_10])), (var_5)))))), (((/* implicit */unsigned long long int) (~(arr_24 [i_10] [i_4] [i_10] [i_10] [i_4] [i_4])))))))));
        }
        for (int i_11 = 0; i_11 < 23; i_11 += 4) 
        {
            arr_41 [i_4] [i_4] = ((/* implicit */unsigned int) arr_33 [i_4]);
            arr_42 [i_4] [i_4] [i_4] = ((/* implicit */signed char) (-((~(((arr_18 [21U] [i_4] [i_11]) << (((/* implicit */int) (signed char)28))))))));
        }
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) arr_38 [i_4]))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 2) 
    {
        var_24 *= ((/* implicit */unsigned char) (+(min((var_3), (arr_5 [i_12] [i_12] [i_12])))));
        arr_45 [7U] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((2915032877U) < (1802461819U)))) : (((/* implicit */int) arr_14 [i_12] [i_12]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 1) 
        {
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                {
                    arr_53 [i_12] [i_14] = ((/* implicit */_Bool) ((((arr_38 [i_13]) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_51 [i_12] [i_13] [i_14] [i_14])) & (((/* implicit */int) arr_13 [i_12]))))))) | (((/* implicit */unsigned long long int) ((unsigned int) arr_49 [i_14 - 1] [i_14 - 1] [i_14 - 1])))));
                    var_25 ^= ((/* implicit */unsigned char) arr_20 [i_14 - 1] [i_12] [i_14]);
                    var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */_Bool) var_9);
    var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
    var_29 = ((/* implicit */short) var_7);
}
