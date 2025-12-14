/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85354
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 += ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_11))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_21 = 9223372036854775807LL;
                                var_22 *= ((/* implicit */short) var_18);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 *= ((/* implicit */int) var_13);
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        for (int i_6 = 3; i_6 < 15; i_6 += 4) 
        {
            {
                arr_17 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((int) arr_13 [i_6 - 1] [i_5]));
                var_24 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_5] [i_5])) || (((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) arr_14 [i_5] [i_5]))))))));
                var_25 *= ((/* implicit */signed char) ((max((11315770663746291960ULL), (((/* implicit */unsigned long long int) 1811464181)))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_5] [i_6 - 1])) / (1640354306))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) var_0))));
}
