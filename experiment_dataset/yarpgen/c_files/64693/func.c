/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64693
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
    var_19 += ((/* implicit */short) var_3);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] |= ((arr_1 [0U]) <= (((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (var_8) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)40))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            var_20 = (short)8519;
            var_21 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (min((5111430771658599201LL), (((/* implicit */long long int) 2147483647)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (arr_3 [i_0] [i_0] [i_0])))))));
            arr_7 [i_0] [i_0] [i_0] = min(((~((+(((/* implicit */int) (unsigned char)62)))))), (min((((((/* implicit */_Bool) 2608036419U)) ? (-193762438) : (((/* implicit */int) (short)17328)))), ((~(((/* implicit */int) var_2)))))));
        }
        var_22 = ((/* implicit */unsigned int) ((_Bool) ((signed char) arr_3 [i_0] [i_0] [i_0])));
    }
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-17329)) || (((_Bool) var_14))));
}
