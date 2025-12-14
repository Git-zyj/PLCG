/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61178
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
    var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((unsigned char)104), (max(((unsigned char)104), (var_7))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0])), (((unsigned long long int) arr_1 [i_0] [(short)6]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)106)))))));
                var_11 = ((/* implicit */short) (unsigned char)242);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 + 1])) ? (((arr_5 [i_3 - 1] [i_3 - 1]) / (arr_5 [i_3 + 1] [i_3 - 1]))) : (((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_3 - 1])) ? (arr_5 [i_3 + 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68)))))));
                            var_13 = ((/* implicit */long long int) (((((~(((/* implicit */int) max(((unsigned char)106), ((unsigned char)0)))))) + (2147483647))) << ((((((-(((/* implicit */int) (unsigned char)64)))) + (75))) - (11)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
