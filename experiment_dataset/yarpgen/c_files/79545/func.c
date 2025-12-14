/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79545
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
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) min(((!(((/* implicit */_Bool) min((16477358820714036804ULL), (((/* implicit */unsigned long long int) (short)-6248))))))), (((((/* implicit */_Bool) var_4)) || (((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (short)-31071)))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    var_16 = ((/* implicit */unsigned long long int) arr_7 [i_2] [(unsigned short)10] [i_0]);
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) (short)-28165))))))))))));
                }
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    var_18 = ((/* implicit */unsigned short) arr_7 [i_1] [i_1] [11ULL]);
                    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0]))));
                }
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */short) ((arr_0 [i_1]) >= (((/* implicit */unsigned long long int) 785468160U))))), ((short)252))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 10; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        {
                            var_20 ^= arr_4 [i_5] [(unsigned short)11] [(unsigned short)13];
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_9))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_4);
}
