/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71420
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
    var_15 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_11)), (var_14))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */_Bool) (+(var_1)));
                var_17 = ((/* implicit */unsigned char) var_5);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                arr_9 [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) min((((((arr_8 [i_3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_7 [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (var_1))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) var_6);
                            arr_14 [i_5] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_8);
                            arr_15 [i_5] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) (-(min((min((arr_7 [i_2]), (arr_6 [5ULL]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5715374182629702331LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_2))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) (~(18446744073709551592ULL)));
            }
        } 
    } 
}
