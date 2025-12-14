/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61315
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
    var_15 |= ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) arr_10 [i_2 + 1] [(_Bool)1] [i_2 + 1] [i_2 + 1] [i_2] [9U])))));
                            arr_11 [(unsigned short)6] [i_1] [(unsigned short)6] [i_3] = ((/* implicit */unsigned short) (+((((+(((/* implicit */int) var_13)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) ((signed char) arr_3 [i_0] [i_1] [i_0]))))), (((/* implicit */int) arr_7 [i_2]))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) max((var_17), (((long long int) ((((/* implicit */long long int) arr_5 [i_1 - 3] [i_1 - 4])) / (1125899369971712LL))))));
                var_18 = ((/* implicit */int) ((6512928997569624987ULL) / (((/* implicit */unsigned long long int) ((int) ((short) var_8))))));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */_Bool) arr_1 [i_0]);
                                arr_23 [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) min((var_14), (((/* implicit */int) arr_14 [20ULL] [i_1] [(short)1] [i_6]))))) ? ((-(373307530676055723ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
