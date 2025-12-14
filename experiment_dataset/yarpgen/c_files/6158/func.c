/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6158
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
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(16128U))))))), (var_7)));
    var_20 = ((/* implicit */unsigned char) (unsigned short)18187);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) var_5);
        var_22 -= ((/* implicit */unsigned int) (unsigned char)80);
        var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 2])))))) | ((-(2382244859U)))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((11520264595611601141ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_1]), (arr_3 [i_1])))))));
        var_25 = arr_0 [i_1] [i_1];
        var_26 = ((/* implicit */unsigned short) (unsigned char)246);
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_27 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_3 [i_2])), (var_9)))) | (((/* implicit */int) arr_4 [i_2])))));
        var_28 = ((/* implicit */unsigned long long int) var_15);
        var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_15))));
        var_30 = ((/* implicit */unsigned int) arr_5 [i_2]);
    }
    var_31 += ((/* implicit */unsigned short) (+(var_12)));
}
