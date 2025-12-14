/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70803
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
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((short) (short)12024))), (((unsigned long long int) 1367760502))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */short) (unsigned char)235);
                            arr_8 [i_2] = ((/* implicit */unsigned int) max(((~(9170748138644725183ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)15219)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (unsigned short)39441)))))));
                            arr_9 [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) arr_6 [i_0])))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1 + 1]))))), (max((((/* implicit */unsigned int) arr_5 [(_Bool)1] [(_Bool)1])), (var_3)))));
                var_22 = ((/* implicit */unsigned long long int) (+(min((min((arr_3 [i_0] [i_1 - 3]), (arr_7 [8] [8] [i_1] [i_1]))), (((/* implicit */long long int) ((_Bool) var_2)))))));
            }
        } 
    } 
}
