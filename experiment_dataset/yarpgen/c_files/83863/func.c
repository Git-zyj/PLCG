/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83863
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_16) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))))))) * (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_13))), (var_11)))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_4), (var_2)))) % (((/* implicit */int) (signed char)117))))) ? (((/* implicit */int) var_19)) : (max((((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) (short)(-32767 - 1))) : (413186250))), (((/* implicit */int) var_17))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_22 = ((/* implicit */short) var_5);
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)2)) ? (2147483647) : (413186253)));
        arr_4 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        var_23 = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_11))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_1]))))) != (((arr_6 [i_1 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 1]))) : (arr_5 [i_1])))));
    }
    for (int i_2 = 3; i_2 < 19; i_2 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) | (arr_10 [i_2] [(unsigned short)8])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 1]))))))) : (min((((/* implicit */unsigned long long int) arr_8 [i_2 - 2])), (arr_5 [i_2])))))) && (((/* implicit */_Bool) (((-(arr_10 [i_2] [4ULL]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_10 [i_2] [i_2])))))))));
        var_26 = ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)34)), (-1438199224966790753LL)))) ? (min((9385798663514540988ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 2])) ? (((/* implicit */int) arr_6 [i_2])) : (var_3)))) ? (((/* implicit */int) arr_6 [i_2 - 2])) : (((/* implicit */int) ((unsigned char) arr_5 [i_2])))))));
    }
    var_27 = ((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65515), ((unsigned short)41))))) : (var_12));
}
