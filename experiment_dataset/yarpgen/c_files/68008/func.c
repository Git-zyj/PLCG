/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68008
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
    var_13 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */long long int) (-(var_0)))) / (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_14 = arr_1 [i_0 - 1] [i_0 - 1];
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_15 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_0 + 1])) <= (((/* implicit */int) arr_2 [i_0] [i_0 - 1] [i_0 + 1]))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [(_Bool)1] [i_0 - 1])) : (((/* implicit */int) (short)-26))))));
            var_16 = ((/* implicit */int) arr_1 [i_1] [i_0]);
            arr_6 [i_1] = ((/* implicit */short) var_0);
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) ((arr_9 [i_2] [(unsigned short)12] [i_0]) && ((!(((/* implicit */_Bool) var_0))))));
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)30011)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)3762))));
        }
        for (long long int i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) (short)30008)) : (((/* implicit */int) var_4))))) != (max((0U), (((/* implicit */unsigned int) (_Bool)1)))))))));
            var_20 = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) + ((~(var_7)))));
            var_21 = ((/* implicit */_Bool) arr_1 [7ULL] [7ULL]);
            var_22 = ((/* implicit */signed char) ((((((/* implicit */int) max((var_4), (((/* implicit */unsigned char) var_11))))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0 - 2]))))))) < (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)-110)) != (((/* implicit */int) arr_9 [i_0 - 1] [i_3] [i_0]))))))));
        }
    }
}
