/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64575
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) ((((int) 9ULL)) - (((/* implicit */int) ((short) 2656981242312024593LL)))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_0]))), (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [3]) : (((/* implicit */unsigned long long int) var_3))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -262435941)) >= (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_18 = ((/* implicit */int) (+(max((arr_5 [i_1]), (arr_5 [i_1])))));
        arr_6 [i_1] [i_1] |= ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
        /* LoopNest 3 */
        for (signed char i_2 = 3; i_2 < 20; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (signed char i_4 = 4; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_19 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(-194792842))))));
                        var_20 -= ((/* implicit */unsigned long long int) max(((~(arr_5 [i_1]))), (((/* implicit */long long int) arr_4 [i_4] [18LL]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 4) 
    {
        arr_16 [(unsigned char)1] [i_5 - 1] = ((/* implicit */unsigned int) ((((-8728031905309505949LL) + (9223372036854775807LL))) << (((((1483831492U) >> (((((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */int) (unsigned short)28352)) : (((/* implicit */int) (unsigned short)28352)))) - (28347))))) - (46369734U)))));
        arr_17 [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_15 [i_5 + 1] [i_5 - 1])), (((unsigned long long int) arr_15 [i_5 - 1] [i_5 - 1]))));
    }
    var_21 = ((/* implicit */unsigned long long int) var_13);
}
