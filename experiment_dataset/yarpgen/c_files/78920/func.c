/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78920
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 16804250240708427134ULL)))))))) : (((unsigned int) var_8))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) (-(min((((((/* implicit */_Bool) arr_1 [9ULL])) ? (1163161804167371918ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)32382)), (var_2))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] [i_0] [3ULL] = ((((/* implicit */_Bool) (+(33776997205278720LL)))) ? (((((/* implicit */_Bool) -10LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18075))) : (913332828U))) : (((/* implicit */unsigned int) (+((+(arr_0 [i_0])))))));
                    arr_9 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned int) var_16);
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0])), (913332828U))), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0]))));
        arr_10 [(signed char)0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (+(var_4)))) ? (((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned long long int) 9LL)))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_10) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [(short)3])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    }
    var_20 *= ((/* implicit */unsigned short) var_10);
    var_21 &= ((/* implicit */int) var_7);
}
