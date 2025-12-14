/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57657
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
    var_11 = ((/* implicit */_Bool) ((unsigned int) ((((((/* implicit */int) var_5)) == (((/* implicit */int) var_3)))) ? (min((var_10), (((/* implicit */long long int) var_8)))) : (max((var_10), (((/* implicit */long long int) var_4)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_4 [i_0] [i_2]), (arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) ? ((~(((/* implicit */int) arr_0 [(signed char)13] [i_1])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_1])), (arr_4 [i_0] [i_0]))))))));
                    var_13 = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((_Bool) var_0))), (arr_2 [i_0])));
                    var_14 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [18ULL]))) : (arr_3 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_0])))))) : (((unsigned int) 14680064)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -14680046)))))));
                    arr_7 [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (arr_5 [i_1] [i_2])))) ? (((unsigned int) arr_5 [i_1] [i_2])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_2])))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((_Bool) max((max((((/* implicit */unsigned int) var_0)), (var_8))), (((/* implicit */unsigned int) ((_Bool) var_8))))));
}
