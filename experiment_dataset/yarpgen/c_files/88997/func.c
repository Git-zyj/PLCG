/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88997
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
    var_15 = var_9;
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)37700)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2163337869U)))) : (min((((/* implicit */long long int) (unsigned short)53927)), (var_6))))), (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)53928))))))))))));
    var_17 = ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) min(((unsigned short)31221), (((/* implicit */unsigned short) var_3))))), (min((((/* implicit */unsigned int) (short)63)), (var_10))))));
    var_18 = ((/* implicit */unsigned int) min((((((/* implicit */int) (short)4355)) + (((/* implicit */int) (signed char)-6)))), (((/* implicit */int) (unsigned short)53928))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)247)) / (((/* implicit */int) arr_0 [i_0]))))));
        var_19 = ((/* implicit */short) (_Bool)1);
        var_20 -= ((/* implicit */unsigned long long int) ((int) -1404045566));
    }
    for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 3) 
    {
        var_21 &= ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)53952))))));
        var_22 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_1 [i_1 - 2])) && (((/* implicit */_Bool) var_1)))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) arr_6 [i_1 + 1] [i_1 - 1]))))))));
    }
}
