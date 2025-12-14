/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92572
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
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_20 = var_2;
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (_Bool)1)), (13462543432549679712ULL))), (13462543432549679683ULL))))));
                                var_22 ^= ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) min(((signed char)-90), (var_5)))))));
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (signed char)113))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */int) (!((!(((/* implicit */_Bool) min((4975332210525206291LL), (((/* implicit */long long int) (unsigned char)121)))))))));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) (signed char)-104)))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-75))));
                    arr_15 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_10))));
                }
            } 
        } 
    } 
}
