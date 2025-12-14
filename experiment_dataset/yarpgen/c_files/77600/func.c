/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77600
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_16 += ((/* implicit */signed char) (((~(((((/* implicit */_Bool) 65534U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)45)))))) | ((~(((/* implicit */int) ((((/* implicit */unsigned int) 1639237284)) >= (4294901761U))))))));
        arr_2 [0] = ((/* implicit */unsigned long long int) ((unsigned int) 1767423654));
        arr_3 [i_0 - 2] = ((/* implicit */long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 7339667873060683051LL))))), ((signed char)116)));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_8 [(_Bool)1] = ((/* implicit */int) min((min(((~(4294901735U))), (((/* implicit */unsigned int) ((int) arr_1 [(unsigned char)11] [10U]))))), ((((~(4294901735U))) & (arr_7 [(signed char)7] [(signed char)13])))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(1767423661))))));
    }
    var_18 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_10)));
}
