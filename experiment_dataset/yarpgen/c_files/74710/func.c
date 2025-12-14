/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74710
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_11 = ((7797229417671320502ULL) | (((((/* implicit */_Bool) 10649514656038231113ULL)) ? (((/* implicit */unsigned long long int) (-(9223372036854775807LL)))) : (7797229417671320502ULL))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) ((-3764259518046852734LL) >= (((/* implicit */long long int) ((((/* implicit */_Bool) 3308493894U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 7797229417671320502ULL))))) : (((/* implicit */int) ((((/* implicit */long long int) 834551102U)) >= (-5246377093982641957LL)))))))));
                                var_13 -= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((12884939730114691132ULL) << (((var_8) - (884089797439380947LL)))))))), ((!(((/* implicit */_Bool) 10649514656038231105ULL))))));
                                arr_12 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18014398505287680ULL))))), (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) var_9))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)7540))))) ? ((+(4086236066U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)4887))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(7797229417671320502ULL)))))))));
    var_15 = ((/* implicit */long long int) max(((unsigned char)192), ((unsigned char)116)));
}
