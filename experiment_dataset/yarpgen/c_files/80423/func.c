/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80423
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
    var_20 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_21 -= ((/* implicit */short) ((((/* implicit */int) var_11)) + (((/* implicit */int) ((-926520531) < (-926520531))))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (short)6513))) && (((/* implicit */_Bool) (+(arr_0 [i_2] [i_3]))))));
                        }
                    } 
                } 
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((var_4) | (((/* implicit */long long int) (+((+(((/* implicit */int) (short)-6514)))))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        {
                            arr_15 [i_1] [i_1] = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_7 [i_1] [i_4] [i_4] [i_4 - 1] [i_4 + 1])))), ((-(((/* implicit */int) arr_7 [i_1] [(short)2] [i_1] [i_4 + 1] [i_4 + 1]))))));
                            var_23 = ((/* implicit */short) var_5);
                        }
                    } 
                } 
                arr_16 [i_1] [i_0] = var_11;
            }
        } 
    } 
}
