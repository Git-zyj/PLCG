/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9769
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */short) ((int) (~(((/* implicit */int) (signed char)(-127 - 1))))));
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) min((arr_16 [i_1] [i_4 + 2] [i_4] [i_4 - 1] [i_4 - 1]), (arr_16 [i_2] [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4 - 1])));
                                var_11 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) var_3)), (2399833888119495752ULL))), (((/* implicit */unsigned long long int) max((arr_12 [i_0] [i_1] [8LL] [i_4]), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) -725613532)) != (arr_5 [i_0] [i_0] [i_0] [i_0])))))))));
                                arr_19 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [(unsigned char)12] = max((((/* implicit */long long int) arr_11 [i_0] [i_1] [i_1] [i_1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_4])) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_10), (((/* implicit */short) arr_3 [i_0] [i_0] [i_0])))))) : (var_6))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 *= ((/* implicit */unsigned short) var_2);
}
