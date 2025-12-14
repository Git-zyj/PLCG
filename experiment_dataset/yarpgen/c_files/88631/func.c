/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88631
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */short) max((((/* implicit */int) min((arr_3 [i_0] [i_0]), (arr_3 [(short)17] [i_0])))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) arr_3 [(unsigned char)5] [i_0]))))));
        var_10 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((unsigned char) arr_1 [i_0])))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) -2517003457587710148LL)) ? (2517003457587710122LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32747)))))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (arr_2 [i_0]))) + (15234)))));
        arr_5 [i_0] = var_5;
        var_11 ^= ((/* implicit */long long int) ((signed char) var_1));
        var_12 = ((/* implicit */short) (unsigned char)213);
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) arr_3 [i_1] [5ULL]);
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1])))))) ? ((~(((((var_3) + (9223372036854775807LL))) >> (((arr_8 [i_1]) + (1053472633))))))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_6 [(_Bool)1])))) ? (var_7) : (((/* implicit */int) ((_Bool) 17179868928LL))))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17179868900LL)) ? (((/* implicit */int) (((-(((/* implicit */int) var_9)))) > (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_5)))))))) : ((-(((((/* implicit */_Bool) (short)20)) ? (arr_2 [(unsigned short)6]) : (((/* implicit */int) var_8))))))));
    }
    var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) << (((((int) min((((/* implicit */long long int) var_8)), (var_3)))) - (393073475)))));
    var_16 = ((/* implicit */short) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_2 = 2; i_2 < 22; i_2 += 1) 
    {
        var_17 = ((/* implicit */long long int) arr_10 [i_2]);
        var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_2 + 1] [(signed char)14]))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_10 [(unsigned char)6])) ? (((/* implicit */int) arr_10 [12ULL])) : (((/* implicit */int) arr_10 [22]))))))) : (max((((/* implicit */long long int) (!(var_0)))), (-17179868929LL)))));
        arr_12 [i_2] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) var_7)) < (arr_11 [i_2] [i_2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_6))))))) : (((/* implicit */int) min((arr_10 [i_2]), (arr_10 [i_2]))))));
        var_19 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)27))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        var_20 = ((unsigned char) (+(((/* implicit */int) arr_16 [i_3] [11ULL]))));
        arr_17 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((/* implicit */long long int) var_7)) : (arr_15 [i_3] [i_3])));
        arr_18 [(unsigned char)8] = ((/* implicit */unsigned short) arr_14 [i_3] [i_3]);
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [(unsigned short)6] [i_3])) ? (arr_15 [i_3] [i_3]) : (arr_14 [i_3] [i_3])));
    }
    var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 17179868923LL)) ? (var_7) : ((+(((/* implicit */int) var_8))))));
}
