/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64426
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_20 *= ((/* implicit */unsigned int) (((((~(arr_4 [i_0] [i_1] [0LL]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [8ULL] [i_1]))))) < (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0])))))));
                var_21 -= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1393551289U)) / (7984174337944851140LL)))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_1 [12ULL] [10])) : (arr_5 [i_1]))) : (((((/* implicit */_Bool) arr_2 [17ULL] [i_0])) ? (((/* implicit */int) arr_1 [6ULL] [(unsigned char)18])) : (arr_2 [i_1] [i_0]))))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_22 = ((/* implicit */int) ((unsigned long long int) (-(min((831445058), (((/* implicit */int) (unsigned short)65530)))))));
                    arr_10 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (unsigned short)55575)))), ((-(arr_7 [i_2] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_18 [i_4] [i_0] [i_4] [i_3] [i_2] [i_0] [0LL] = ((/* implicit */int) (+(959000570075821691LL)));
                                var_23 ^= ((/* implicit */unsigned long long int) (-((-(((int) arr_2 [i_0] [i_4 - 1]))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [5ULL] [i_0] [i_0])), (977976773733717289ULL)))) ? (((/* implicit */unsigned long long int) max((arr_4 [4LL] [i_0] [i_0]), (((/* implicit */unsigned int) arr_14 [i_0] [i_2] [i_1] [i_1] [i_0]))))) : (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])), (arr_0 [i_1]))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)235)) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [(unsigned short)2] [i_0]))))));
                }
                for (unsigned int i_5 = 2; i_5 < 20; i_5 += 1) 
                {
                    var_25 = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_5]);
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) arr_14 [i_0] [i_0] [12LL] [i_0] [i_0]);
                                var_27 = ((/* implicit */unsigned int) arr_11 [16ULL] [i_0] [21] [i_0]);
                            }
                        } 
                    } 
                    arr_27 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)65529);
                }
                for (unsigned char i_8 = 1; i_8 < 20; i_8 += 2) 
                {
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (((+(((((/* implicit */_Bool) (unsigned short)55449)) ? (arr_28 [20ULL] [i_1] [i_8] [i_8]) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_8])))))) / (arr_28 [(unsigned char)4] [4ULL] [i_0] [(unsigned char)4]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) ((unsigned int) max((3801923839322698859LL), (((/* implicit */long long int) ((unsigned short) 14399620921467372608ULL))))));
                                var_30 ^= ((/* implicit */unsigned long long int) (+(min((arr_6 [i_0] [i_1] [i_8] [i_9]), (((/* implicit */long long int) -1451396163))))));
                                var_31 = arr_25 [i_0] [i_0] [i_0] [i_0];
                            }
                        } 
                    } 
                    arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (3141501157078039172LL) : (((/* implicit */long long int) arr_28 [i_0] [5ULL] [i_1] [i_0])))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)41735)))))));
                }
                arr_36 [(unsigned char)16] |= ((/* implicit */unsigned long long int) ((int) (-(arr_24 [i_0] [i_1] [i_1] [i_1] [(unsigned char)14]))));
                /* LoopNest 3 */
                for (long long int i_11 = 2; i_11 < 20; i_11 += 1) 
                {
                    for (int i_12 = 4; i_12 < 21; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 22; i_13 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) max((arr_17 [i_0] [i_1]), (((/* implicit */unsigned long long int) 524224U)))))));
                                var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (unsigned short)56953))));
                                var_34 -= ((/* implicit */long long int) (-((~(((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [18ULL] [i_1] [i_12 - 2]))))));
                                var_35 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_36 ^= 0;
}
