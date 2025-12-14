/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83848
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_7)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                var_20 -= (!(((/* implicit */_Bool) (signed char)-70)));
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 8; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_21 -= ((/* implicit */unsigned char) ((9223372036854775780LL) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (var_2) : (var_7)))))))));
                            var_22 -= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) -9223372036854775780LL)) ? (((((/* implicit */_Bool) 8848774020409786666LL)) ? (-9223372036854775781LL) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                            arr_12 [i_0] [i_3] [i_1] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_7 [i_0] [i_1] [i_2] [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
