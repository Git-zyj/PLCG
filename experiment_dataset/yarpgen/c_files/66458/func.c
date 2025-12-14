/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66458
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
    var_13 = ((/* implicit */unsigned char) ((int) var_7));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [11U] [i_0] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) var_6))));
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    arr_9 [(unsigned short)7] [i_0] [i_2] = ((/* implicit */short) (_Bool)1);
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((_Bool) ((int) min((var_11), (var_7)))));
                    arr_11 [i_0] [(unsigned char)4] [i_2] [i_2 - 1] = ((((arr_3 [i_0]) != (arr_3 [i_1]))) ? (((/* implicit */int) var_0)) : ((((!(((/* implicit */_Bool) -2147483639)))) ? ((~(1177427334))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))));
                    arr_12 [i_0] = ((/* implicit */signed char) max((((arr_3 [i_2 - 1]) == (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))))), ((!(((/* implicit */_Bool) arr_2 [i_0]))))));
                }
                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) ((unsigned short) min((((/* implicit */short) arr_7 [i_0] [i_0])), ((short)-4277))))) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)0))))));
            }
        } 
    } 
}
