/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91294
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
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [1ULL] [i_1])) ? (max((8709611335927984250ULL), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25)))))) ? (((arr_1 [i_1]) << (((((((/* implicit */_Bool) arr_1 [12U])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_2 [i_0] [i_1])))) + (58))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)4751)))))) + (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0])))))));
                var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) min(((~(((arr_0 [(_Bool)1]) ^ (((/* implicit */long long int) arr_4 [i_0] [i_1])))))), (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (min((arr_0 [i_0]), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) (signed char)-3)) + (16)))))))))))));
                var_12 &= ((/* implicit */int) 16921130171912226884ULL);
            }
        } 
    } 
    var_13 = ((/* implicit */int) min((var_13), (max((((var_10) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_0)))), (((/* implicit */int) (short)-15259))))));
}
