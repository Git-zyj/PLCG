/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77248
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (((((/* implicit */int) var_9)) | (((/* implicit */int) arr_6 [i_2 - 1]))))))) ? ((~((~(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) var_2))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32256)) == (((/* implicit */int) (unsigned char)12))))), (max((((/* implicit */long long int) arr_6 [i_4 - 4])), (var_8)))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)109))) ^ (arr_8 [i_3] [i_3 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (var_10) : (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned int) var_13))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (long long int i_6 = 2; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_5] [4LL] [i_0])) ? (var_8) : (((/* implicit */long long int) var_7)))) >= (((/* implicit */long long int) ((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_3))))) <= (((arr_13 [1LL] [i_1] [(short)5] [i_5] [i_6 + 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (775589422U))))))) : ((-(16958648899641133569ULL))))))));
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_4))));
                                arr_20 [i_0] [i_1] [i_2 + 2] [i_5] [13LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) - (335969004U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : ((~(var_0)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) var_9)) ? (arr_11 [i_0] [i_1] [i_2 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) (-(min((var_4), (var_4)))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_3))));
}
