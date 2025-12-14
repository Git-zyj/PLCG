/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60945
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
    var_11 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
    var_12 = ((/* implicit */int) ((unsigned short) var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) max(((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << ((((((_Bool)1) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))))) - (4703927624292675984LL))))), (max((((/* implicit */int) min((var_4), (((/* implicit */unsigned char) (_Bool)1))))), (((((/* implicit */_Bool) (short)1023)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)45111))))))));
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_0]))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [i_1])), (((((/* implicit */_Bool) (short)-13767)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45111))))))), (((/* implicit */unsigned long long int) (!(((arr_0 [i_0] [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))))))))));
            }
        } 
    } 
}
