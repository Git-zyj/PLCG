/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6723
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)53099)) && (((/* implicit */_Bool) 4102559453U))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (min((7241937547058451415ULL), (9624641435944354341ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31863)))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7241937547058451418ULL)) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10455059870925748375ULL)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1]))))) : (((((/* implicit */_Bool) 7241937547058451415ULL)) ? (((/* implicit */unsigned long long int) var_19)) : (var_16)))));
    }
    for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) max((max((((((/* implicit */_Bool) -2427973502349593220LL)) ? (var_16) : (((/* implicit */unsigned long long int) -2427973502349593220LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) var_2))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775797LL)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_1 [i_1]))))) : (2427973502349593220LL))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-1253772930159629592LL) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (4138235922802945477LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_0 [i_2 + 2])) : (10363745455947853515ULL)))));
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((/* implicit */_Bool) 36028797018947584LL)) ? (((/* implicit */unsigned long long int) var_5)) : (10514928031980690941ULL)))));
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))));
            var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_0 [i_2]) : (((/* implicit */long long int) var_15))))) ? (var_17) : (2427973502349593220LL));
            arr_9 [i_1] = ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 2])) ? (arr_7 [i_1 - 1] [i_1 - 1]) : (arr_7 [i_1 + 2] [i_1 + 1]));
        }
    }
}
