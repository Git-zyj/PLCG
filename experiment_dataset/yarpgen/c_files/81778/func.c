/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81778
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
    var_10 = ((/* implicit */_Bool) ((long long int) var_4));
    var_11 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3247226347U)) ? (((/* implicit */long long int) 1047740936U)) : (7723758974020351746LL)));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) != (arr_1 [i_0] [i_0 + 3])));
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 + 3]))));
        var_14 = ((/* implicit */int) max((var_14), ((~(-228643334)))));
        var_15 = ((/* implicit */signed char) ((unsigned short) ((((-228643334) + (2147483647))) << (((((-228643334) + (228643351))) - (17))))));
    }
    for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) var_0))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_16 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 + 2])) ? (33554424U) : (((/* implicit */unsigned int) 228643333))))));
            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_1 + 2] [i_2]))));
            var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_7 [i_1] [i_2] [i_1]) ? (((/* implicit */int) (unsigned short)53601)) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 1]))) : (arr_8 [i_1] [i_1 + 1] [i_2])));
            var_19 = (((-(4261412872U))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 + 1]))));
        }
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (((((/* implicit */_Bool) arr_8 [i_1] [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_3] [i_3]))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)11935)) & (((/* implicit */int) (short)-26055))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_3]))) : (((arr_3 [i_1]) + (2586155260220465625ULL)))))));
            arr_12 [12U] [i_3] = ((/* implicit */unsigned long long int) ((int) 3247226373U));
        }
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
        {
            var_21 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) arr_16 [i_1] [i_4] [i_1])))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    {
                        arr_23 [i_1] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((arr_11 [i_4] [i_5] [i_5]), (((/* implicit */signed char) var_2))))), (arr_10 [i_1] [i_1])))) ? (max((((/* implicit */long long int) ((unsigned int) 985162418487296ULL))), (arr_1 [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6] [i_5] [i_1])))));
                        var_22 = ((/* implicit */int) ((((/* implicit */int) ((short) arr_20 [i_1 + 1] [(unsigned char)1] [i_5]))) == (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])), (arr_20 [i_1] [i_4] [i_6])))) ? ((-(((/* implicit */int) var_0)))) : ((+(((/* implicit */int) var_9))))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                for (unsigned int i_8 = 2; i_8 < 14; i_8 += 2) 
                {
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((max((min((arr_3 [12LL]), (((/* implicit */unsigned long long int) 33554424U)))), (((/* implicit */unsigned long long int) (+(arr_4 [i_1 + 1])))))) >> (((/* implicit */int) (((-(((/* implicit */int) var_2)))) < (((/* implicit */int) var_6)))))));
                            arr_31 [i_9] [i_7] = ((/* implicit */int) arr_8 [i_1] [i_4] [i_7]);
                            var_24 = ((/* implicit */unsigned char) (-(max((arr_19 [i_9] [i_4] [i_8 - 1] [i_8]), (((/* implicit */long long int) arr_27 [i_1] [i_1] [i_8 - 2] [i_8] [i_9] [i_7]))))));
                            var_25 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_1] [i_1 + 1] [i_4] [i_8 + 1] [i_8 - 2] [i_8 - 2])) ? (((/* implicit */int) arr_27 [i_1] [i_1 + 1] [i_1 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 2])) : (((/* implicit */int) arr_27 [i_1 - 1] [i_1 + 1] [i_4] [i_8 - 2] [i_8] [i_8 + 1])))));
                        }
                    } 
                } 
            } 
            arr_32 [i_1] [(unsigned short)5] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 985162418487327ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1 + 1] [i_4] [i_4]))) : (985162418487279ULL)))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [(signed char)3])) || (((/* implicit */_Bool) arr_15 [i_1] [i_1 + 2] [i_1 + 2]))))), (((arr_20 [i_1] [(signed char)6] [(signed char)6]) * (((/* implicit */unsigned long long int) -5078465134638537686LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_1 - 1] [i_1 - 1])))));
        }
        var_26 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1 + 2] [i_1 + 2] [i_1 + 2]))) + (arr_30 [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_1 - 1] [i_1]))));
    }
    var_27 = ((/* implicit */unsigned short) var_1);
}
