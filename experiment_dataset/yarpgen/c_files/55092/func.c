/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55092
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
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */int) ((min((((/* implicit */long long int) arr_7 [i_0])), (-9223372036854775788LL))) > (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2])))))) >> (((((unsigned long long int) (unsigned char)244)) / (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), ((-9223372036854775807LL - 1LL)))))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        arr_11 [i_0 + 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_1);
                        arr_12 [13ULL] [i_1] [(unsigned char)5] [i_3] = 3927313005539126546LL;
                        arr_13 [i_3] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -852701660)), (((503753965U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126)))))));
                        arr_14 [i_1] = ((/* implicit */unsigned int) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13934)))));
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) arr_7 [i_0 + 1]))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [13U]))) ^ (max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_2])), (var_0))))) << (((var_10) - (1849386290876775683LL)))));
                        arr_19 [i_0] [i_0] [i_1] [(unsigned short)18] [i_2] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_9 [i_0 + 1] [4] [i_0] [i_0 - 1])) ? (arr_4 [i_0 - 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(unsigned char)4] [i_1] [0LL] [i_4])))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                    {
                        arr_23 [i_1] = max((((/* implicit */int) ((((/* implicit */_Bool) 4294967283U)) && (((/* implicit */_Bool) arr_9 [5U] [i_1] [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_9 [i_5] [(short)17] [i_1] [i_0 + 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2])))));
                        var_16 &= ((/* implicit */unsigned char) ((((max((((/* implicit */long long int) arr_1 [i_0])), (7572341757716474535LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0 - 2] [i_2]))))) - (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned char)168)) ? (9223372036854775807LL) : (-5225335201665988349LL))) : (((3927313005539126546LL) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
                    }
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) var_11);
    }
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        var_18 = ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > (var_9)));
        arr_26 [15U] [i_6] = ((/* implicit */int) (unsigned char)56);
    }
    var_19 &= ((/* implicit */signed char) ((unsigned int) 549755813888ULL));
}
