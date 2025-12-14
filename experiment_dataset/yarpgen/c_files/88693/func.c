/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88693
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_13 [8ULL] [i_1 + 3] [i_0] [i_1 + 3] [0] = ((/* implicit */int) var_8);
                                var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */int) (unsigned short)7492)), (-2061828269)))) + ((~(arr_4 [i_3 - 2] [i_1 + 1] [8] [(unsigned short)7])))));
                                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) var_8)) / (arr_6 [i_0] [i_1] [i_4] [i_3]))))) ? (((/* implicit */unsigned long long int) (+(0U)))) : (((((/* implicit */_Bool) arr_4 [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((arr_3 [i_0]) - (((/* implicit */int) (unsigned short)7492))))) : (min((((/* implicit */unsigned long long int) arr_5 [i_4])), (arr_7 [i_1 + 3] [i_2] [i_1 + 3] [i_4]))))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_1] [i_0] [i_0] [6LL] [i_1 + 1]);
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) 524280U));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 22; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) max((max((arr_16 [i_5 + 2]), (arr_16 [i_5 + 2]))), ((-(arr_16 [i_5 + 1])))));
                /* LoopSeq 2 */
                for (long long int i_7 = 2; i_7 < 22; i_7 += 1) 
                {
                    var_15 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7 - 2]))) : (arr_21 [i_6] [10LL] [14LL] [i_5]))) & ((+(arr_19 [i_5]))))), (((/* implicit */long long int) var_5))));
                    var_16 ^= ((/* implicit */unsigned long long int) arr_23 [i_5] [i_5] [i_7] [i_7 + 2]);
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 4) 
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_5] [7LL] [i_8 + 1] [i_5 + 1])) ? (((arr_18 [i_5] [i_5]) >> (((((/* implicit */int) arr_22 [i_8])) - (18133))))) : (((((/* implicit */_Bool) arr_17 [i_5 - 2] [i_5])) ? (-1617391447409893404LL) : (((/* implicit */long long int) 1))))));
                    arr_26 [i_5] [i_6] [i_5] [16U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)7505))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_0);
    var_19 = ((/* implicit */long long int) 0U);
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(3050331876U))))));
}
