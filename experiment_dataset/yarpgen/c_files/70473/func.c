/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70473
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
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) (_Bool)1);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [(_Bool)1] [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [0U])) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) arr_10 [i_0] [i_1])) : (var_8)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6422712316881057707LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_17 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0])) ? (arr_1 [i_0 + 2] [i_0]) : (arr_1 [i_0 + 1] [i_0 - 1]))) + (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [(unsigned char)6] [i_0] |= ((/* implicit */unsigned long long int) var_8);
                                arr_19 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (arr_1 [i_0 + 3] [i_4]))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((((((_Bool)1) ? (arr_5 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) | (var_17)))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_0] [i_1] [(short)11] = ((/* implicit */unsigned int) (_Bool)1);
                arr_21 [i_1] [i_0] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 - 1] [i_0 + 3] [i_0 + 1])))))) : (max((((/* implicit */long long int) (((_Bool)1) || ((_Bool)1)))), (max((((/* implicit */long long int) (short)337)), (var_15))))));
                arr_22 [i_0 + 2] [i_0 + 2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_0 - 1] [i_1]))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) var_12)) ^ (arr_2 [i_1]))))) : (((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_17)))) ? (((/* implicit */unsigned long long int) var_8)) : (var_3))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 4; i_5 < 7; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_29 [i_5] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) 582480254)) : (10441887566019348060ULL))))))));
                arr_30 [i_6] [i_6] [i_5] = ((/* implicit */int) var_4);
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_33 [i_6] [i_5 + 1] [i_7] = ((/* implicit */unsigned long long int) var_17);
                    arr_34 [i_6] [i_5 - 3] [i_7] [i_5 + 2] = ((/* implicit */_Bool) (+(((unsigned long long int) var_5))));
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 1) 
                {
                    arr_37 [i_6] = ((/* implicit */_Bool) var_13);
                    arr_38 [i_8] [i_6] [i_6] [i_5] = ((/* implicit */long long int) var_4);
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_43 [i_5 - 4] [i_6] [i_6] [i_9] = ((/* implicit */int) (+(((10441887566019348060ULL) & (10441887566019348060ULL)))));
                    arr_44 [i_6] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))), ((+(((/* implicit */int) ((var_17) <= (var_17))))))));
                    arr_45 [i_6] = var_9;
                }
                for (long long int i_10 = 3; i_10 < 8; i_10 += 3) 
                {
                    arr_49 [i_5] [i_6] = ((/* implicit */int) arr_48 [i_6] [i_6] [i_10 + 1] [i_10]);
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        for (int i_12 = 0; i_12 < 10; i_12 += 2) 
                        {
                            {
                                arr_57 [i_5] [i_5] [i_6] [0U] [i_5] [i_6] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_10 + 1] [i_6])) || (((/* implicit */_Bool) var_3))))) * (var_5)))));
                                arr_58 [i_5] [i_5] [(short)6] [i_11] [i_6] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [(short)7] [i_6] [i_6]))) : (arr_32 [i_5] [i_5] [i_5]))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_53 [(signed char)1] [i_11] [i_11] [i_6] [i_11])))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) 8004856507690203556ULL))));
                                arr_59 [i_6] [i_6] [i_6] [(unsigned char)1] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_6] [i_10] [i_12])) && (((/* implicit */_Bool) var_9))));
                            }
                        } 
                    } 
                    arr_60 [i_6] [i_6] = ((/* implicit */unsigned char) var_10);
                }
                arr_61 [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_14 [i_5] [i_5] [i_5] [i_5] [i_5 - 1] [i_5])))) ? ((((_Bool)1) ? (224516583U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (-(1837856330))))))));
            }
        } 
    } 
}
