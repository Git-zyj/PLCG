/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74001
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
    var_13 = ((/* implicit */unsigned char) 9223372036854775807LL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((((((/* implicit */int) var_12)) >> (((arr_2 [1]) - (3134476625235795053ULL))))) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned short)60290)) >= (((/* implicit */int) var_6))))))));
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) arr_3 [i_0]))))))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) (signed char)-34);
            }
        } 
    } 
}
