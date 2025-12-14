/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85883
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
    var_19 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) (unsigned short)3)) ? (var_18) : (((/* implicit */int) var_12)))), (((/* implicit */int) (signed char)127)))) & (((/* implicit */int) var_9))));
    var_20 = ((((/* implicit */_Bool) max((((unsigned int) (short)16123)), (((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) 4369602196510072815LL)))))))) ? (((/* implicit */int) var_14)) : (min((((/* implicit */int) ((unsigned short) var_16))), (((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (unsigned char)164)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */short) min((var_16), (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (signed char)85))))));
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_15))) ? (((((/* implicit */_Bool) 7418535066134307155ULL)) ? (740384652) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3319)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (unsigned short)3816))))) ? (((((/* implicit */int) (signed char)-110)) % (((/* implicit */int) (unsigned short)6685)))) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)6685)) : (((/* implicit */int) (unsigned char)124)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_13 [i_2] [i_4] [i_4] = ((/* implicit */signed char) ((short) ((unsigned int) (unsigned char)169)));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (long long int i_6 = 3; i_6 < 13; i_6 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) min((((/* implicit */long long int) (short)16123)), (var_10)));
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_11))));
                                var_25 = ((13195439573842989053ULL) / (((/* implicit */unsigned long long int) var_4)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)161))) : (1048544U)))) ? (max((((/* implicit */unsigned int) var_1)), (2162833265U))) : (var_2))));
}
