/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94599
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
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_2 [i_0] [(_Bool)1] [i_1 + 3])))) < (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))));
                arr_4 [i_0] [i_1] = ((((/* implicit */_Bool) ((long long int) arr_0 [i_0 - 1] [i_0 - 1]))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((((/* implicit */_Bool) (short)17969)) && ((_Bool)1))), (((12LL) != (((/* implicit */long long int) ((/* implicit */int) var_18)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 1; i_2 < 24; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_13 [i_2] [21LL] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_2] [i_2 + 1] [i_4]))))) : (((arr_12 [i_2] [i_2 - 1] [i_2 - 1]) ? (-4971290652827081660LL) : (arr_6 [i_2])))));
                    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                    var_22 = ((/* implicit */unsigned int) var_14);
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) var_14)) : (var_10)))))) ? (((((_Bool) arr_14 [15LL] [i_2])) ? (((((/* implicit */_Bool) arr_17 [(signed char)3] [10LL] [i_2] [i_2] [(_Bool)1] [18ULL])) ? (((/* implicit */int) (short)12146)) : (((/* implicit */int) (unsigned short)16862)))) : (((/* implicit */int) min((((/* implicit */short) arr_12 [i_2] [i_4] [i_6])), ((short)27881)))))) : (min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (short)32306))))))));
                                var_24 = ((/* implicit */unsigned int) (~((~((-9223372036854775807LL - 1LL))))));
                                var_25 = max((((((/* implicit */int) (unsigned short)41052)) + (((/* implicit */int) ((short) (unsigned short)24486))))), (((/* implicit */int) var_19)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
