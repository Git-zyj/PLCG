/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/678
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
    var_17 *= ((/* implicit */long long int) max(((-(((/* implicit */int) var_14)))), (((/* implicit */int) var_16))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_18 += ((/* implicit */short) (+(((/* implicit */int) (((-(((/* implicit */int) arr_1 [i_0])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) -7273455666555997081LL))))))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (~(((((/* implicit */_Bool) 7273455666555997080LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-26316)))))))));
        var_20 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) var_15)) : (arr_2 [i_1])))), (max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (2452680664338062601ULL)))))) ? (min((((/* implicit */long long int) (short)23368)), (arr_2 [i_1 - 1]))) : (max((arr_2 [i_1 - 1]), (arr_2 [i_1 - 1])))));
        var_22 = ((/* implicit */short) ((long long int) max((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) -7273455666555997082LL)) : (var_7))), (((/* implicit */unsigned long long int) 7273455666555997058LL)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4]))) + (8270614050929660051LL)))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_2] [i_4] [i_5]))))) || (((/* implicit */_Bool) var_10))));
                        arr_15 [(unsigned char)23] [i_4] [i_3] [i_2] = ((/* implicit */short) ((((long long int) var_5)) - (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_3] [i_4] [i_5])))));
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_2]))))) || (((/* implicit */_Bool) ((long long int) arr_4 [i_2])))));
                    }
                } 
            } 
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_8 [i_2]))));
        }
        for (signed char i_6 = 3; i_6 < 23; i_6 += 1) 
        {
            var_27 = ((/* implicit */short) ((unsigned long long int) arr_10 [i_2] [i_2] [i_2]));
            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_14 [i_2] [8LL] [i_6])) : (((/* implicit */int) arr_4 [22ULL])))))))));
        }
        var_29 = ((/* implicit */int) var_13);
    }
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (((unsigned long long int) var_0)))))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) : (var_11)))));
}
