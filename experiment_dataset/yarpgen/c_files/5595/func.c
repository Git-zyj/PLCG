/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5595
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned short)31324)), (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (arr_3 [i_1 - 2]) : (arr_3 [i_1 - 2]))))))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31324)) ^ (((/* implicit */int) arr_2 [i_1] [i_1 + 2]))))) ? (((arr_10 [i_1] [i_1 + 2] [i_1] [i_1 - 1] [i_1 + 3]) | (arr_5 [i_1] [i_1 + 2] [2U]))) : (arr_10 [i_1 + 1] [i_1 + 2] [i_1] [i_1 - 1] [i_1 + 3]))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((unsigned long long int) arr_10 [i_0] [i_0] [8U] [i_0] [i_0])) << ((((~(((/* implicit */int) arr_1 [i_2] [i_0])))) + (15))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (unsigned short)34211);
}
