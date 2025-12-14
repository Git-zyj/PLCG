/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62750
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
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) arr_10 [i_0] [i_1 + 3] [i_2] [i_3] [i_4 + 1]);
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 70368744177152LL)) ? (((/* implicit */int) (unsigned short)24)) : (((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_2] [i_2] [i_3] [i_4] [i_4])))) % (((/* implicit */int) ((signed char) (short)-13444)))))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-78))))) ? (((((/* implicit */_Bool) (unsigned short)53022)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_0 [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4 + 2] [i_3] [i_2] [i_2] [i_1] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-13444))) + (535822336U)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            var_23 ^= ((((/* implicit */_Bool) (signed char)-49)) ? (((((/* implicit */_Bool) min((var_19), (((/* implicit */long long int) arr_12 [i_0] [i_0 + 2] [i_0 + 3] [i_0] [i_0 + 4] [i_0] [i_0]))))) ? (5949625178706778769LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 1981643375U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (arr_9 [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-8030579718204207161LL))));
                            var_24 = ((/* implicit */long long int) (short)-13444);
                        }
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)115)), (18446744073709551615ULL)))) ? (((var_9) - (arr_18 [i_1 - 2] [i_5 + 1] [i_2] [i_1]))) : (arr_5 [i_1 + 1] [i_5 + 1] [i_2] [i_1])));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) var_14)) : (arr_0 [i_0])))))) > (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (short)654))) : (((((/* implicit */_Bool) arr_4 [i_0 + 4] [i_1] [i_5])) ? (((/* implicit */long long int) var_0)) : (arr_13 [i_0 - 1] [i_1] [i_2] [i_5] [i_5 + 1])))))));
                    }
                    var_27 = ((/* implicit */short) (signed char)-116);
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */short) var_10);
    var_29 = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) ((signed char) (unsigned short)1706))), (0ULL)))));
    var_30 |= ((/* implicit */signed char) -5949625178706778770LL);
    var_31 = ((/* implicit */short) (~(((((/* implicit */_Bool) -7921365121145409156LL)) ? (131071U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15154)))))));
}
