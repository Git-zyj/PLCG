/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82938
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (var_3))))));
    var_14 -= ((/* implicit */short) min(((~(((((/* implicit */_Bool) 1724587732)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -424742196)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)25018))))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) (short)32766)), (701469494U))) == (((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */short) var_2)), (arr_2 [i_0])))))))));
        var_16 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (_Bool)1)), (((unsigned int) arr_2 [i_0]))));
    }
    for (short i_1 = 3; i_1 < 13; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((unsigned long long int) 2838176481090202021LL)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0)))))))) ? ((+(((/* implicit */int) var_2)))) : ((~(((/* implicit */int) (short)-19863))))));
        var_17 = ((/* implicit */int) max((((((/* implicit */_Bool) (short)-2394)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) : (max((((/* implicit */unsigned long long int) -734009141)), (var_5))))), (((/* implicit */unsigned long long int) (short)19871))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) 8LL)))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) (short)-2380)) ? (arr_6 [i_2]) : (((/* implicit */unsigned long long int) var_4)))))));
    }
}
