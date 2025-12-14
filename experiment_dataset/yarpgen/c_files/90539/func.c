/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90539
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) -2147483633)), (2159132492041708974ULL))), (min(((+(var_6))), (((/* implicit */unsigned long long int) max(((unsigned char)0), (((/* implicit */unsigned char) var_11)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((long long int) 2147483633));
        var_17 -= ((/* implicit */unsigned char) ((unsigned short) (_Bool)0));
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [18LL] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_8))) << (((((((/* implicit */int) arr_5 [i_1] [i_1])) + (((/* implicit */int) arr_5 [i_1] [i_1])))) - (5305)))))) ? ((-(((/* implicit */int) var_0)))) : (min((542326549), (((/* implicit */int) (unsigned char)128)))))))));
        var_19 *= ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_1] [i_1])))), ((-(((/* implicit */int) (_Bool)1)))))), ((~(((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)153))))))));
    }
}
