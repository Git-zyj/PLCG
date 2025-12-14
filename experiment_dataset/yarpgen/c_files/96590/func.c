/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96590
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
    var_14 = ((/* implicit */short) var_12);
    var_15 = ((/* implicit */_Bool) max((-3833007660934431359LL), (((/* implicit */long long int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_2)))))));
    var_16 = ((/* implicit */short) (unsigned short)41258);
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_7))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)26974)), (3295836865U)))) : (-5536716597653795086LL))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned short) 999130431U);
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_10 [i_1 + 1] [i_1 - 1]), (((/* implicit */int) max(((_Bool)1), (var_11))))))) || (((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_3])) && (((/* implicit */_Bool) (short)512))))), (arr_7 [i_0] [i_1] [i_2] [i_3]))))));
                        var_20 = ((/* implicit */short) (signed char)124);
                    }
                    for (unsigned char i_4 = 1; i_4 < 15; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) max(((unsigned short)38583), (((/* implicit */unsigned short) arr_12 [i_2] [i_2]))))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_1 [i_4 - 1])))) : (((/* implicit */int) arr_4 [(short)12] [i_1 + 1] [(unsigned short)13]))));
                        var_21 ^= ((/* implicit */unsigned short) 3833007660934431358LL);
                    }
                    for (signed char i_5 = 1; i_5 < 13; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) var_1);
                        arr_17 [i_0] [i_0] [i_2] [i_5 + 1] = ((/* implicit */short) (~(((((/* implicit */_Bool) max((1913665494U), (((/* implicit */unsigned int) arr_5 [14U] [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)32767)) != ((-2147483647 - 1)))))) : (arr_3 [i_5] [i_1] [i_1])))));
                        arr_18 [(signed char)14] [(signed char)5] [i_2] [(unsigned char)7] = ((/* implicit */unsigned short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_0])) ? (((/* implicit */int) (short)-30377)) : (var_12))))))), (max((((/* implicit */signed char) arr_2 [i_0] [i_0])), (arr_7 [i_5 - 1] [i_2 - 1] [i_1 - 2] [i_0])))));
                    }
                }
            } 
        } 
    } 
}
