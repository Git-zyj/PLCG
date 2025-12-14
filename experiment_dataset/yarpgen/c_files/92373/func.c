/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92373
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0)))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((-4508396399348029629LL), (((/* implicit */long long int) 0U)))), (((/* implicit */long long int) min(((signed char)63), (((/* implicit */signed char) (_Bool)1)))))))) || (((/* implicit */_Bool) min((var_8), (((/* implicit */signed char) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_4])) ? (((((/* implicit */_Bool) arr_12 [i_5] [i_1] [i_3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_4]))) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_3] [i_1]))) != (var_9))))))))));
                                var_12 = ((/* implicit */int) min(((+(((((/* implicit */_Bool) arr_12 [i_4] [i_2] [i_4] [i_2])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))), (min((min((arr_12 [i_4] [i_4] [i_4] [i_4]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) arr_7 [i_1]))))));
                                var_13 = ((/* implicit */signed char) arr_12 [i_3] [i_3] [i_3] [i_3]);
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (-570163792))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1740670007U)))))));
        var_17 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (var_1) : (var_1)))))));
        /* LoopNest 3 */
        for (unsigned short i_6 = 3; i_6 < 20; i_6 += 2) 
        {
            for (unsigned char i_7 = 2; i_7 < 22; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    {
                        arr_24 [i_1] [i_6] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_6] [i_6] [i_6] [i_1])) > (((int) var_9))));
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_6] [i_6]))) <= (arr_12 [i_1] [i_1] [i_8] [i_8])));
                            arr_28 [i_7] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((4294967295U) <= (3382544211U)))) < (((/* implicit */int) (unsigned short)12286)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (23U)));
                            arr_29 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_6 + 2] [i_7 - 2])) ? (((/* implicit */int) arr_9 [i_6 + 1] [i_7 + 1])) : (((/* implicit */int) arr_9 [i_6 - 3] [i_7 + 1]))))) / (((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (_Bool)1)))))));
                            arr_30 [i_6] [i_6] [i_6] [i_8] [i_8] [i_8] = ((/* implicit */long long int) min((((/* implicit */int) var_2)), ((+(((/* implicit */int) arr_4 [i_6 + 1] [i_7 + 2]))))));
                            arr_31 [i_6] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            arr_35 [i_6] [i_6] [i_6] [i_7] [i_6] [i_6] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_1] [i_1] [i_6] [i_10] [i_10] [i_6 + 4]))));
                            arr_36 [i_1] [i_6] [i_1] = ((/* implicit */short) arr_12 [i_1] [i_6] [i_7] [i_6]);
                            var_19 = ((/* implicit */_Bool) ((short) arr_17 [i_7 - 2] [i_6] [i_7]));
                            arr_37 [i_1] [i_6] [i_6] [i_6] [i_1] = ((/* implicit */unsigned char) ((4294967289U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_10] [i_8] [i_6] [i_6] [i_6] [i_1])))));
                            arr_38 [i_1] [i_6] [i_1] [i_6] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_6 + 1] [i_6 + 2])) : (arr_16 [i_6 - 2] [i_6 + 4])));
                        }
                        for (signed char i_11 = 1; i_11 < 23; i_11 += 3) 
                        {
                            arr_41 [i_1] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (367238545)))) != (((((/* implicit */_Bool) ((arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) / (var_3)))) ? (min((var_9), (((/* implicit */unsigned long long int) var_8)))) : (var_9)))));
                            arr_42 [i_1] [i_6] [i_6] [i_7 - 2] [i_6] [i_8] [i_6] = ((/* implicit */short) ((4339055335381308744LL) != (((/* implicit */long long int) 22U))));
                            var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((912423085U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108)))))) == (((long long int) var_8))))) & (min((((/* implicit */int) arr_21 [i_1] [i_1] [i_8] [i_1])), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned int) (~(((long long int) ((unsigned char) (_Bool)0)))));
    var_22 = ((/* implicit */long long int) var_3);
}
