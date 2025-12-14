/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70411
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 4; i_2 < 13; i_2 += 1) 
                {
                    arr_6 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_2 - 1] [i_0 - 1])), (var_10)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2 + 1] [i_0 - 1])) && (((/* implicit */_Bool) arr_0 [i_2 - 3] [i_0 + 1]))))) : (((/* implicit */int) ((_Bool) arr_0 [i_2 - 2] [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_2))))) : (max((((/* implicit */long long int) -334681228)), (arr_1 [i_0] [0LL])))))) ? (((/* implicit */int) arr_7 [i_0] [i_2] [i_0] [i_4])) : (((((/* implicit */_Bool) (~(var_3)))) ? (arr_5 [i_0 + 1]) : (((/* implicit */int) arr_2 [i_3]))))));
                                var_12 = ((/* implicit */long long int) var_0);
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [(_Bool)1] [i_4] [i_4] [i_2 + 1])) | (((/* implicit */int) arr_0 [i_1] [i_3])))))));
                                var_14 = max((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (((arr_7 [i_0 + 1] [i_0 + 1] [i_1] [i_2 - 2]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65535)))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 4; i_5 < 13; i_5 += 4) 
                {
                    var_15 = ((/* implicit */unsigned long long int) var_10);
                    var_16 = ((/* implicit */unsigned int) -2772294032998525127LL);
                }
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    for (signed char i_7 = 1; i_7 < 13; i_7 += 2) 
                    {
                        {
                            arr_21 [i_7] [i_6] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */long long int) var_7);
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38))) | (67108848U)))) ? (7947647953537126630LL) : (9223372036854775807LL)))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_11 [i_1] [i_1] [i_6] [i_7])) << (((/* implicit */int) arr_19 [i_7] [i_7] [i_6] [i_6] [i_1] [i_0])))) ^ (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (arr_18 [i_0 - 1] [i_0 + 1]) : (arr_18 [i_0 + 1] [i_0 + 1])))));
                        }
                    } 
                } 
                var_18 -= ((/* implicit */long long int) ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-99))))), (26U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2772294032998525126LL)) || (((/* implicit */_Bool) (short)0))))))));
                arr_22 [i_0] [i_1] = ((/* implicit */long long int) min((max((-1925367293), (arr_16 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1]))), (((/* implicit */int) (_Bool)1))));
                var_19 = ((/* implicit */int) max((((/* implicit */short) ((_Bool) (short)-4267))), ((short)32767)));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_10);
}
