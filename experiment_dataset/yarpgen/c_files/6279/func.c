/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6279
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                arr_8 [2LL] [(_Bool)1] = ((/* implicit */signed char) (~((~(((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 2 */
                for (unsigned short i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    arr_12 [i_1] [i_2] = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_6 [i_2] [4] [i_3 + 1] [i_3 - 1]))))));
                    arr_13 [i_2] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((int) arr_7 [i_0] [i_2] [i_3 + 3]))) > ((+(arr_7 [i_0] [i_1] [i_2])))));
                    arr_14 [i_0] [i_1 - 1] [i_2] [1ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_3 + 3] [11])))))));
                }
                for (unsigned short i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    arr_17 [i_0] [(_Bool)1] [i_2] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_15 [i_0] [i_1] [i_1] [i_1 + 1] [i_4 + 2]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (2162975239146382368ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0]))))) : ((~(0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(1948331215))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 16; i_5 += 3) 
                    {
                        arr_21 [i_0] [i_1] [8U] [8U] [i_5] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_5 - 1] [i_1 + 1]))));
                        arr_22 [i_5] [11U] [(unsigned short)14] [i_4] = ((/* implicit */unsigned char) ((arr_15 [i_0] [i_1] [i_2] [i_2] [6U]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5] [i_5] [i_5] [i_5] [i_5 + 1])))));
                    }
                    arr_23 [i_1] = ((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_0] [i_4 + 2]);
                }
                arr_24 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
            }
            arr_25 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1 + 2] [i_1]))));
            arr_26 [3] [i_1 - 2] [3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)24429))) + (((long long int) ((int) arr_0 [i_0])))));
            arr_27 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_9 [i_0] [i_0] [i_0] [i_1 - 1]), (arr_9 [i_0] [i_0] [i_0] [i_1 - 1])))) / (((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 2] [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_9 [(unsigned char)6] [(unsigned char)6] [i_1 - 2] [i_1 + 2])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1 + 1]))))));
        }
        arr_28 [i_0] [2LL] = ((/* implicit */unsigned short) min(((-((~(836828068U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0] [i_0])))))));
        arr_29 [2] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0])))));
        arr_30 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)26))))) : (((((/* implicit */_Bool) 702287563U)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (signed char i_6 = 2; i_6 < 13; i_6 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            for (short i_8 = 3; i_8 < 16; i_8 += 3) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 1; i_10 < 16; i_10 += 3) 
                        {
                            arr_44 [i_6] [i_6 + 4] [i_9] [i_9] [i_9] [i_9] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_41 [(_Bool)1] [i_9]))))) ? (((/* implicit */int) min(((unsigned short)24429), (((/* implicit */unsigned short) (_Bool)1))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)30200))))))) ^ (max((((/* implicit */unsigned long long int) ((_Bool) arr_31 [(signed char)13]))), (max((((/* implicit */unsigned long long int) (unsigned char)212)), (var_10)))))));
                            arr_45 [i_7] |= ((/* implicit */_Bool) min(((unsigned char)102), (((/* implicit */unsigned char) (_Bool)0))));
                        }
                        arr_46 [i_6] [i_7] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)96)) ? (arr_3 [i_7]) : (arr_3 [i_6 - 1])))) ? (((/* implicit */int) arr_1 [i_6] [15ULL])) : (((((/* implicit */int) arr_39 [i_6 - 1] [i_8 + 1] [i_8 - 3] [i_9])) << (((((/* implicit */int) arr_39 [i_6 - 1] [i_8 + 1] [i_6 - 1] [i_9])) - (30067)))))));
                        arr_47 [i_6] [i_6] [i_8] [i_9] = ((/* implicit */short) arr_42 [i_6] [i_7] [i_8] [4LL] [i_9]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            for (short i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                {
                    arr_55 [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)28)), (arr_33 [i_6 - 1] [i_6 - 1]))))));
                    arr_56 [i_6] [i_6] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_6 + 1] [i_6 + 3] [i_6 - 2])) ? (((/* implicit */int) arr_38 [i_6 + 3] [i_6 + 2] [i_6 + 4])) : (((/* implicit */int) arr_50 [i_6 + 2] [i_6 + 1] [i_6 + 1]))))) ? (((((/* implicit */_Bool) 3905661031796752017ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6]))) : (((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50))) : (arr_42 [i_6] [i_6 + 1] [i_6 + 1] [i_11] [i_12]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3458139227U)) ? (-601021088) : (-1630103826)))) && (((/* implicit */_Bool) ((int) (signed char)59)))))))));
                    arr_57 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */signed char) arr_41 [i_6] [i_6 + 4])), (arr_31 [i_6]))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (var_7)))), ((~(((((((/* implicit */int) (short)-1035)) + (2147483647))) << (((((/* implicit */int) var_16)) - (1)))))))));
    var_20 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)96));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_16))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 25LL)))))))) ? (max((min((var_18), (((/* implicit */long long int) var_14)))), ((~(var_18))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((3905661031796752017ULL) / (((/* implicit */unsigned long long int) var_18)))))))))));
}
