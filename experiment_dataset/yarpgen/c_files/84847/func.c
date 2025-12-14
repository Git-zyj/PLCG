/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84847
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_9))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 6; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((_Bool) (short)(-32767 - 1))))));
                                arr_12 [i_0] [i_3] [1ULL] = ((/* implicit */unsigned int) ((arr_4 [i_4 - 1] [i_0 + 1] [(short)7]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-32753))))) ? (arr_7 [i_0 + 4] [i_0 + 3] [i_4 - 1] [i_4 + 2]) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)4064))))))))));
                                var_15 ^= (unsigned char)205;
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) - (5771861653099201029LL)))) >= (min((max((((/* implicit */unsigned long long int) var_10)), (arr_2 [(unsigned char)5] [i_1]))), (((/* implicit */unsigned long long int) arr_0 [i_0 + 2])))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                arr_20 [9ULL] [(unsigned char)6] [6LL] [i_0] [4LL] [(signed char)1] [0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_14 [(unsigned char)6] [i_6] [3LL] [(short)7]) ? (((/* implicit */int) arr_14 [(_Bool)1] [(unsigned short)0] [8LL] [i_5])) : (((/* implicit */int) arr_14 [i_0] [(_Bool)1] [i_5] [i_6]))))) == (((unsigned long long int) (~(var_4))))));
                                var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) var_11)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
