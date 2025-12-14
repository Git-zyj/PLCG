/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89270
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 6; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (-(max((((arr_3 [i_0] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (0ULL)))))));
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 7; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((var_1) + (arr_1 [i_1])));
                                var_16 = ((/* implicit */unsigned long long int) arr_12 [i_2 - 2] [i_2] [i_2] [i_2]);
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_4 - 2]) : (((/* implicit */long long int) var_5))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_0] [5] [i_0] [i_0])), ((+(((/* implicit */int) (unsigned short)57053))))))) : (((((/* implicit */_Bool) (unsigned short)52473)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_2)))));
                                var_18 |= ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [5ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [1] [i_2] [i_0]))) : (arr_1 [(unsigned short)6])))))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)55047))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_2] [i_1 + 3]))))) ? ((+(((/* implicit */int) arr_12 [i_0] [i_0] [i_3] [i_4])))) : (((/* implicit */int) arr_7 [i_0] [i_2 - 2] [i_1 - 3] [i_2 - 2])))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)10472))))));
                            }
                        } 
                    } 
                } 
                var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 4] [i_1] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1 - 4] [i_1 - 4] [i_0] [i_1 + 1])) || (((/* implicit */_Bool) arr_12 [i_0] [i_1 - 4] [i_1 - 3] [i_0]))))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 4] [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1 - 4] [i_0] [(_Bool)1])) : (((/* implicit */int) (unsigned short)17001))))));
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)55039))))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (var_13))), (((/* implicit */unsigned long long int) ((-797305989365814160LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-106)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) var_0)), (var_1)))))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10489))) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) - (var_13)))));
}
