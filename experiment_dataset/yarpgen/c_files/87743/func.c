/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87743
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_2] [i_3] [14U] [7U] [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned int) ((_Bool) (unsigned char)230)));
                                arr_15 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) ((unsigned short) arr_12 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0] [i_4]));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            {
                                arr_24 [i_7] [i_7] [i_5] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_10 [i_6 + 2] [i_1])), (arr_22 [i_6] [i_0] [i_0])));
                                arr_25 [(signed char)1] [i_0] [i_5] [i_5] [(signed char)6] = ((/* implicit */unsigned int) arr_11 [i_1 + 1] [i_1 + 1] [i_5] [i_1] [i_1 - 1]);
                            }
                        } 
                    } 
                    arr_26 [i_5] [i_5] [i_5] = ((/* implicit */short) (-((~(((/* implicit */int) arr_9 [i_5] [i_1 - 1] [i_0] [i_5]))))));
                    arr_27 [(short)12] [(short)12] [(short)12] [i_0] = ((((/* implicit */_Bool) arr_20 [i_1 - 1])) ? (((/* implicit */int) arr_8 [i_1] [i_5] [i_5] [i_5] [i_5])) : ((-(((/* implicit */int) (unsigned char)86)))));
                    arr_28 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned int) ((unsigned char) (((!(var_6))) ? ((~(arr_1 [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_5]))))));
                }
                arr_29 [i_0] [i_1 - 1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) ((((((/* implicit */int) arr_8 [i_1] [i_1 + 1] [i_1 + 1] [i_0] [i_1])) / (((/* implicit */int) var_9)))) != ((-(((/* implicit */int) arr_2 [(signed char)1] [(unsigned short)12] [(unsigned short)12]))))))), ((-(((/* implicit */int) arr_5 [i_0]))))));
                arr_30 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)14))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                arr_36 [(_Bool)1] [i_9] [i_9] = ((unsigned long long int) arr_32 [i_8]);
                arr_37 [i_8] = max((min((17500454839462206742ULL), (((/* implicit */unsigned long long int) arr_35 [i_8])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17378)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) (unsigned short)48158))))));
                /* LoopSeq 2 */
                for (unsigned int i_10 = 2; i_10 < 13; i_10 += 1) 
                {
                    arr_41 [i_9] [14ULL] [(short)6] [(unsigned short)5] = ((/* implicit */long long int) 946289234247344872ULL);
                    arr_42 [1U] [i_9] [i_9] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(arr_40 [10U] [i_10 + 1] [10U])))), (7831562216939965448ULL)));
                }
                for (unsigned long long int i_11 = 2; i_11 < 14; i_11 += 1) 
                {
                    arr_46 [i_9] = ((/* implicit */short) min((((13992260700231357192ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_40 [i_8] [i_8] [2ULL])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_40 [i_8] [i_9] [i_11])) < (var_11)))) : (((/* implicit */int) (unsigned char)0)))))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_51 [i_8] [i_8] [i_12] [i_8] [i_8] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_49 [10] [2LL] [i_8] [i_9] [i_8] [i_9] [i_8])))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_8] [i_11]))) == (arr_50 [i_8] [i_8] [i_8] [i_8] [i_8]))))));
                                arr_52 [i_8] [i_13] [i_8] [i_13] [i_9] [i_13] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_49 [i_12] [i_9] [i_9] [i_9] [i_12] [i_11 - 1] [i_8]), (arr_49 [i_8] [i_8] [i_9] [i_9] [i_12] [i_11 + 1] [i_11]))))));
                            }
                        } 
                    } 
                }
                arr_53 [i_9] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_49 [i_8] [i_8] [i_9] [i_8] [i_9] [i_8] [i_8])) * (((/* implicit */int) arr_48 [i_8] [i_8])))))))), (min((min((var_10), (((/* implicit */unsigned long long int) (unsigned short)48158)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_8] [i_9] [i_8] [i_9])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_39 [i_9] [i_9])))))))));
            }
        } 
    } 
}
