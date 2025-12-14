/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64936
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)32766))));
        var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (min((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    var_12 += ((/* implicit */unsigned short) (!(arr_4 [i_3])));
                    var_13 = ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 827156985U)) ? (((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [(unsigned short)6])) : (((/* implicit */int) (_Bool)1))))) : (arr_5 [i_1]));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_1])) - (((/* implicit */int) arr_4 [i_1]))));
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 562949953355776ULL)) && (((/* implicit */_Bool) arr_0 [i_1]))));
                }
            } 
        } 
        var_16 = ((/* implicit */long long int) arr_0 [i_1]);
    }
    for (short i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) (~(0LL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 2; i_5 < 23; i_5 += 3) 
        {
            var_18 = (~(((/* implicit */int) arr_9 [i_5] [i_4] [i_5 - 2])));
            var_19 = ((/* implicit */short) arr_10 [i_4]);
            var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_5] [(short)22] [(_Bool)1])) ? (((/* implicit */int) arr_12 [i_4] [i_5 + 1])) : (((/* implicit */int) arr_9 [i_5] [(short)10] [i_4]))));
        }
    }
    var_21 = ((/* implicit */int) (+((+(max((var_3), (((/* implicit */unsigned long long int) (unsigned short)26941))))))));
}
