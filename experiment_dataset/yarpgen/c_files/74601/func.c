/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74601
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) ((unsigned short) var_0));
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) 14172138668601763230ULL));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)13073)) ? (((((/* implicit */_Bool) (unsigned short)41942)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27631))) : (14172138668601763215ULL))) : (var_1)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 7168ULL))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32736)))));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)5122)) ? (arr_5 [i_0] [i_0] [i_1 + 3]) : (252201579132747776ULL)));
                                var_15 = ((((/* implicit */_Bool) arr_3 [i_1 + 3] [i_1])) ? (1069461796738622809ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 3] [i_1] [i_1 + 2] [i_1 - 1] [i_1]))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) (unsigned short)37874)))))) > ((((-(arr_2 [i_5]))) << (((((/* implicit */int) ((unsigned short) var_3))) - (52604)))))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (unsigned short)32794)) | (((/* implicit */int) (unsigned short)13051))))))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((min(((+(var_2))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5]))) & (var_0))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)32736))))))))));
                    var_18 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65520)) << (((3918842139039890068ULL) - (3918842139039890060ULL)))))) ? (var_2) : (arr_2 [i_0]))));
                    var_19 = ((/* implicit */unsigned short) (-(562949953421311ULL)));
                }
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    arr_17 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) ((unsigned long long int) 3805217567894109286ULL));
                    var_20 = max((((unsigned short) var_4)), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_0] [i_6] [i_6] [i_0])) ? (arr_12 [i_0] [i_6] [i_6]) : (14527901934669661559ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_6])))))));
                }
                for (unsigned short i_7 = 1; i_7 < 17; i_7 += 1) 
                {
                    var_21 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)52476)) ? (((/* implicit */int) ((562949953421323ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55045)))))) : (((/* implicit */int) (unsigned short)34157))))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 7037152682133201468ULL)) ? (8578594046640068611ULL) : (2499347376761985059ULL))))));
                }
                var_23 |= arr_15 [i_0] [10ULL];
            }
        } 
    } 
    var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_4)))))))) && (((/* implicit */_Bool) ((unsigned long long int) var_10)))));
}
