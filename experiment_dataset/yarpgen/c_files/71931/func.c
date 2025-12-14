/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71931
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (signed char)-76)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) ^ ((~(((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
                arr_7 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((arr_1 [i_0]) - (((/* implicit */unsigned int) var_19)))) * (((/* implicit */unsigned int) var_12)))))));
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_20 = var_15;
                                var_21 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) arr_3 [i_2 - 2] [i_2])) > (arr_4 [i_0] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_3] [i_2] [i_1] [i_0]))) : (min((((/* implicit */long long int) arr_8 [i_2 + 1] [i_3])), (arr_2 [i_1])))));
                                arr_15 [i_3] [i_4] = ((/* implicit */unsigned int) var_1);
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) arr_1 [i_0]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        for (long long int i_6 = 1; i_6 < 13; i_6 += 3) 
        {
            for (signed char i_7 = 3; i_7 < 11; i_7 += 1) 
            {
                {
                    arr_25 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) (_Bool)1);
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_3))));
                    arr_26 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) : ((~(((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_5]))))));
                }
            } 
        } 
    } 
}
