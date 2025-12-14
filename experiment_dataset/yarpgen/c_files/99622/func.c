/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99622
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
    var_10 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) var_1);
                                var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_0 - 1]))))) <= (max((var_9), (((/* implicit */unsigned long long int) ((arr_3 [i_1] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_2]))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    for (unsigned char i_6 = 2; i_6 < 21; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) arr_9 [i_0] [i_1] [i_5] [i_7]);
                                var_14 = ((/* implicit */unsigned char) ((arr_13 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0]) / (max((((var_1) << (((((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_1])) + (32))))), (((/* implicit */unsigned int) max((((/* implicit */short) arr_1 [i_0])), (var_7))))))));
                                var_15 = ((/* implicit */_Bool) var_4);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_9])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) arr_10 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])) : (max((((/* implicit */unsigned int) (_Bool)1)), (arr_3 [i_8] [i_8]))))))))));
                            /* LoopSeq 2 */
                            for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
                            {
                                arr_29 [i_0 + 1] [i_1] [i_0 + 1] [i_8] [i_8] [i_10] = ((/* implicit */unsigned char) arr_18 [i_0]);
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */int) var_7)) + (max(((+(((/* implicit */int) var_6)))), ((~(((/* implicit */int) arr_22 [i_0])))))))))));
                            }
                            for (unsigned int i_11 = 2; i_11 < 24; i_11 += 4) 
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((var_5) >> (((((/* implicit */int) var_3)) - (170))))), (max((801272678U), (((/* implicit */unsigned int) (unsigned char)165))))))) ? (((min((((/* implicit */unsigned int) (_Bool)1)), (arr_3 [i_1] [i_9]))) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0] [i_1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (_Bool)1)))))))))));
                                arr_32 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)179)), ((short)0)))) - (((((/* implicit */int) arr_20 [i_0] [i_1] [i_8] [i_11])) - (((/* implicit */int) arr_20 [i_11 - 2] [i_9] [i_0 - 1] [i_0 - 1]))))));
                            }
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_1))));
                            arr_33 [i_0] [i_0] [i_8] [i_9] [i_9] [i_1] = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) 2253164739U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_8] [i_8] [i_1])) != (((/* implicit */int) (_Bool)1)))))) : (arr_31 [i_9] [i_9] [i_0 - 1] [i_0 - 1]))));
                        }
                    } 
                } 
                arr_34 [i_1] [i_1] = ((/* implicit */unsigned short) (!((_Bool)1)));
            }
        } 
    } 
}
