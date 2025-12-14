/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76799
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_3] [i_0])) ? (((/* implicit */int) arr_5 [i_3] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_2 - 1])))) < (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (unsigned short)65535)))))))) & (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [i_3]))) : (arr_8 [i_0] [i_1] [i_0] [i_3])))) && (((/* implicit */_Bool) 18446744073709551615ULL))))))))));
                            var_11 = ((/* implicit */short) ((((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))) << (((((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2] [i_2] [i_1])) ? (var_0) : (((/* implicit */long long int) arr_7 [i_1 + 2] [i_1 - 1] [i_2] [i_2 - 1])))) + (7733383151619747998LL)))));
                            var_12 = 11225969628514422257ULL;
                            var_13 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1] [i_1 + 2])) ? (((/* implicit */long long int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 - 1])) : (arr_3 [i_1 - 1] [i_1 + 2] [i_1 + 2])))));
                var_15 += ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_1 - 1]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_4 = 1; i_4 < 22; i_4 += 2) 
    {
        var_16 = ((unsigned short) ((((/* implicit */_Bool) arr_10 [i_4 + 1] [i_4 + 2])) ? (arr_13 [i_4 + 1] [i_4 - 1]) : (arr_12 [i_4 + 2] [i_4 + 1])));
        var_17 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((var_3) >= (((/* implicit */unsigned long long int) arr_12 [i_4 - 1] [i_4 - 1]))))), (((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) : (((arr_13 [i_4 + 1] [i_4]) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1)))))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((_Bool) arr_12 [i_4 + 1] [i_4 + 1])))));
    }
    var_19 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533))) > (262143U))))));
}
