/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98353
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    arr_9 [2] [i_1 + 1] [i_0] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_1 + 1])) > (((/* implicit */int) arr_5 [i_1 - 1] [i_2 + 3] [i_0]))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))));
                    arr_10 [i_0] [(unsigned short)10] [i_0] = ((/* implicit */_Bool) (~(arr_6 [i_0] [i_0] [i_0] [i_2 + 1])));
                }
                arr_11 [i_0] [3ULL] = ((/* implicit */long long int) ((int) min((((/* implicit */unsigned int) (unsigned short)50580)), (2957321406U))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_12)), (((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned char)185)))))))));
    var_19 += ((/* implicit */unsigned char) max((var_16), (((/* implicit */signed char) var_3))));
    var_20 = ((/* implicit */short) var_4);
}
