/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62751
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
    var_12 |= ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] [(unsigned char)5] = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned short) ((max((2501447730U), (((/* implicit */unsigned int) (unsigned short)65528)))) != (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)14229)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) (short)983)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)32763)))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0 - 3] [i_0 - 3]) : (arr_2 [i_0 - 2] [i_0]))))) : (((/* implicit */unsigned long long int) var_3))));
        var_13 = ((/* implicit */int) arr_0 [i_0]);
    }
    var_14 = ((/* implicit */_Bool) max((var_14), (((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7)))))) >= ((((!(((/* implicit */_Bool) 4294967272U)))) ? (((((/* implicit */_Bool) (unsigned short)21883)) ? (-2272476393028129250LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9))))))))));
}
