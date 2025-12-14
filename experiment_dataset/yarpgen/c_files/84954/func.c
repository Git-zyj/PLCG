/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84954
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 *= ((/* implicit */long long int) (signed char)7);
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 10; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (short i_2 = 2; i_2 < 10; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_15 [2] [i_2] [2] [2] &= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_13 [i_1]) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) arr_12 [i_1]))))) ? (1300454075350129126LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        var_16 *= arr_14 [i_1] [i_3] [i_1] [i_1];
                        arr_16 [i_1] = ((/* implicit */int) arr_7 [i_1] [i_1]);
                        arr_17 [i_4 - 1] [i_1] [i_1] [i_2 + 2] [i_1] [i_1] = var_14;
                        arr_18 [i_3] [i_2 + 1] [i_1] [i_3] [i_3] [i_1] = ((/* implicit */short) ((((((/* implicit */int) var_7)) != ((-2147483647 - 1)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)11077)) ? (2147483647) : (-2147483628)))) : ((+(var_0)))));
                    }
                } 
            } 
        } 
        arr_19 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_10)) != (((/* implicit */int) arr_13 [i_1 + 3])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)115))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 - 1] [i_1] [i_1] [i_1]))) : (-5640215454033492477LL)))));
    }
    var_17 = ((/* implicit */short) (unsigned short)7864);
}
