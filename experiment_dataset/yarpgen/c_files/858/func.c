/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/858
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1 - 3] [i_0] = ((/* implicit */unsigned int) ((8657331921000978604LL) << (((((/* implicit */int) (short)215)) - (215)))));
                    var_10 &= (~((~(((/* implicit */int) arr_2 [i_2 + 2] [i_1 - 1])))));
                    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) var_5))));
                    var_12 = ((/* implicit */unsigned int) var_7);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            {
                var_13 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_4] [i_4])) & (((/* implicit */int) min((((/* implicit */signed char) ((1956255664) < (-735373960)))), ((signed char)-1))))));
                arr_13 [i_4] [i_4] [i_4] = ((/* implicit */long long int) arr_11 [i_4] [i_4]);
                var_14 = ((/* implicit */signed char) arr_10 [i_3] [i_3]);
                arr_14 [i_4] = ((/* implicit */long long int) min((((/* implicit */signed char) ((9223372036854775807LL) <= (((/* implicit */long long int) arr_9 [i_3]))))), ((signed char)-1)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) 9223372036854775801LL)) * (var_6)))));
}
