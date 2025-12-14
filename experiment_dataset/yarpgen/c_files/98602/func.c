/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98602
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
    var_14 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    arr_8 [i_2] = ((/* implicit */int) ((long long int) arr_4 [i_2 + 3] [i_2] [i_2]));
                    var_15 -= ((/* implicit */short) ((unsigned short) arr_4 [i_2 - 2] [i_2 + 4] [i_2 - 2]));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(1590711078)))) ? (arr_4 [i_1] [i_1] [i_2 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2 + 4] [i_0]))))))));
                    arr_9 [7ULL] [i_1] [i_2] = ((/* implicit */unsigned short) (_Bool)0);
                }
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0] [i_0]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)11] [(short)11]))) ^ (((((/* implicit */unsigned int) var_11)) - (var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                arr_10 [(unsigned short)17] [(unsigned short)17] = ((/* implicit */short) (-(((/* implicit */int) var_6))));
            }
        } 
    } 
}
