/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78847
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
    var_20 = ((/* implicit */long long int) var_2);
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)75))))) != (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (var_14)))) : ((~(0ULL))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                {
                    var_22 ^= ((/* implicit */long long int) ((unsigned short) 16ULL));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2 + 2] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) ((arr_8 [i_3]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_2 - 2] [i_4 + 1] [i_4 + 1]))))))));
                                var_23 |= ((/* implicit */_Bool) arr_4 [i_0] [i_1] [(unsigned char)2] [(unsigned char)2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
