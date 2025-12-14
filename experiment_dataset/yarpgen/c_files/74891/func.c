/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74891
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
    var_18 = ((/* implicit */_Bool) 3555520203U);
    var_19 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                var_20 = (+(((4015440001U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 - 4]))))));
                var_21 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) max((var_14), (var_16)))))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 12U)) & (((((/* implicit */unsigned long long int) max((3555520186U), (739447093U)))) ^ (max((((/* implicit */unsigned long long int) 4294967290U)), (arr_2 [i_0])))))));
            }
        } 
    } 
}
