/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96252
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
    for (unsigned long long int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((((((/* implicit */int) (unsigned char)221)) >= (((/* implicit */int) arr_4 [i_0] [(short)17] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1669565289788019502LL)))) : (((unsigned long long int) var_6)))), (arr_0 [(unsigned short)12] [(unsigned short)12]))))));
                            var_18 = ((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_1] [i_0])) ? ((-(arr_5 [i_0 - 2] [i_0 + 1]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))));
                            var_19 &= ((/* implicit */signed char) arr_0 [i_0 - 4] [i_1 + 1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        {
                            arr_14 [i_4] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 250376629918609679ULL)) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) (unsigned char)182)))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) min((var_14), (((/* implicit */short) var_12))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_9 [8] [i_1] [i_1] [i_5 - 1]))) : ((-(var_0))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0 - 2]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        for (unsigned int i_7 = 4; i_7 < 11; i_7 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_20 [i_6] [i_7]))));
                            arr_25 [(unsigned short)6] [i_9] [i_6] = ((((/* implicit */int) arr_24 [i_8 + 1] [i_7 - 1] [i_9] [i_7])) / (((((/* implicit */int) (unsigned char)128)) - (((/* implicit */int) ((signed char) (unsigned short)41534))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        {
                            arr_32 [i_6] [(signed char)7] [i_6] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [(unsigned short)11])) ? (((/* implicit */int) ((_Bool) ((signed char) (-9223372036854775807LL - 1LL))))) : (var_8)));
                            arr_33 [i_6] [i_11] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_6))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))) + (arr_0 [i_6] [i_11]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 250376629918609693ULL)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (0ULL))))));
                            arr_38 [(_Bool)1] = ((/* implicit */unsigned short) 262143);
                            arr_39 [i_6] [i_7] [i_6] [i_6] [i_13] [i_13] = ((/* implicit */unsigned int) ((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 14; i_14 += 1) 
    {
        for (unsigned int i_15 = 0; i_15 < 14; i_15 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_16 = 1; i_16 < 11; i_16 += 2) 
                {
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_49 [i_16] = ((/* implicit */unsigned char) arr_27 [i_14] [i_16] [i_14]);
                            arr_50 [i_16] = ((/* implicit */unsigned char) (+(max((arr_30 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 - 1]), (15943489651385486932ULL)))));
                            var_23 = ((/* implicit */unsigned long long int) (unsigned char)241);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 2; i_18 < 13; i_18 += 3) 
                {
                    for (short i_19 = 2; i_19 < 12; i_19 += 4) 
                    {
                        {
                            arr_56 [i_14] [(unsigned char)4] [i_18 + 1] [i_15] [i_14] [i_14] = ((/* implicit */int) arr_31 [i_14] [i_19] [i_18] [(short)2] [i_18] [i_18]);
                            arr_57 [i_14] [i_14] [i_14] = var_16;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 14; i_20 += 1) 
                {
                    for (unsigned int i_21 = 2; i_21 < 11; i_21 += 2) 
                    {
                        {
                            arr_65 [i_20] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_19 [i_21 - 2] [i_21 - 2] [i_21 + 3])) ? (((/* implicit */int) arr_19 [i_21 + 1] [i_21 - 1] [i_21])) : (((/* implicit */int) arr_19 [i_21 - 2] [i_21 + 3] [i_21 + 3]))))));
                            arr_66 [i_14] [i_15] [(_Bool)1] [i_20] = ((/* implicit */long long int) (!((((-(9569190654393610204ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8))))))));
                            arr_67 [i_14] [i_20] [(short)6] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) max((262134), (((/* implicit */int) (unsigned char)62))));
                        }
                    } 
                } 
            }
        } 
    } 
}
