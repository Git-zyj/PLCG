/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62075
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned short) (short)-20435);
                arr_8 [i_1] [i_0 + 1] [i_1] = ((/* implicit */short) (unsigned char)131);
                arr_9 [i_1] [i_1] [i_0 + 1] = ((/* implicit */long long int) (((((+(arr_2 [i_0 - 1]))) << ((((~(((/* implicit */int) arr_3 [(unsigned short)2] [i_0])))) + (12))))) << (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])), (arr_6 [i_0] [i_1])))) && (((/* implicit */_Bool) min((((/* implicit */signed char) arr_1 [i_1])), ((signed char)-41)))))))));
                arr_10 [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned char) arr_1 [i_1]);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) var_7);
    var_12 = ((/* implicit */_Bool) ((((((((/* implicit */int) var_3)) | (((/* implicit */int) var_8)))) >> ((((+(((/* implicit */int) (short)8689)))) - (8673))))) / (min(((~(((/* implicit */int) var_0)))), (((/* implicit */int) ((signed char) var_9)))))));
}
