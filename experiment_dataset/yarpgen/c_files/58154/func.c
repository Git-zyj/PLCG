/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58154
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
    var_12 = ((/* implicit */unsigned long long int) ((int) (_Bool)1));
    var_13 = ((/* implicit */short) max(((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (0ULL))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) ^ (18446744073709551604ULL))) % (((/* implicit */unsigned long long int) var_0))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? ((-(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)0)))))) : (((/* implicit */int) (unsigned short)7091))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)31092))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-1))))) : (min((((/* implicit */long long int) 2761008054U)), (-7844619848524480289LL)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) | (((/* implicit */int) var_8)))) | (((/* implicit */int) (_Bool)1))))) : (63ULL)));
                                var_17 |= ((/* implicit */_Bool) (short)0);
                                arr_12 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [1LL])) ? (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_3])))) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)-6)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2] [i_4])))) : ((-2147483647 - 1))))) : (2478260724U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 268435455LL)) ? (var_5) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)6))))), (var_5)))));
}
