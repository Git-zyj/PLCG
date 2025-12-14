/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86748
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
    var_13 = ((/* implicit */short) var_8);
    var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_10))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_15 -= ((/* implicit */unsigned char) max(((-(-2184754303295139975LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [(short)12] [(short)12])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1] [i_1] [i_2] [i_3] [i_4])) ? (arr_10 [1LL] [1LL] [i_2] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)61))))) : ((+(((/* implicit */int) arr_11 [i_0] [9] [i_2] [i_2] [i_3] [i_4]))))));
                                var_17 = ((/* implicit */signed char) min((arr_17 [i_0] [i_0] [(signed char)4] [i_0] [i_4]), (((/* implicit */unsigned char) var_12))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */int) (((((~(var_8))) + (9223372036854775807LL))) << (((((max((-8501803441879188178LL), (((/* implicit */long long int) var_5)))) + (1054769537LL))) - (1LL)))));
}
