/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72944
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
    var_18 = ((/* implicit */unsigned char) min((((((var_16) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))))) * (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-114))))))), (((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) (unsigned char)255))), (((((/* implicit */int) (signed char)30)) << (((((/* implicit */int) var_1)) - (86))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((max((5ULL), (arr_2 [i_0 - 1]))) | (((arr_2 [i_0 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) >= (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    for (unsigned short i_1 = 2; i_1 < 11; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = (-((+(((4061574704U) + (3208354315U))))));
        var_20 = ((/* implicit */long long int) (~(var_6)));
        var_21 = ((/* implicit */unsigned char) (((+(arr_2 [1LL]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)160))))));
    }
    var_22 *= ((/* implicit */unsigned char) var_1);
    var_23 = ((/* implicit */long long int) ((unsigned short) (!(((((/* implicit */int) (unsigned char)150)) >= (((/* implicit */int) var_11)))))));
}
