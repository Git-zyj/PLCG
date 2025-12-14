/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85634
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
    var_16 = ((/* implicit */signed char) ((max((((/* implicit */int) (signed char)-1)), (min((var_15), (var_15))))) >> ((((-(var_15))) + (1708962231)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [(unsigned char)1] [i_2] = ((((/* implicit */_Bool) min((arr_7 [i_0] [i_1]), (arr_7 [i_1] [i_2])))) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) ((unsigned char) var_4))) : (((int) var_8)))) : (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) ((222065270U) > (((/* implicit */unsigned int) -631460582)))))))));
                    var_17 = ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */int) (_Bool)1)), (-631460596))));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_2]))) - (var_7))) * (((/* implicit */unsigned int) ((int) arr_5 [i_0] [i_1] [i_1])))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_5 [i_2] [i_1] [i_2])) >= (631460581))) ? (631460571) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)179)) : (-375529241))) != (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_4)))))))));
                    arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) var_1);
                }
            } 
        } 
    } 
}
