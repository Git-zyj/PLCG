/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58898
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (((~((~(((/* implicit */int) (unsigned char)114)))))) & (((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_19 -= ((/* implicit */unsigned int) ((long long int) ((unsigned char) var_17)));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_1])) >> (0U))))));
                }
                for (signed char i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */long long int) (unsigned char)218);
                    arr_12 [i_0] [i_1] [i_3] [(short)1] = (-9223372036854775807LL - 1LL);
                }
                for (signed char i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                {
                    var_22 ^= ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)15)), (((((/* implicit */int) (unsigned char)142)) | (((-498140737) - (-756547765)))))));
                    arr_16 [12U] [i_4] = ((/* implicit */unsigned char) arr_6 [13] [13] [i_4]);
                    arr_17 [i_0] [i_0] [i_0] = ((3506238383U) + (1322368072U));
                    arr_18 [4LL] [9LL] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(7259857373677909195LL)))) ? (((((/* implicit */_Bool) 4026531840U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))) : (arr_2 [i_4] [i_1] [i_0]))) : (((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19)))))))) ? (min((((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */long long int) arr_2 [(signed char)5] [(signed char)5] [(signed char)5])) : (8439320698319755286LL))), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                }
                var_23 = ((/* implicit */unsigned int) (((-(((9208277157049821365LL) + (((/* implicit */long long int) 788728913U)))))) + (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min((2445912785U), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_9))))))))));
    var_25 = ((/* implicit */signed char) ((var_0) ? (((/* implicit */long long int) var_13)) : (var_10)));
}
