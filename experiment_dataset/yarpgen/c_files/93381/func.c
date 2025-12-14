/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93381
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
    var_12 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) max((var_7), (((/* implicit */int) (unsigned short)14336))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51209)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51200)))))) ? (max((var_6), (((/* implicit */unsigned int) (unsigned short)14336)))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)0)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_1] [(signed char)12] [(_Bool)1] [i_2] = ((/* implicit */signed char) arr_7 [i_0] [(unsigned short)0] [i_1] [i_2] [i_2] [(unsigned char)7]);
                            arr_10 [4LL] [i_2] [i_1] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)14326)), (min((((/* implicit */int) (unsigned short)51213)), (((((/* implicit */_Bool) arr_5 [(short)2] [i_1] [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [8])) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)118))))) : (max((arr_1 [i_0]), (((/* implicit */long long int) arr_4 [(unsigned short)11] [(unsigned short)11] [7LL] [i_1])))))) == (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)7)) - (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [11ULL]))))));
                arr_12 [i_0] [i_1] = ((/* implicit */long long int) arr_2 [i_0] [(unsigned char)7] [(unsigned char)7]);
                var_13 = ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_1] [i_1]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_10);
    var_15 ^= ((/* implicit */long long int) var_7);
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((max((((/* implicit */long long int) var_0)), (max((((/* implicit */long long int) var_0)), (var_11))))) <= (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
}
