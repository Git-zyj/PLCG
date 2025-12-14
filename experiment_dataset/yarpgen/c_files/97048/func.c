/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97048
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */int) ((short) ((((((/* implicit */int) (signed char)-110)) + (2147483647))) << (((((/* implicit */int) (unsigned short)7752)) - (7752))))))) : ((+(((arr_3 [i_2] [i_1] [i_0]) / (((/* implicit */int) arr_4 [(unsigned short)11] [i_2]))))))));
                    arr_7 [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) 12568679298747778957ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57470))) : (43685149311006715ULL))) >= (((/* implicit */unsigned long long int) arr_6 [i_0 + 2]))))) >= (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1] [i_1])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), ((~(((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) (signed char)-19))))))))))));
}
