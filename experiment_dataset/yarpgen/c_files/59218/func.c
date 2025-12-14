/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59218
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_17)))), (var_6))) : (((/* implicit */long long int) min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_4)))))))));
    var_20 |= ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_10)))), (min((var_7), (((/* implicit */int) (signed char)-103))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_13 [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) ((signed char) 730416869)))))));
                            arr_14 [i_0] [i_1] [i_1 - 2] [i_2] [i_3] = ((/* implicit */unsigned short) (-((~(min((-107688053024907567LL), (((/* implicit */long long int) (_Bool)0))))))));
                        }
                    } 
                } 
                var_21 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)1217)))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((int) ((((/* implicit */int) (unsigned short)17321)) * (((/* implicit */int) (unsigned char)28))))))));
                var_23 |= ((/* implicit */signed char) max((max((max(((unsigned short)1232), ((unsigned short)64319))), (var_13))), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))) != (((unsigned long long int) -179106122)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) min((var_24), (((unsigned short) ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */int) (unsigned char)154)), (var_11))) : (((13) % (((/* implicit */int) var_3)))))))));
}
