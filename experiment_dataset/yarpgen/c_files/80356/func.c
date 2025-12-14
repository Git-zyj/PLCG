/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80356
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = var_0;
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_7 [i_0] [14ULL] [i_1] = ((var_15) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [22ULL]))));
            arr_8 [i_0] [(unsigned short)24] [(unsigned short)13] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && ((!(((/* implicit */_Bool) 13127366862536143877ULL))))));
            var_19 &= var_13;
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_6 [(unsigned short)13] [i_1]))));
        }
    }
    for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned short) max((var_0), (((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (unsigned short)58855)))) + (2147483647))) >> (((var_17) - (14952201542024496188ULL))))))));
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)43706))))) != ((-(5319377211173407738ULL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (10440559909480779976ULL))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23766))) != (max((((/* implicit */unsigned long long int) arr_9 [i_2])), (arr_11 [i_2] [i_2]))))))));
        var_21 = (unsigned short)10405;
        var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (unsigned short)37339)))))) ? (((max((8448687506871710455ULL), (var_11))) + (max((6230484131061391461ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))))) : (min((((/* implicit */unsigned long long int) arr_9 [i_2 - 1])), (((((/* implicit */_Bool) (unsigned short)32767)) ? (5319377211173407737ULL) : (3294212530360879432ULL)))))));
    }
    var_23 = ((/* implicit */unsigned short) ((var_6) << (((var_0) - (1028054785338932001ULL)))));
    var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12216259942648160155ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)22439))))) >= (((((/* implicit */_Bool) (unsigned short)50676)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47441))))))))));
}
