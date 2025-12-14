/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78333
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
    var_17 = ((/* implicit */int) min((var_11), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10))))))))));
    var_18 = ((/* implicit */unsigned long long int) ((var_13) >= (((/* implicit */unsigned long long int) var_14))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [0U] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */long long int) var_14);
                                var_19 = ((/* implicit */signed char) (_Bool)1);
                                var_20 = ((/* implicit */short) arr_1 [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_5] [i_5] [i_6] [4LL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (max((var_9), (arr_1 [i_0 + 2] [3U]))))) << (((var_14) - (4113718235U)))))));
                            arr_21 [i_0] [i_0] [i_5] [(short)13] [(_Bool)1] [i_1] = ((/* implicit */int) var_16);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (+(var_1)));
    var_23 = ((/* implicit */int) var_9);
}
