/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86680
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_13 = ((((/* implicit */_Bool) (unsigned short)7408)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)58117)) != (-157675776)))))));
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65524)) ? (4894943928121487745ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 284709835)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_0])))))))) ? (((arr_1 [i_0] [i_0]) + (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) -890552144))));
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((var_3), (var_0))), (((/* implicit */int) (unsigned short)7408))))) ? (arr_4 [i_1]) : (((((var_12) + (2147483647))) << (((max((var_0), (((/* implicit */int) arr_5 [i_1] [i_1])))) - (899026343)))))));
            arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1358303400)) && (((/* implicit */_Bool) (unsigned short)27)))))) != (((((/* implicit */_Bool) min((arr_4 [i_1]), (-890552160)))) ? (((((/* implicit */_Bool) -890552144)) ? (3021174722803224510ULL) : (var_1))) : (((/* implicit */unsigned long long int) var_8))))));
        }
        arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) -157675782)) ? ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) var_12)) : (((long long int) (signed char)-63)))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_4 [(signed char)14]))))))))));
        arr_10 [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1796421379680479088LL)))))))) && (((((/* implicit */_Bool) ((3613849468U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65508)))))) && ((!(((/* implicit */_Bool) 3340773817873132497ULL)))))));
        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (-4550296744162814404LL) : (((/* implicit */long long int) arr_4 [i_1])))))));
    }
}
