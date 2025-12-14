/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88012
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) 1928303988817689681LL);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (short i_4 = 2; i_4 < 13; i_4 += 3) 
                            {
                                var_19 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
                                arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) (~(-7605663265725241938LL)));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (9828996624733550290ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) 3454394591U))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                            {
                                var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)255))));
                                arr_16 [i_0] [i_0] [i_3 - 2] = ((/* implicit */unsigned char) arr_3 [i_5] [i_1] [i_1]);
                                var_22 = ((/* implicit */long long int) max(((signed char)-23), (arr_5 [i_5] [i_2] [i_0])));
                                var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_14 [i_3]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)194)))))))) ? (((((/* implicit */_Bool) arr_15 [i_5] [i_0] [i_1] [i_1] [i_1] [i_0])) ? (6ULL) : (((/* implicit */unsigned long long int) ((arr_3 [i_2] [(unsigned char)4] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))) : (((/* implicit */unsigned long long int) 7605663265725241938LL))));
                                arr_17 [i_0] [i_0 + 1] [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)35231), (((/* implicit */unsigned short) (unsigned char)193)))))) : (((3961322003U) | (523488713U)))))), (((((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_2])) ? (5389107316878805976ULL) : (((/* implicit */unsigned long long int) arr_15 [i_3] [i_3] [i_0] [i_0] [i_1] [i_0])))) - (((/* implicit */unsigned long long int) max((arr_9 [i_1] [7LL]), (-4515004953389406497LL))))))));
                            }
                            for (unsigned long long int i_6 = 3; i_6 < 15; i_6 += 1) 
                            {
                                arr_20 [i_0] [i_1] [i_0] [i_2] [i_3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((((/* implicit */_Bool) arr_7 [i_3 + 2] [i_1] [i_0 - 1] [i_6 - 2] [i_6 - 2] [i_1])) ? (13057636756830745639ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_6 - 3] [i_6]))))) : (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_14)))))));
                                arr_21 [i_0] [i_0] [i_0] [5U] [i_0] [i_0] = ((/* implicit */int) (((_Bool)1) ? ((~(((((/* implicit */_Bool) 8801572853064052182LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_0] [i_0] [i_0] [i_6 - 2]))) : (var_15))))) : (max((arr_1 [i_0]), (arr_1 [i_0])))));
                                arr_22 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
                            }
                            var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3 + 2] [i_3 + 1] [i_3 - 3] [i_3] [i_3] [i_3 + 2])))))));
                            var_25 = max((var_13), (((/* implicit */long long int) min((arr_13 [i_3 + 2] [i_3] [i_3] [i_3] [i_3] [i_3 + 2]), (((/* implicit */unsigned char) var_16))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) arr_3 [13LL] [i_1] [(_Bool)1]))));
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (13206070814300674804ULL)));
    /* LoopNest 2 */
    for (long long int i_7 = 2; i_7 < 18; i_7 += 3) 
    {
        for (short i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_9 = 3; i_9 < 19; i_9 += 3) 
                {
                    arr_30 [i_7] [4U] &= ((unsigned long long int) ((((/* implicit */_Bool) 2047LL)) ? (268435455ULL) : (((/* implicit */unsigned long long int) 7605663265725241937LL))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            {
                                arr_37 [i_8] [i_8] [i_9] [i_10 - 1] [i_11] = (~(7605663265725241937LL));
                                var_28 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 7605663265725241938LL)) ? (arr_25 [i_7]) : (-938139519)));
                                arr_38 [4LL] [i_8] [i_8] [i_8] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 2911704133U)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) - (min((((/* implicit */unsigned long long int) arr_25 [i_7])), (5389107316878805976ULL))))) : (max((12425900103831157132ULL), (((/* implicit */unsigned long long int) -7605663265725241920LL))))));
                            }
                        } 
                    } 
                    arr_39 [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7605663265725241953LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10934784018557084961ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)13805))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) -938139524)), (2276862738461534487LL)))))))) : (((((/* implicit */_Bool) 127U)) ? (((/* implicit */unsigned long long int) -938139519)) : (5389107316878805976ULL)))));
                }
                /* LoopNest 2 */
                for (long long int i_12 = 1; i_12 < 19; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)51))))) ? (min((arr_33 [i_7] [i_7] [i_12 + 1] [i_8]), (arr_33 [i_8] [i_7 + 1] [i_7 + 1] [i_8]))) : ((-(arr_33 [i_8] [i_12] [i_8] [i_8])))));
                            arr_46 [18] [i_8] [10LL] [i_13] &= ((/* implicit */unsigned char) ((min((-2072306023394999894LL), (((/* implicit */long long int) var_8)))) > (min((arr_28 [i_7 - 2] [(short)6] [i_12 + 1]), (arr_28 [i_7 - 2] [(_Bool)1] [i_12 + 1])))));
                            var_30 |= max((min((min((12074460573859304362ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) 7605663265725241909LL)))), (((((/* implicit */_Bool) 2276862738461534487LL)) ? (arr_34 [(signed char)6] [i_12 - 1] [(signed char)6]) : (((/* implicit */unsigned long long int) 0U)))));
                            var_31 &= ((/* implicit */signed char) ((((/* implicit */int) arr_40 [i_7] [i_7] [i_7])) >> (((var_8) - (1091384248)))));
                            var_32 -= (!(((/* implicit */_Bool) max((6043552808648990212ULL), (((/* implicit */unsigned long long int) 127U))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) min((-7605663265725241940LL), (((/* implicit */long long int) -993854724)))))));
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_52 [i_7] [i_8] [i_7] [16] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_35 [(unsigned short)18] [i_8] [i_15 - 1] [6LL] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (min((((((/* implicit */_Bool) arr_27 [i_7])) ? (((/* implicit */long long int) 4294967168U)) : (-408100872677965085LL))), (max((var_13), (((/* implicit */long long int) var_7))))))));
                            arr_53 [0U] |= ((/* implicit */short) ((min((arr_34 [(signed char)12] [i_7 - 2] [i_15 - 1]), (arr_34 [(unsigned char)4] [i_7 - 2] [i_15 - 1]))) > (((/* implicit */unsigned long long int) (+(4294967295U))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
