/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96827
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-32744)) ? ((-(max((((/* implicit */long long int) var_0)), (var_3))))) : (((/* implicit */long long int) min((var_4), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (-2147483624))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_11 *= ((/* implicit */short) max((((/* implicit */unsigned short) max(((short)-32758), (((/* implicit */short) (unsigned char)151))))), (((unsigned short) max((arr_1 [i_0 + 2]), (((/* implicit */long long int) var_2)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) arr_3 [i_0 + 4] [i_0 + 4]);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 11; i_4 += 4) 
                            {
                                var_13 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [2ULL] [i_1 + 1]))) / (9253765308456964031ULL)))) ? (((((/* implicit */long long int) arr_12 [9ULL] [i_3] [9ULL] [9ULL] [i_0 - 1])) & (arr_0 [i_2] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531)))));
                                var_14 = ((/* implicit */short) (-(var_5)));
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_1 - 3] [i_0 + 2])) : ((+(-2147483642)))));
                                arr_13 [i_3] [11] [i_3] [(unsigned char)9] [i_4] = ((/* implicit */short) (-(((int) (-9223372036854775807LL - 1LL)))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
