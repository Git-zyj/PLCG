/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63505
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
    var_19 = ((/* implicit */short) max(((+(123219318263999592LL))), (((/* implicit */long long int) var_6))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) -1225559555))))), (max((((/* implicit */unsigned long long int) 663243283)), (arr_4 [i_0] [i_0] [i_0 + 2])))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-50)) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-50)))))));
                            var_21 += ((/* implicit */_Bool) (+(min((((/* implicit */long long int) min(((short)11531), (((/* implicit */short) var_14))))), (max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) var_5))))))));
                            var_22 = ((/* implicit */unsigned long long int) (short)-14419);
                        }
                    } 
                } 
            }
        } 
    } 
}
