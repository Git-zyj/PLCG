/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89491
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
    var_15 = ((/* implicit */short) (signed char)13);
    var_16 = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) (unsigned char)208)))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_17 += ((/* implicit */unsigned short) ((int) ((((/* implicit */int) var_12)) * (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_7)) : (arr_0 [i_0]))))));
        var_18 += ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30101))) : (var_13))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_6 [(short)1] = ((/* implicit */int) var_4);
        var_19 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (~(11)))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_5)))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_10 [6] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((arr_8 [i_2]), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_10)))))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))))))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            var_20 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) var_0))))), (arr_9 [i_3])));
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */signed char) ((unsigned short) ((((((/* implicit */int) var_3)) == (((/* implicit */int) (unsigned short)19358)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57550)))))) : (max((var_10), (((/* implicit */long long int) (signed char)10)))))));
                        arr_18 [(short)4] [(unsigned char)7] [i_3] [(unsigned char)7] [i_3] [i_5] &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_9 [i_2])) ? (((((/* implicit */_Bool) arr_16 [i_2] [i_5] [22U] [i_5])) ? (((/* implicit */unsigned long long int) var_10)) : (11603148285440102661ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), (((/* implicit */unsigned long long int) min((((arr_14 [i_3] [i_5]) ^ (((/* implicit */int) var_0)))), (arr_16 [i_2] [i_2] [i_2] [i_2]))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)46175)))))))))));
        }
    }
}
