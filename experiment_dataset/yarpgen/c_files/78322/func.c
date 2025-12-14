/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78322
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 += ((/* implicit */unsigned short) var_0);
        var_16 += ((/* implicit */_Bool) arr_2 [(short)8] [i_0]);
        var_17 = ((/* implicit */unsigned int) max((5794320376549107334LL), (((/* implicit */long long int) 729293228U))));
        var_18 = ((/* implicit */_Bool) (short)-27419);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((((/* implicit */_Bool) (unsigned char)226)) && (arr_4 [(unsigned short)16]));
        arr_7 [i_1] = ((/* implicit */int) ((unsigned char) ((unsigned char) arr_1 [(unsigned short)10])));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-((~(((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_3 [6U])))))))))));
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)21309)) < (((((/* implicit */_Bool) 2028043877U)) ? ((+(((/* implicit */int) (unsigned char)11)))) : (((/* implicit */int) arr_3 [(signed char)2]))))));
    }
    var_20 ^= ((/* implicit */unsigned short) var_5);
}
