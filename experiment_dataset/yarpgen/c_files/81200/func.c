/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81200
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((var_7) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1603684114)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13480))) : (arr_2 [i_0]))))));
        var_21 += ((/* implicit */signed char) ((unsigned int) arr_0 [i_0 + 2]));
    }
    for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_22 = ((((/* implicit */_Bool) -1408165804)) ? (((((/* implicit */_Bool) 812637627)) ? (812637627) : ((-(((/* implicit */int) (unsigned short)1023)))))) : (((/* implicit */int) (unsigned short)39377)));
        var_23 ^= ((/* implicit */short) (((+(((((/* implicit */int) (unsigned short)52078)) >> (((arr_0 [7ULL]) - (815725090))))))) == ((~(((((/* implicit */int) arr_1 [i_1] [i_1])) << (((((-812637608) + (812637637))) - (20)))))))));
        var_24 = ((/* implicit */unsigned int) (~((~(arr_4 [i_1 - 1] [i_1 + 2])))));
        var_25 = ((/* implicit */int) max((((/* implicit */unsigned int) ((var_3) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) -812637626)) ? (812637653) : (arr_3 [i_1 + 2] [i_1 + 2]))))))), (((max((var_3), (((/* implicit */unsigned int) (short)-5781)))) ^ (((((/* implicit */_Bool) -1321016925)) ? (4020489954U) : (((/* implicit */unsigned int) arr_0 [i_1]))))))));
    }
    for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */int) arr_5 [i_2])) >> (((((unsigned long long int) 1219255219)) - (1219255208ULL))))))));
        var_27 = (((+(((/* implicit */int) arr_9 [i_2 + 2])))) % (var_4));
    }
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((unsigned short) (unsigned short)10397)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_7)))) ? (((((/* implicit */_Bool) (unsigned char)133)) ? (812637653) : (var_19))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)36026)) : (((/* implicit */int) (unsigned short)39377)))))) : (((/* implicit */int) var_13))));
}
