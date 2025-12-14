/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77970
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-15970))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_16 *= ((((/* implicit */_Bool) min((arr_13 [i_0] [8] [(short)12] [i_3]), (((/* implicit */signed char) (!(var_4))))))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_12))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */short) 3748949145U);
                            arr_18 [i_1] [i_1] [i_2] [i_3] [i_4 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_15 [i_2] [i_1] [i_4 - 2])), ((-(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned int) arr_16 [i_2] [i_1])), (arr_5 [(_Bool)1] [(_Bool)1] [7U]))) <= (((/* implicit */unsigned int) var_15)))))) : (min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [14])), (arr_8 [i_4 + 1] [i_1] [i_2 - 1])))));
                            arr_19 [i_4] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(unsigned char)5] [i_1]))))), (((((/* implicit */_Bool) arr_6 [i_1] [i_4 - 1])) ? (((/* implicit */int) arr_6 [i_4 - 2] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_1]))))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_15 [1] [i_1] [i_0]), (arr_15 [i_0] [i_1] [i_2])))) ? ((+(((((/* implicit */_Bool) arr_22 [i_1] [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_9))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) > (((((/* implicit */long long int) ((/* implicit */int) arr_17 [8U] [i_1] [i_1] [(short)14]))) ^ (var_9)))))))));
                        arr_23 [i_1] [i_1] [4U] [i_5] [9ULL] = var_6;
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            {
                arr_29 [i_6] [i_6] = ((/* implicit */_Bool) arr_28 [i_6] [i_6] [9U]);
                arr_30 [i_6] [i_6] = ((/* implicit */long long int) min((((unsigned short) (~(((/* implicit */int) (short)-16))))), (((/* implicit */unsigned short) ((2251799813685216ULL) > (((/* implicit */unsigned long long int) ((((-566979921) + (2147483647))) >> (((3962079884550094609ULL) - (3962079884550094588ULL)))))))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) max(((-(arr_27 [i_7] [i_6]))), (((/* implicit */int) (_Bool)0))))) + (max((arr_25 [8LL] [i_6]), (((/* implicit */long long int) (unsigned short)65535))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            {
                arr_37 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) > ((~(((((/* implicit */int) arr_36 [i_8])) | (-566979928)))))));
                arr_38 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((478277179263088464ULL), (((/* implicit */unsigned long long int) -7801426290725865138LL))))) ? (arr_33 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (var_9)))))))) || (((/* implicit */_Bool) (+(((arr_32 [i_8]) >> (((var_8) + (5545919108318930206LL))))))))));
                arr_39 [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))));
                /* LoopNest 3 */
                for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 2; i_12 < 18; i_12 += 4) 
                        {
                            {
                                var_20 = var_13;
                                arr_49 [i_8] [i_9] [i_8] [i_11] [i_11] [i_11] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))), (max((((arr_41 [i_8]) + (arr_41 [i_11]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)15974))) <= (7534971387601302501LL))))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-36))))) <= (((((/* implicit */int) arr_44 [i_8] [i_8])) + (((/* implicit */int) arr_44 [7LL] [i_10]))))));
                                arr_50 [i_9] [1U] [1U] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_9]))) > (arr_47 [i_12 - 2] [i_12 + 1] [i_12] [i_12] [i_12])))), (((((/* implicit */_Bool) 23U)) ? (((/* implicit */long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) arr_44 [i_10] [i_12]))))) : (-81165910741353619LL)))));
                                arr_51 [(unsigned char)7] [13LL] [i_11] [i_12] = ((/* implicit */unsigned short) max((((5142903186647057430ULL) >> (((max((((/* implicit */unsigned long long int) (unsigned char)28)), (var_1))) - (12493948013666949831ULL))))), (((unsigned long long int) var_12))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (unsigned char)0);
}
