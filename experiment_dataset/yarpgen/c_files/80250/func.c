/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80250
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_2] [(short)6] [4LL] |= ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_2]);
                                arr_13 [i_4] [i_0] [i_2] [i_0] [i_0] = ((signed char) var_10);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-5365)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))) * (((/* implicit */int) (signed char)63))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */int) (signed char)-78)) + (2147483647))) >> (((var_2) + (2947403247136882991LL)))))) < ((~(-3463796254895602962LL)))))) < (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)12))))) <= (((/* implicit */int) max((arr_10 [i_0] [i_1] [i_0] [i_1 - 1] [i_1 + 1] [i_0] [i_0]), (arr_4 [i_0])))))))));
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) min((arr_1 [i_2] [i_0]), (max((((/* implicit */long long int) var_11)), (arr_1 [i_0] [i_2])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((long long int) ((long long int) var_10)));
    var_16 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-58)) && (((/* implicit */_Bool) 5014389774253590434LL)))))))));
}
