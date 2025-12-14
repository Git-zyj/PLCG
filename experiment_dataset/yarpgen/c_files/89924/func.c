/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89924
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) != (arr_1 [i_0])))))));
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) != (arr_1 [i_0]))))) - (((arr_0 [i_0] [i_0]) * (arr_0 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) arr_8 [i_2] [i_2] [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) ((_Bool) arr_4 [i_0] [i_1] [i_0]));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_3])))) + (arr_1 [i_2])));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_2] = ((/* implicit */signed char) arr_10 [i_2] [i_2] [i_1] [i_0]);
                }
            } 
        } 
        arr_18 [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])))))) * (((unsigned int) arr_7 [i_0] [i_0] [i_0])));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                {
                    arr_24 [i_0] [i_5] [i_5] = ((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_5] [i_6] [i_6]));
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((arr_12 [i_0] [i_0]) | (arr_12 [i_6] [i_5]))))));
                    arr_25 [i_0] [i_5] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_0]))))) ? (((((/* implicit */int) arr_21 [i_0] [i_6])) / (((/* implicit */int) arr_11 [i_0] [i_5] [i_6])))) : (((((/* implicit */int) arr_9 [i_0] [i_5] [i_6] [i_6])) * (((/* implicit */int) arr_10 [i_6] [i_5] [i_0] [i_0]))))));
                    arr_26 [i_0] [i_5] [i_5] [i_6] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_6] [i_5] [i_5] [i_5] [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_5] [i_6])))))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */long long int) max((min((((((/* implicit */int) var_1)) - (((/* implicit */int) var_1)))), (((((/* implicit */int) var_10)) + (var_7))))), (((/* implicit */int) var_3))));
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_3))))))))));
    var_18 = ((/* implicit */_Bool) (((~(-947961369))) >> (((((/* implicit */int) (unsigned short)65535)) - (65509)))));
    var_19 = ((/* implicit */unsigned char) var_7);
}
