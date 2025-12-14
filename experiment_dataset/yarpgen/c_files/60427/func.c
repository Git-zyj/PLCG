/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60427
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
    var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) 8881951751236563858ULL)) || (((/* implicit */_Bool) 1700470758))))) + ((-(((/* implicit */int) var_2)))))) | (var_10)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) max((((((/* implicit */_Bool) max((277076930199552LL), (((/* implicit */long long int) var_6))))) ? (arr_6 [i_0 + 2]) : (arr_6 [i_0 + 2]))), (((/* implicit */long long int) max((((56839608U) == (((/* implicit */unsigned int) arr_0 [i_1 + 1] [(unsigned char)0])))), (((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_3 [i_0 + 2])))))))));
                    var_13 = ((/* implicit */unsigned long long int) arr_1 [1ULL]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_12 [6] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) 3314148978U))) + (((/* implicit */int) (!(arr_3 [i_0 + 1]))))));
                                var_14 = ((/* implicit */unsigned char) (((~(((18446744073709551613ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))))))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_7 [i_0 - 1] [(_Bool)1]))))))));
                                arr_13 [i_0 + 2] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) (((~(9564792322472987732ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_4 + 1] [i_1 + 1] [i_1 + 1] [i_3] [i_0 + 2]), (arr_10 [i_4 + 1] [5LL] [i_1 + 1] [i_1 + 1] [i_0 + 2])))))));
                                var_15 ^= ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_4))))))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((((/* implicit */_Bool) arr_7 [i_4 + 1] [(short)8])) || (((/* implicit */_Bool) arr_1 [4ULL])))), (((((/* implicit */_Bool) arr_4 [9] [i_1 + 1])) && (arr_8 [2LL] [2LL] [i_3] [i_4 + 1])))))) - (((/* implicit */int) ((((((/* implicit */_Bool) 56839609U)) ? (9223372036854775807ULL) : (((/* implicit */unsigned long long int) -277076930199553LL)))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [1] [6]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (min((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_10)))))))));
}
