/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92660
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (var_9) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) (_Bool)1);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 - 1]))));
                    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(((/* implicit */int) arr_1 [i_2] [i_2 + 1])))))));
                }
            } 
        } 
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [(short)6])))))));
        var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
    }
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) max((max(((+(var_13))), (((/* implicit */unsigned long long int) min((arr_7 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */int) arr_0 [i_3]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */signed char) var_3))))) ? (((((/* implicit */_Bool) (unsigned char)79)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3]))))) : (arr_8 [i_3] [i_3]))))));
        var_25 = ((/* implicit */long long int) (+(((var_13) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_3])))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) arr_3 [i_4] [i_4] [i_4])))) : (((/* implicit */int) ((((/* implicit */_Bool) (+(2607529548689421333LL)))) || ((!(((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4] [i_4])))))))));
        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_4]))));
        var_28 = ((/* implicit */unsigned int) ((short) (~(((var_12) - (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
    }
}
