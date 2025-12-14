/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91014
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
    var_12 = ((/* implicit */long long int) min((var_5), (((/* implicit */short) (unsigned char)3))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_13 |= ((/* implicit */unsigned int) min((15601244644468276032ULL), (((/* implicit */unsigned long long int) (short)-24157))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = arr_4 [i_0] [i_0];
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 0U))) ? (((/* implicit */unsigned long long int) ((var_11) + (((/* implicit */long long int) arr_0 [i_0]))))) : (var_9)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))))) : (max((2845499429241275583ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6101349058987052293ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33))) : (arr_8 [i_2] [i_1]))))))));
                        var_15 -= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((arr_10 [i_2] [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (signed char)-113)) : (((arr_0 [i_0]) & (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [(signed char)16] [i_0])))))), (arr_0 [i_0])));
                        var_16 = ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_3])) ? (15601244644468276032ULL) : (((/* implicit */unsigned long long int) ((((long long int) 23)) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)77)))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                    {
                        var_17 = arr_6 [i_0] [i_1] [i_0] [i_4];
                        var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))) : (2845499429241275583ULL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_4 - 1] [i_4 - 1] [i_4 + 1])) < (((/* implicit */int) (signed char)126))))) : (-2147483636)));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_0] [(unsigned short)15] [i_4] = ((/* implicit */long long int) arr_12 [i_5] [i_2] [i_0] [i_0]);
                            var_19 |= ((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2] [i_2]);
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_4] [i_5])) ? (((/* implicit */int) (signed char)79)) : (-23)))))) ^ (((((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5] [i_4 - 1] [i_2] [i_1]))) : (2845499429241275583ULL)))));
                            var_21 = ((/* implicit */unsigned int) var_5);
                            var_22 = ((/* implicit */signed char) 2267068644U);
                        }
                        var_23 = ((/* implicit */int) max((((((/* implicit */_Bool) max((var_5), (((/* implicit */short) arr_7 [i_0] [i_1] [3LL] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_11)) ? (14341319726162970794ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_4 - 1])))))));
                    }
                }
            } 
        } 
    } 
}
