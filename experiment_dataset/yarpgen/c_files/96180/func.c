/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96180
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
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)23617))))), ((((_Bool)1) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32)))))))));
    var_16 = ((/* implicit */unsigned char) var_11);
    var_17 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)112));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_13 [i_3] [i_3] [i_3] = ((/* implicit */long long int) var_4);
                                var_18 = ((/* implicit */unsigned short) arr_0 [i_0 - 3]);
                                arr_14 [i_4] [i_4] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((4035083755683952931ULL), (9350169292351689252ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)(-127 - 1)), ((signed char)116))))) : (arr_1 [i_0])))), (((max((4035083755683952931ULL), (((/* implicit */unsigned long long int) arr_10 [0U] [i_4] [i_4] [i_4])))) + (((/* implicit */unsigned long long int) arr_12 [2] [i_0 - 1] [i_3] [i_2] [i_0 - 1] [i_0]))))));
                            }
                        } 
                    } 
                    var_19 *= ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_2 [i_0]))))))));
                }
            } 
        } 
    } 
}
