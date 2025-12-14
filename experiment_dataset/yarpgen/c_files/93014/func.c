/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93014
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) max((var_9), (max((var_9), (((/* implicit */int) var_5)))))))));
                arr_4 [(unsigned char)1] = ((/* implicit */unsigned char) ((unsigned long long int) var_3));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_9 [i_1] = ((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_6 [i_0 + 1] [i_0 + 2] [i_0 - 2] [i_0 - 2])) > (arr_7 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_2]))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 20; i_4 += 1) 
                            {
                                var_12 = ((/* implicit */unsigned short) var_8);
                                arr_12 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_8 [i_0] [i_0 - 1] [i_4 - 1] [i_4 - 1]) ? (((/* implicit */int) arr_11 [i_4])) : (arr_6 [i_0 + 2] [i_4 + 1] [i_0 + 2] [i_4])));
                                arr_13 [i_0 + 2] [i_0 + 2] [i_4] [i_3] [i_4 + 1] = ((/* implicit */signed char) ((arr_1 [i_0 + 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_4] [i_4 + 1] [i_4] [i_4]))) : (arr_5 [i_0 - 1])));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                            {
                                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) arr_1 [i_0 + 2]))));
                                var_14 = ((/* implicit */unsigned long long int) ((short) var_8));
                                var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2])))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) : (min((((/* implicit */unsigned long long int) var_2)), (var_1)))))));
    /* LoopNest 2 */
    for (unsigned short i_6 = 1; i_6 < 21; i_6 += 1) 
    {
        for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 22; i_8 += 4) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_25 [i_6 + 1] [i_6])) ? (((/* implicit */int) arr_25 [i_6 + 1] [i_6])) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((unsigned short) var_3)))));
                            var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (arr_23 [i_6] [i_7] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */unsigned long long int) arr_17 [i_6])), (var_1))))), (((/* implicit */unsigned long long int) max((max((var_8), (arr_21 [i_7] [i_9]))), (((/* implicit */unsigned int) var_5)))))));
                            var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) max((8304527859926392599ULL), (503918115015971736ULL)))) ? (((/* implicit */long long int) (+(arr_23 [i_7] [i_6 + 1] [i_7])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_24 [i_6 + 3] [i_6 + 3] [i_7]))))) : (min((arr_26 [i_9] [i_7] [i_9 - 1]), (((/* implicit */long long int) arr_19 [i_6] [i_8] [i_7]))))))));
                        }
                    } 
                } 
                arr_27 [i_6] [i_6] [i_6] = ((/* implicit */short) max((((max((arr_26 [i_6] [i_6] [i_6]), (((/* implicit */long long int) arr_25 [i_6] [i_6])))) - (((/* implicit */long long int) ((((/* implicit */_Bool) 16383)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (arr_18 [i_6 + 1]))))));
                arr_28 [i_6] [5] = ((/* implicit */signed char) var_0);
            }
        } 
    } 
}
