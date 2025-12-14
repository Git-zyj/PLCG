/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78273
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_1]);
                    var_11 = ((/* implicit */short) ((((((/* implicit */int) arr_7 [i_0] [3ULL] [i_2])) | (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))) << (((((/* implicit */int) var_5)) + (135)))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)-37)))) * (((/* implicit */int) (short)-11176))));
                    arr_10 [i_1] = ((/* implicit */short) (+(((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)30))));
    var_13 = ((/* implicit */signed char) var_7);
    var_14 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_1)) ? (((unsigned long long int) (short)32767)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 445009898)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3019259922U))))))));
}
