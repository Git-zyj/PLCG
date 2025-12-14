/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56742
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
    var_17 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min(((unsigned short)54656), ((unsigned short)54656)));
                arr_5 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)228)), ((unsigned short)65535))))));
                arr_6 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)0)), (-1734527038)))) ? (max((((/* implicit */unsigned int) 917534895)), (arr_4 [i_0 + 2] [(unsigned short)11] [i_1 + 1]))) : (min((arr_4 [i_1] [i_1] [i_1 - 1]), (arr_4 [i_1] [i_1] [i_1 + 1])))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_9))));
    var_20 = ((/* implicit */unsigned short) (unsigned char)1);
    var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) ((signed char) (short)-18423))), (((((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27085))) : (-470825748426027184LL))) << (((121619887) - (121619840)))))));
}
