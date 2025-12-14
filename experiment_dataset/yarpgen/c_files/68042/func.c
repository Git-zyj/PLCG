/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68042
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
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [i_1]))));
                arr_8 [i_1] [i_0] [i_0] = ((/* implicit */short) max((arr_6 [i_0] [i_0 + 1]), (arr_6 [i_1] [i_1])));
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) -7745789900835441571LL))));
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) max(((signed char)-28), ((signed char)27)))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_0]))))))) ? (((/* implicit */int) min((arr_0 [i_0 - 1]), ((!(((/* implicit */_Bool) (signed char)27))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_1])))) && (((/* implicit */_Bool) min(((signed char)-33), ((signed char)27))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (long long int i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            {
                                arr_19 [i_6] = ((/* implicit */signed char) ((((arr_18 [i_6] [i_6] [i_5] [i_5 - 1] [i_6] [i_5 - 1]) == (arr_18 [i_5] [i_6] [i_5] [i_5] [i_6] [i_5 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)15)) && (((/* implicit */_Bool) (signed char)15)))))) * (arr_18 [i_5] [i_6] [i_5 + 2] [i_5] [i_5 + 4] [i_5 + 3])))));
                                arr_20 [i_6] [i_5 - 1] [i_4] [i_5] [i_6] [i_6] = ((/* implicit */long long int) (signed char)27);
                                arr_21 [i_2] [i_6] = ((/* implicit */_Bool) (signed char)43);
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-28)) <= (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)32)), (arr_16 [i_4] [i_3] [i_2])))) ? (((/* implicit */int) arr_13 [i_2])) : (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) arr_16 [i_3] [i_4] [i_5])))))))))));
                                arr_22 [i_2] [i_3] [i_3] [i_4] [i_5] [i_6] [i_6] = ((/* implicit */_Bool) (signed char)27);
                            }
                        } 
                    } 
                } 
                arr_23 [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) arr_9 [i_2] [i_3])) : (((/* implicit */int) arr_9 [i_2] [i_3]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2])) ? (arr_17 [i_2]) : (arr_17 [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-16), ((signed char)15))))) : (arr_10 [i_2])))));
                arr_24 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-28)) >= (((/* implicit */int) (signed char)19)))) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (signed char)9))));
            }
        } 
    } 
}
