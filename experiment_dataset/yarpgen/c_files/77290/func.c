/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77290
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
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)14)) && (((/* implicit */_Bool) 70368744173568LL)))) ? (((int) (short)20960)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (unsigned char)32))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) 1374824210)) ? (((((/* implicit */int) (unsigned char)173)) * (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned short)41286)));
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((var_19), ((unsigned short)41286)));
                                arr_15 [i_0] [i_0] [i_3 - 1] [i_3 - 1] [i_4] [i_4] [i_3 - 1] |= ((((/* implicit */_Bool) max(((unsigned short)24250), ((unsigned short)50151)))) ? (((((/* implicit */int) min(((unsigned short)50144), ((unsigned short)65535)))) | (((((/* implicit */int) (unsigned short)50151)) / (((/* implicit */int) (unsigned char)42)))))) : (max((1914620983), (((/* implicit */int) (unsigned char)124)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -800628756)), (var_4))))));
}
