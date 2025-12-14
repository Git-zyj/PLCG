/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92010
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */long long int) arr_5 [i_2] [i_1] [i_0] [i_0])) : (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_2])) : (18409136218610122593ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) arr_5 [i_0] [(_Bool)1] [i_2] [5LL])) : (arr_1 [i_1])))))))));
                    var_21 = (-(min((((((/* implicit */_Bool) var_11)) ? (arr_4 [i_0] [15ULL] [i_0]) : (arr_1 [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)200)) ^ (((/* implicit */int) var_14))))))));
                    var_22 |= ((/* implicit */int) (unsigned char)81);
                    var_23 = ((/* implicit */int) var_14);
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_24 = arr_8 [2LL] [2LL] [i_3] [i_3];
                    var_25 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) (short)9136)) >> (((((/* implicit */int) var_11)) - (109)))))) <= (((long long int) (_Bool)0))));
                }
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    var_26 = ((/* implicit */_Bool) 3478368186535797353ULL);
                    var_27 = ((/* implicit */long long int) (unsigned char)133);
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)212)) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(unsigned char)11])) : (((/* implicit */int) (unsigned char)185)))) : (((/* implicit */int) arr_8 [i_0] [i_1] [10LL] [i_4]))));
                    var_29 = ((/* implicit */unsigned char) (short)-9136);
                }
                var_30 = ((/* implicit */unsigned long long int) var_19);
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3478368186535797353ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775792LL))))) : (((int) 4294967295U)))))));
    var_32 = ((/* implicit */short) -9223372036854775792LL);
}
