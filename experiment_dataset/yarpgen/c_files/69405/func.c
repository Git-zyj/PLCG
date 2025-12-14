/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69405
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) arr_0 [i_0]);
                arr_4 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) arr_1 [i_1] [i_1 + 2])))) * (((/* implicit */int) max((arr_1 [i_1] [i_1 - 1]), (((/* implicit */short) (_Bool)1)))))));
                var_12 = ((((/* implicit */_Bool) min((12754826381089454602ULL), (min((0ULL), (18446744073709551608ULL)))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (arr_2 [13ULL] [i_0])))));
            }
        } 
    } 
    var_13 -= ((/* implicit */unsigned long long int) (unsigned char)255);
    var_14 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40486))) : (21ULL)))) ? (((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) var_0))), (var_6)))) : (((((12ULL) != (6141617414423158317ULL))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_8))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-32767)))))))));
}
