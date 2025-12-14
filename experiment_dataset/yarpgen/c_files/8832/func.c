/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8832
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
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(var_8)))))) ? (max((((((/* implicit */int) var_1)) | (((/* implicit */int) var_7)))), (((/* implicit */int) (unsigned char)221)))) : ((~(((/* implicit */int) var_3)))))))));
    var_12 |= ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [10ULL] [i_1] = arr_1 [i_1];
                    arr_9 [2] [i_1] [i_0] = ((/* implicit */short) min(((((!(((/* implicit */_Bool) arr_2 [i_1] [(unsigned char)8])))) ? (((((/* implicit */_Bool) 48744895U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_2 [i_2] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))))), (max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [(unsigned char)5])))))))));
                }
            } 
        } 
    } 
}
