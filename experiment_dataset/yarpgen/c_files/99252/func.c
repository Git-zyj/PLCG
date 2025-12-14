/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99252
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
    var_20 = ((/* implicit */int) min((var_20), (((((((/* implicit */_Bool) min((var_10), (var_15)))) && (((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_16)))) : ((+(((/* implicit */int) ((short) var_14)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = min(((~(((/* implicit */int) ((short) arr_0 [i_2]))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_13 [i_2] [i_0] [11ULL] [11ULL] [11ULL])) ? (arr_10 [i_0] [i_0] [(unsigned char)5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_4]))))))));
                                arr_14 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */int) var_18);
                                var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (7305758410849146794LL)))) ? (((/* implicit */long long int) ((int) var_9))) : (var_7)));
                                var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (min((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1] [i_2] [i_2] [i_4])), (((((/* implicit */int) var_14)) & (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [i_1]))))))));
                                var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_4 [12ULL] [i_1]))))))) & (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_1] [i_4] [i_3] [i_2] [i_1] [i_1] [i_0]))))) | (arr_9 [i_0] [i_2] [i_2] [i_2] [i_4] [i_0])))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_0])) + (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (arr_6 [i_0]))))));
                    arr_15 [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_0] [i_2] [i_1] [i_2]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_18)))) ? (((unsigned int) arr_12 [i_0] [i_0] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1])))))));
                }
            } 
        } 
    } 
}
