/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87369
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
    var_16 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)-18220)) ? (6713044865896626879ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))), (((/* implicit */unsigned long long int) var_1))));
    var_17 += ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 6; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_1 - 1] = min((var_12), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_3 [i_0] [(short)3]))))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_2 [i_1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) (unsigned short)33954)) : (((/* implicit */int) (unsigned char)63))))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 1])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) max(((~(((((/* implicit */int) var_11)) | (((/* implicit */int) var_11)))))), (((/* implicit */int) (unsigned char)204))));
}
