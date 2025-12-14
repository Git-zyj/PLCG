/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89397
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
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_0 + 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11373)))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [(signed char)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_0 [(_Bool)1] [(unsigned char)11]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)73))))))) & (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121))) : (2664244380U)))))));
                arr_7 [(unsigned short)10] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) && (((/* implicit */_Bool) arr_5 [i_0] [i_0]))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) var_4);
}
