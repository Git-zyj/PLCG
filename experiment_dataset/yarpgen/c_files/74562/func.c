/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74562
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) arr_4 [(_Bool)1] [(short)12]);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    var_17 = ((/* implicit */long long int) (~(((/* implicit */int) (short)17))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_1] [i_2])) : (((/* implicit */int) arr_0 [4ULL] [4ULL]))))) ? (((unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0])) & (((/* implicit */int) arr_4 [i_1] [i_2]))))) ? (((/* implicit */int) max((arr_3 [i_1] [i_2]), (((signed char) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))) < (var_8)))) > ((-(((/* implicit */int) var_3)))))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((var_12) < (((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) var_3))))))));
    var_20 -= var_7;
}
