/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93508
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_3 + 2] [9])) ? (((/* implicit */int) arr_8 [i_2 + 2] [i_3 - 1] [i_3 - 2])) : (((/* implicit */int) arr_8 [i_2 + 2] [i_3 + 1] [i_2])))) > (((int) (signed char)-115))));
                            var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_3])), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_3 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1711742263674590897LL)))))) : (((unsigned int) -2LL))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) (-((+(arr_3 [i_0] [i_1])))));
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((-2038074677517051203LL) | (((/* implicit */long long int) (+(arr_6 [i_0] [i_1] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */unsigned short) var_9);
}
