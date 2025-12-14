/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76246
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_11), (((/* implicit */unsigned short) (unsigned char)179))))) >= ((~(((/* implicit */int) var_5))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((7979835419448535739ULL), (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (arr_0 [i_0])))))))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((short) arr_0 [i_0]))) ? (min((((/* implicit */unsigned long long int) 1409522153U)), (arr_1 [5U]))) : (arr_1 [i_0 + 1]))) >> (((arr_1 [i_0 - 2]) - (16295972104929609994ULL)))));
    }
    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (((unsigned long long int) 8006836173667263472LL)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8006836173667263472LL)) ? (-8006836173667263473LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) == (((unsigned long long int) var_2)))))));
}
