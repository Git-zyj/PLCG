/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93956
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
    var_19 += ((/* implicit */int) -5194752772006629705LL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) (~(((-2006077745) | (((/* implicit */int) (signed char)-3))))));
                arr_6 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) 3014877510933407717LL);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    arr_10 [i_2] = ((/* implicit */long long int) arr_3 [i_1]);
                    arr_11 [i_0 + 1] [i_1] [i_1] [i_2] = ((/* implicit */short) (((~(((/* implicit */int) arr_4 [i_0 + 2])))) - (((/* implicit */int) (unsigned char)227))));
                }
                for (short i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    var_21 *= ((/* implicit */int) ((arr_9 [8] [i_1] [i_0]) != (((/* implicit */unsigned long long int) 3471271310U))));
                    var_22 = ((/* implicit */signed char) min((823695986U), (((/* implicit */unsigned int) 353200272))));
                }
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
            }
        } 
    } 
}
