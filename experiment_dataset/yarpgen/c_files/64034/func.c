/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64034
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) min((max((arr_0 [i_0 - 2]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))))), (((/* implicit */unsigned long long int) (~(((unsigned int) var_3)))))));
                var_18 = ((/* implicit */short) (unsigned char)252);
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_2 [i_0]))));
                var_20 = ((/* implicit */long long int) ((arr_2 [5]) == (((((/* implicit */int) ((-4568935296342596524LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) & (((/* implicit */int) var_4))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_3 = 1; i_3 < 13; i_3 += 4) 
        {
            arr_14 [i_3] = ((((/* implicit */unsigned long long int) var_16)) != (arr_12 [i_2 - 1]));
            var_21 += ((/* implicit */_Bool) ((arr_13 [i_2 + 1]) / (arr_13 [i_2 + 3])));
            var_22 = ((/* implicit */unsigned int) ((arr_13 [i_2 - 1]) != (((/* implicit */long long int) ((/* implicit */int) var_13)))));
            /* LoopNest 3 */
            for (unsigned char i_4 = 1; i_4 < 15; i_4 += 2) 
            {
                for (signed char i_5 = 3; i_5 < 12; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 2) 
                    {
                        {
                            arr_24 [13U] [i_5] [4U] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_11 [i_2 - 1] [i_5]) & (arr_11 [i_2 + 2] [i_2 + 2])));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_8 [i_2])) < (arr_21 [i_4] [i_4] [i_2 + 2] [i_2])));
                            arr_25 [i_3] [(short)8] = ((/* implicit */short) ((unsigned short) var_7));
                            arr_26 [i_5] [i_5] [(unsigned char)1] [(signed char)11] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) (unsigned short)65533)))))));
                        }
                    } 
                } 
            } 
            arr_27 [12U] [i_2] [12U] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531))) % (((((/* implicit */_Bool) var_7)) ? (arr_12 [13]) : (((/* implicit */unsigned long long int) 3586854639056900390LL)))));
        }
        var_24 ^= ((/* implicit */short) arr_13 [i_2]);
        var_25 = ((/* implicit */unsigned int) var_10);
    }
    for (unsigned long long int i_7 = 3; i_7 < 20; i_7 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_8 = 4; i_8 < 21; i_8 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) arr_30 [i_7] [10U]);
            arr_34 [i_7] [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_7] [i_7]))) : (arr_31 [i_7] [i_8])))) >= (3353428869276655479ULL)));
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_7] [i_7])) ? (arr_32 [i_7] [i_7 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_7] [i_8 - 3])))));
        }
        for (unsigned int i_9 = 1; i_9 < 21; i_9 += 2) 
        {
            arr_39 [i_7] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_35 [19U] [i_9 - 1])) >= (((/* implicit */int) arr_35 [i_7 - 1] [i_7 - 2]))))) < ((-(((/* implicit */int) arr_35 [i_7] [i_7 + 1]))))));
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_7] [i_9 + 2]))))) ? ((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)11)) != (((/* implicit */int) (unsigned short)65529))))))) : (((/* implicit */int) var_0))));
            var_29 = ((/* implicit */unsigned int) min((var_29), (((((/* implicit */_Bool) 0)) ? (2930153120U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2048)))))));
        }
        var_30 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) arr_38 [i_7 - 2] [i_7] [8U])) < (arr_37 [i_7 - 2] [i_7]))))));
        var_31 = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_30 [i_7] [i_7]))))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 2; i_10 < 22; i_10 += 2) 
    {
        arr_42 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_10])) ? (arr_41 [i_10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11)))))) ? (((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (unsigned char)169)))) : (((/* implicit */int) (unsigned short)65526))));
        arr_43 [i_10] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))));
        arr_44 [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0))));
    }
}
