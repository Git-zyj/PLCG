/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72153
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_13 *= ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [4LL] [(short)12]))) <= (((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [8LL] [i_0]))) : (arr_2 [i_0]))) : (var_12))));
                var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((var_7) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [6]))) : (var_1))))))) > (((((/* implicit */int) ((arr_1 [i_0]) || (((/* implicit */_Bool) var_12))))) - (arr_4 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            {
                var_15 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_3]))) / (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_2]))) : (arr_8 [i_2])))))) ? (((((/* implicit */_Bool) max((arr_5 [i_2] [i_3]), (((/* implicit */short) arr_1 [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_2] [i_3] [i_3]) > (((/* implicit */int) arr_5 [i_3] [i_3])))))) : (((((/* implicit */_Bool) arr_4 [i_2] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) : (arr_2 [i_2]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [2LL] [i_3]))) - (arr_2 [(short)0]))));
                /* LoopNest 3 */
                for (unsigned int i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    for (int i_5 = 1; i_5 < 8; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) arr_18 [i_2] [i_4] [i_6]))))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_6] [i_6])), (var_4))) : (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_15 [i_6] [7ULL] [i_6] [i_3] [i_2])), (arr_6 [i_3]))) ^ (((/* implicit */long long int) ((arr_2 [(short)9]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1] [i_6])))))))))));
                                var_17 = ((/* implicit */unsigned int) arr_7 [i_2] [i_2] [i_2]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) | (((/* implicit */int) var_8)))) % (((((/* implicit */int) var_0)) << (((var_1) - (4259019915U)))))))) && (((/* implicit */_Bool) var_1))));
}
