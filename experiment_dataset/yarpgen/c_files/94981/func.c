/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94981
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) arr_0 [18ULL])) ? (((/* implicit */int) ((((((/* implicit */int) (signed char)18)) % (((/* implicit */int) (unsigned short)65532)))) > (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)18)), (var_14))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))));
                    var_19 = ((/* implicit */unsigned long long int) (signed char)-19);
                    var_20 = arr_0 [i_1];
                }
            } 
        } 
    } 
    var_21 -= ((/* implicit */unsigned long long int) (-(var_18)));
    var_22 = ((/* implicit */_Bool) (~(var_5)));
    var_23 = ((/* implicit */signed char) max(((-((~(var_0))))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) / ((+(((/* implicit */int) var_17)))))))));
}
