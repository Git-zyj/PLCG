/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72426
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_0] [i_0]) : (((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0]) : ((-2147483647 - 1)))))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_1 - 4] [i_0])), (arr_5 [i_1 - 4] [i_1 - 1] [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_4 = 1; i_4 < 17; i_4 += 2) 
                            {
                                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1 - 2] [i_2] [i_2])) ? (21LL) : (39LL)));
                                var_12 = ((/* implicit */_Bool) var_2);
                            }
                            for (int i_5 = 1; i_5 < 14; i_5 += 2) 
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (((+(((unsigned long long int) var_0)))) > (((/* implicit */unsigned long long int) 1607618148)));
                                var_13 -= ((/* implicit */_Bool) var_6);
                                arr_19 [i_5] [11] [i_1 - 4] = (-(((/* implicit */int) arr_6 [i_1] [i_2] [i_1] [i_5])));
                            }
                            var_14 = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) arr_11 [1ULL] [1ULL] [1ULL] [i_1 + 1])), (-22LL)))));
                            var_15 = ((/* implicit */long long int) max((var_15), (arr_1 [i_3])));
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((-4LL) + (9223372036854775807LL))) << (((arr_15 [i_1 - 2] [i_0] [i_2] [i_3] [i_2]) - (1138850951U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17977110087182853980ULL)) ? (-41LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (1607618145) : (((((/* implicit */_Bool) 18446744073709551604ULL)) ? (940027805) : (((/* implicit */int) (_Bool)1))))))) : (max((((/* implicit */unsigned int) arr_3 [i_0] [i_3])), (((227153125U) << (((940027801) - (940027793)))))))));
                            arr_20 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 2] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1 - 3] [i_2] [i_3]))) : (arr_13 [i_3] [i_2] [i_1] [i_0])))));
                        }
                    } 
                } 
                var_17 = ((((/* implicit */long long int) 61681613U)) ^ (25LL));
                var_18 = ((/* implicit */int) (unsigned char)0);
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (((((/* implicit */unsigned long long int) 940027820)) ^ (((unsigned long long int) var_5))))));
    var_20 = ((/* implicit */_Bool) var_9);
}
