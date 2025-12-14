/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73889
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
    var_10 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (short)-32080)), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-114))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_7))) : (var_7)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 ^= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (signed char)127))))));
                var_12 = ((/* implicit */int) ((((/* implicit */int) (signed char)-108)) <= (((/* implicit */int) var_4))));
                var_13 = ((((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)18983))))))) <= (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) ((arr_0 [i_0]) && (((/* implicit */_Bool) var_6)))))))));
                arr_8 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((4603728494848586715LL), (((/* implicit */long long int) var_3))))) ? (871340181604287572LL) : (((/* implicit */long long int) ((/* implicit */int) max(((signed char)118), (((/* implicit */signed char) arr_0 [i_0])))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((max((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) 4611404543450677248LL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42131))))))) * ((+(min((((/* implicit */unsigned int) (signed char)122)), (var_7)))))));
    var_15 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) var_5)), (var_2))), (((var_2) << (((/* implicit */int) (!(((/* implicit */_Bool) 1152550399419700934LL)))))))));
}
