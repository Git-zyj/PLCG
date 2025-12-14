/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77546
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_3] [i_3] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)241)) || (((/* implicit */_Bool) (unsigned char)93))));
                        arr_11 [i_0] [1U] [i_2] [i_3] = ((((/* implicit */_Bool) ((signed char) (!(arr_5 [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) (~(2586837320U)))) : ((((-(var_7))) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 - 2] [i_3 + 1] [i_3 + 1]))))));
                        arr_12 [(signed char)13] [i_0] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */unsigned short) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))));
                        arr_13 [i_0] [(_Bool)1] [i_2] [i_3] = ((/* implicit */short) max(((unsigned short)23478), (((/* implicit */unsigned short) (short)-27606))));
                        arr_14 [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3] [i_2] [i_1 - 1])) % (((/* implicit */int) arr_2 [i_3 + 3]))))) ? (((((/* implicit */_Bool) arr_2 [i_3 + 2])) ? (((/* implicit */int) arr_7 [i_3] [i_2] [i_1 + 3])) : (((/* implicit */int) arr_2 [i_3 + 3])))) : (((/* implicit */int) arr_7 [i_3] [i_3] [i_1 - 3]))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_0))));
    }
    var_14 = ((/* implicit */long long int) var_3);
    /* LoopSeq 3 */
    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (max((((/* implicit */int) (unsigned short)23207)), (((((/* implicit */_Bool) (unsigned short)5567)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (unsigned char)185))))))));
        arr_17 [(_Bool)1] [i_4] |= ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_4] [i_4] [8ULL]))));
        arr_18 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) min((-1557479890), (((/* implicit */int) (_Bool)1))))) ? (max(((~(var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4])) ? (14680064) : (((/* implicit */int) arr_5 [i_4] [i_4] [i_4]))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_3 [i_4] [i_4])), ((~(var_0))))))));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                {
                    arr_23 [i_5] [i_5] [i_6] |= ((/* implicit */unsigned long long int) (+(min((((((/* implicit */_Bool) arr_16 [7] [i_5])) ? (((/* implicit */int) var_3)) : (14680064))), (((/* implicit */int) (unsigned char)28))))));
                    arr_24 [i_6] [i_4] [i_6] [i_4] = arr_22 [i_4] [i_5] [i_6] [i_5];
                    arr_25 [i_4] [(short)11] [i_6] = ((/* implicit */_Bool) arr_19 [4] [i_4] [i_6]);
                    arr_26 [i_4] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) arr_0 [i_4]))))), (max((3080218699329108612LL), (((/* implicit */long long int) arr_0 [i_4]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            {
                                var_16 -= ((/* implicit */short) max((max((arr_29 [i_4] [i_5] [i_6] [i_4] [(signed char)9]), (((((/* implicit */_Bool) arr_28 [i_4] [i_5])) ? (var_0) : (((/* implicit */long long int) arr_19 [i_7] [(_Bool)1] [i_4])))))), (((/* implicit */long long int) ((unsigned short) arr_1 [i_4])))));
                                arr_33 [i_4] [i_5] [i_6] [i_7] [i_5] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4])) ? (arr_28 [i_5] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) * (((((arr_31 [i_7] [i_6] [i_6] [i_7] [i_8]) / (var_10))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4]))))));
                                var_17 -= ((var_8) % (arr_30 [i_8] [i_7] [i_7] [i_7] [i_6] [i_5] [i_4]));
                                var_18 = ((/* implicit */unsigned int) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)63)) % (((/* implicit */int) (unsigned short)511)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_36 [i_9 - 1])) : (((/* implicit */int) arr_34 [i_9]))))))))))));
        var_20 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_36 [i_9])) ? ((~(var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)59969)) ? (((/* implicit */int) (unsigned short)61460)) : (((/* implicit */int) (unsigned char)249))))))) | (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9 - 1])))));
    }
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
    {
        var_21 = arr_39 [i_10];
        arr_40 [i_10] = ((/* implicit */int) min((63ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)4075)))))));
        arr_41 [i_10] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_35 [i_10 - 1] [i_10 - 1])))) / (((/* implicit */int) arr_35 [i_10 - 1] [i_10]))));
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 2; i_11 < 14; i_11 += 1) 
        {
            for (short i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                {
                    arr_47 [i_12] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_46 [i_10 - 1] [i_11 - 2])) ? (arr_46 [i_10 - 1] [i_11 - 2]) : (arr_46 [i_10 - 1] [i_11 - 2]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((137434759168LL) != (((/* implicit */long long int) -14680065))))))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((signed char) (+(((((/* implicit */_Bool) arr_45 [i_10] [i_11] [i_12] [i_13])) ? (arr_48 [i_12] [i_12]) : (((/* implicit */int) var_12)))))));
                                var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_36 [i_10 - 1]), (arr_36 [i_10 - 1])))) ? (((((/* implicit */_Bool) arr_36 [i_10 - 1])) ? (((/* implicit */int) arr_36 [i_10 - 1])) : (((/* implicit */int) arr_36 [i_10 - 1])))) : (((/* implicit */int) arr_36 [i_10 - 1]))));
                                arr_52 [i_11 - 2] [i_11] [i_12] [i_13] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)5567))));
                            }
                        } 
                    } 
                    var_24 += ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
                }
            } 
        } 
    }
}
