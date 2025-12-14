/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84166
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_5))) % ((-(((/* implicit */int) var_5))))));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61115)) >> (((((/* implicit */int) (unsigned short)4420)) - (4398)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61115))) : (min((var_2), (((/* implicit */unsigned long long int) (unsigned short)4450)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) (unsigned short)4420))))) ? (((/* implicit */int) ((signed char) (unsigned short)4415))) : ((~(((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [(signed char)2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)61122)) << (((((/* implicit */int) (unsigned short)4413)) - (4399)))))) / (min((min((((/* implicit */long long int) arr_1 [i_0 - 1])), (arr_4 [i_0]))), (min((((/* implicit */long long int) var_5)), (arr_4 [i_0])))))));
                var_12 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4414)) ? (((((/* implicit */_Bool) (unsigned short)61103)) ? (((/* implicit */int) (unsigned short)4420)) : (((/* implicit */int) (unsigned short)4414)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)61121)) : (((/* implicit */int) (unsigned short)61119))))))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61121))) ^ (var_9))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4413))) ^ (arr_4 [i_0])))))));
                var_13 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min(((unsigned short)4414), (((/* implicit */unsigned short) var_4))))))) < (min((((/* implicit */unsigned long long int) arr_3 [i_0 - 1])), ((~(var_9)))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) (unsigned short)4397);
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)4421), (((/* implicit */unsigned short) var_1))))) ? (arr_12 [i_2 - 1] [i_3] [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                                var_16 = ((unsigned long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) (unsigned short)61114))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)61121), (((/* implicit */unsigned short) var_0)))))) : (arr_4 [i_0])));
                                arr_15 [i_4] [i_2] [i_4] = ((/* implicit */long long int) (((~((-(((/* implicit */int) var_0)))))) < ((-(((/* implicit */int) (unsigned short)4421))))));
                                arr_16 [(unsigned short)0] [(unsigned short)0] [i_2] [(unsigned short)0] [i_4] = ((/* implicit */signed char) ((unsigned long long int) var_6));
                            }
                        } 
                    } 
                    arr_17 [i_0 - 1] [i_0 - 1] [i_2] = ((((/* implicit */_Bool) (unsigned short)61115)) ? (((/* implicit */int) (unsigned short)4414)) : (((/* implicit */int) (unsigned short)4421)));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_17 |= ((/* implicit */unsigned char) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4432))) | (var_2))) << (((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)61121)))) - (62)))))));
                                arr_23 [(short)1] [(short)1] [i_2 + 1] [(signed char)8] [(short)1] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) (unsigned short)61093)))) + (2147483647))) << ((((((~(((/* implicit */int) (unsigned short)4421)))) + (4424))) - (2)))));
                                arr_24 [i_0] [i_1] [3ULL] = ((/* implicit */short) min(((-(((((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [6ULL]))) : (var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (unsigned short)61130)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))) : (((((/* implicit */int) (unsigned short)61114)) | (((/* implicit */int) (unsigned short)61105)))))))));
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) var_2)))));
                }
                for (signed char i_7 = 1; i_7 < 13; i_7 += 1) /* same iter space */
                {
                    arr_28 [i_0 - 1] [i_7] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)4443)) ? (((/* implicit */int) (unsigned short)61118)) : (((/* implicit */int) (unsigned short)4432))))));
                    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
                    arr_29 [i_7] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_0 [i_7]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        for (signed char i_9 = 2; i_9 < 12; i_9 += 1) 
                        {
                            {
                                arr_34 [i_9 - 1] [i_7] [i_7 - 1] = ((/* implicit */unsigned int) ((signed char) min((arr_26 [i_0 - 1] [i_7]), (((/* implicit */unsigned long long int) var_0)))));
                                var_19 = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)61122)))));
                                arr_35 [i_0] [i_7] [(signed char)4] [i_8] [13LL] [(signed char)4] = ((/* implicit */unsigned char) arr_30 [i_0] [11U] [i_8] [i_9]);
                                var_20 |= ((signed char) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_8 [1])) : (((/* implicit */int) (unsigned short)61115)))), ((~(((/* implicit */int) (unsigned short)4432))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4432)) | (min((((/* implicit */int) arr_1 [(_Bool)1])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_8])) : (((/* implicit */int) (unsigned short)61115))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)4432)) : (((/* implicit */int) (unsigned short)61115))))), (var_9))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)4421)))), (((/* implicit */int) min(((unsigned short)61093), (((/* implicit */unsigned short) var_5))))))))));
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61115)) ? (((/* implicit */int) (unsigned short)4421)) : (((/* implicit */int) (unsigned short)61123))));
}
