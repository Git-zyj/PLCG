/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81297
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (short)-5549);
                arr_7 [i_0] [i_1 - 1] [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-5549)), (-1097454441)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31)))))) ? (min((var_12), (((/* implicit */long long int) arr_2 [i_0] [i_1 + 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [4ULL] [4ULL])) ? (1501152474U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-5549)))))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0])))))));
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) 1359620433U)) ? (((/* implicit */int) (unsigned char)23)) : (1519926852))) : (var_7));
    var_17 -= ((/* implicit */int) (unsigned char)226);
    var_18 = ((/* implicit */unsigned short) 2027544265U);
}
