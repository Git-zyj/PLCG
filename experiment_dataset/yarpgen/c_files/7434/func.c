/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7434
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32761)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) (short)-8778)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)1)))) : (((/* implicit */int) (unsigned short)65507)))) : (max((((/* implicit */int) var_0)), (((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_12 [(unsigned short)12] [i_1] [i_1] [i_3 + 1] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) (short)28672))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [(short)16] [i_1])))) | (((/* implicit */int) ((short) max((((/* implicit */int) (signed char)-88)), (var_4)))))));
                                var_11 = ((/* implicit */unsigned int) (+((+(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_3 [i_0] [i_1])) + (109)))))))));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */long long int) var_0);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (+(var_3)));
}
