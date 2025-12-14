/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92140
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] |= ((/* implicit */int) var_0);
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])))))));
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2097024U)) ? (2097010U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1 - 1])))));
        }
        for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_15 = ((/* implicit */short) 4067744131074840758ULL);
            arr_8 [i_0] = ((/* implicit */unsigned long long int) ((max((17612121484917872127ULL), (((/* implicit */unsigned long long int) arr_3 [i_0])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 834622588791679489ULL))))))));
        }
        arr_9 [i_0] [(unsigned short)20] = ((/* implicit */int) (-(834622588791679489ULL)));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 2) 
        {
            for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
            {
                {
                    var_16 = ((/* implicit */_Bool) arr_7 [i_3 - 1] [i_4]);
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((var_3) ? ((-(arr_7 [i_3 - 2] [i_3 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_3 + 1] [i_3 + 1]), (((/* implicit */short) arr_14 [i_3 - 1] [i_3 - 1] [i_4 + 1] [i_4])))))))))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 1) 
    {
        for (unsigned char i_6 = 1; i_6 < 14; i_6 += 1) 
        {
            {
                arr_20 [(short)14] [i_5 - 1] [i_5] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_12 [i_6] [i_5 + 1])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) ((var_7) > (((/* implicit */int) (unsigned short)24817))))))))));
                var_19 = ((/* implicit */int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) var_4)))));
            }
        } 
    } 
}
