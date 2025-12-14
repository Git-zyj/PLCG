/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72606
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
    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_6))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_22 ^= ((/* implicit */short) ((signed char) ((unsigned char) arr_1 [i_0])));
        var_23 = ((/* implicit */short) ((min((var_17), (((/* implicit */unsigned long long int) arr_0 [i_0])))) == (((/* implicit */unsigned long long int) min((arr_0 [i_0]), (arr_1 [i_0]))))));
    }
    for (int i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (~(5868661563488550301LL))))));
        arr_4 [i_1] = ((((/* implicit */_Bool) (short)-14658)) ? (4333657781734911778ULL) : (4333657781734911773ULL));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_25 = 566102766;
        arr_9 [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_6 [i_2])))), (((/* implicit */int) min((arr_6 [i_2]), (arr_6 [i_2]))))));
    }
    /* vectorizable */
    for (short i_3 = 2; i_3 < 10; i_3 += 3) 
    {
        arr_12 [(_Bool)1] [0ULL] |= ((/* implicit */short) ((unsigned int) var_11));
        var_26 = ((((/* implicit */_Bool) var_13)) ? (arr_10 [6LL]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(unsigned short)10])))))));
        var_27 = var_10;
    }
}
