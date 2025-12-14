/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8508
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
    var_17 |= ((/* implicit */short) -7125916);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) >> (21))) > (((9) / (((/* implicit */int) arr_3 [i_0] [i_1]))))))) <= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 21)) ? (((/* implicit */int) (signed char)88)) : (21)))))))));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((min((((((/* implicit */_Bool) 15)) ? (((/* implicit */unsigned int) 565859715)) : (arr_0 [0ULL]))), (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-89)) + (2147483647))) >> (((((/* implicit */int) (signed char)101)) - (90)))))))), ((~(min((((/* implicit */unsigned int) (unsigned short)65535)), (arr_0 [(signed char)8]))))))))));
                var_19 = ((/* implicit */signed char) (unsigned short)65533);
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */int) ((((/* implicit */_Bool) -31)) && ((_Bool)1)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) -22)) && (((/* implicit */_Bool) 4294967295U)))))))));
                    arr_8 [i_0] = max((((((/* implicit */int) (_Bool)1)) - (-35))), ((+(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_1 [i_0])))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)1042))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((1U), (((/* implicit */unsigned int) (unsigned short)1)))))))) : ((-((~(-1)))))));
}
