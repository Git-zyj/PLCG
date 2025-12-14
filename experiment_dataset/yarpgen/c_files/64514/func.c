/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64514
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
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) var_8)))));
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) -2118193379039330792LL))));
    var_18 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (signed char)-110))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */_Bool) var_2);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_4] [i_2] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1 + 3] [i_1 - 3] [i_1 - 3])))))) + (((((((/* implicit */unsigned long long int) -2118193379039330813LL)) * (var_11))) << (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (unsigned char)41)))))));
                                arr_15 [i_4] [i_3] [i_4] [i_2] [i_4] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_11 [i_1] [i_4 - 1] [i_4] [i_4])))) ? (((/* implicit */unsigned long long int) var_4)) : (max((max((((/* implicit */unsigned long long int) (unsigned short)685)), (14149691973583975566ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 4297052100125576069ULL)))))))));
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]), (arr_9 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])))) ? ((-(arr_9 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]))) : (max((arr_9 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]), (arr_9 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)59464)) ? (((/* implicit */int) arr_8 [i_1] [i_1 + 4] [i_1])) : (((/* implicit */int) arr_8 [i_1] [i_1 + 2] [i_1])))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (short)5371)), (16357392004586125784ULL))))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 3; i_5 < 20; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) ((short) var_12)))))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */_Bool) (short)18738)) ? (arr_11 [i_5] [i_5] [4U] [i_5 + 3]) : (arr_11 [i_5] [i_5] [6U] [i_5 - 1])))));
                                var_24 ^= ((/* implicit */signed char) arr_8 [8LL] [i_1] [i_1]);
                            }
                            for (unsigned char i_8 = 1; i_8 < 19; i_8 += 4) 
                            {
                                var_25 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_25 [i_8 + 3] [i_8 + 2] [i_8 + 3] [i_8 + 2] [i_8 + 2])) ? (arr_25 [i_8 + 3] [i_8 + 3] [i_8 + 3] [i_8 + 2] [i_8 + 1]) : (arr_25 [i_8 - 1] [i_8 + 4] [i_8] [i_8 + 2] [i_8 + 3]))), (((/* implicit */unsigned int) (_Bool)0))));
                                var_26 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_25 [i_8 - 1] [i_6] [i_5] [i_1] [i_0]) : (((/* implicit */unsigned int) -635407330))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_12)) ? (var_11) : (13594717614764789246ULL))))));
                            }
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((_Bool) var_14)) ? (((/* implicit */int) min((arr_26 [i_6] [(signed char)12] [(signed char)12] [(signed char)12] [i_0]), (var_13)))) : (((/* implicit */int) max((arr_26 [i_0] [(signed char)8] [i_5] [i_6] [i_6]), (arr_26 [i_0] [12] [i_5] [i_6] [i_5])))))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */int) ((unsigned int) var_13));
            }
        } 
    } 
    var_29 &= ((/* implicit */short) (unsigned short)62732);
}
