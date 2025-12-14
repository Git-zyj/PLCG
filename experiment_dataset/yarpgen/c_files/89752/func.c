/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89752
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4165853349634266309LL)) ? (-4165853349634266305LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50988)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))) <= (min((min((4165853349634266297LL), (-4165853349634266276LL))), (((((/* implicit */_Bool) var_12)) ? (4165853349634266304LL) : (((/* implicit */long long int) var_13))))))));
    var_16 = var_4;
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((var_6), (((/* implicit */unsigned short) ((-4165853349634266276LL) < (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
        var_18 = ((/* implicit */short) (~((-((-(-4165853349634266309LL)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (var_2)))) ? (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_12)))), (((/* implicit */int) max(((unsigned short)58313), (((/* implicit */unsigned short) (signed char)-58)))))))) : (max((var_7), (min((var_4), (((/* implicit */unsigned long long int) var_13))))))));
        var_19 += ((/* implicit */unsigned long long int) arr_6 [16LL] [16LL]);
    }
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 23; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) 1580943807940067878ULL);
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) (short)-23578)))))))));
        var_21 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) (unsigned short)7174)))));
        arr_12 [i_2] [i_2] = ((/* implicit */long long int) arr_9 [i_2] [i_2]);
    }
    var_22 = ((/* implicit */unsigned short) var_13);
}
