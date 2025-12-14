/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82433
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
    var_12 = ((/* implicit */unsigned int) var_3);
    var_13 = ((/* implicit */long long int) var_0);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_5 [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_7)))))) ? (((((-6832700908030899786LL) + (9223372036854775807LL))) << (((/* implicit */int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
            arr_6 [i_1] [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0]);
        }
        for (short i_2 = 1; i_2 < 8; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) var_8);
                        arr_15 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_2 + 1] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [i_3] [i_0] [i_0]))) : (0LL)))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_4])))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_20 [i_5] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6378))) : (var_7)));
                arr_21 [i_0] [i_2 + 2] [i_5] [i_5] = (~(6291456U));
                arr_22 [i_5] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                arr_23 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_19 [(_Bool)0] [i_2 + 2] [i_5] [i_5]))));
            }
            for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                arr_26 [i_0] [i_2] [i_2] [i_6] = ((/* implicit */short) arr_4 [i_2 + 1] [i_2 + 1] [8LL]);
                arr_27 [i_0] [i_2] [i_6] = ((/* implicit */unsigned char) arr_19 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2 + 2]);
            }
        }
        arr_28 [i_0] [i_0] = ((/* implicit */short) min((max((((/* implicit */long long int) arr_19 [i_0] [i_0] [i_0] [i_0])), ((+(274877905920LL))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
    }
    var_14 = ((/* implicit */long long int) (-(min(((+(((/* implicit */int) var_0)))), (((/* implicit */int) var_10))))));
}
