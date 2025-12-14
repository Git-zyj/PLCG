/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97706
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) ((995037347U) % (min((((/* implicit */unsigned int) min((var_12), (((/* implicit */signed char) (_Bool)1))))), (min((var_6), (((/* implicit */unsigned int) var_15))))))));
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (var_15))))) : (((((/* implicit */_Bool) var_12)) ? (var_14) : (var_11)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) (unsigned short)4387);
                            var_20 = ((/* implicit */unsigned char) min((max((995037347U), (((/* implicit */unsigned int) (unsigned short)61149)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-24595)) || (((/* implicit */_Bool) (unsigned char)125)))))));
                            arr_11 [(signed char)0] [i_1 - 1] |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (min((var_6), (((/* implicit */unsigned int) var_13))))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (7184553923596528854LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (995037347U) : (var_6)))) : ((((_Bool)1) ? (13199640061560003930ULL) : (var_9)))))));
                            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7184553923596528854LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)26016))) : (-5586009720533981669LL)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)4387)) : (((/* implicit */int) (unsigned short)40178)))) : (min((((/* implicit */int) var_1)), (((((/* implicit */int) (short)-24452)) / (((/* implicit */int) (short)-24452)))))));
                            arr_12 [0ULL] [0ULL] [0ULL] [i_0] [0ULL] &= ((/* implicit */unsigned char) var_0);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4387)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-24464)), (var_6)))) : (8618929012803993557LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4377)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)25))))) ? (-7184553923596528855LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    var_23 += ((/* implicit */unsigned char) (unsigned short)43214);
    var_24 &= ((/* implicit */unsigned long long int) min((var_8), (var_2)));
}
