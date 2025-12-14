/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76014
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
    var_16 = ((/* implicit */_Bool) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58527)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) min(((short)-1), (var_11))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_2 [(_Bool)1] [i_0] [i_0]);
                var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_3 [i_0])))), (((arr_0 [(_Bool)1]) + (((/* implicit */int) ((unsigned char) (unsigned short)65535)))))));
                var_18 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0] [6ULL]);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1] [(short)1])) + (-1722432617)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */long long int) var_10)) : (var_2)))) ? (725104782) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [4] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_1 [i_3 - 1])) : (((((/* implicit */_Bool) var_6)) ? (136961096) : (((/* implicit */int) arr_8 [7] [i_1] [i_1]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)7002), (((/* implicit */unsigned short) (short)32767))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_12 [i_0] [12U] [i_1] [(unsigned char)23] [i_3] [i_4]))))) : (((/* implicit */int) (_Bool)1))))) : (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)156))) : (-9223372036854775794LL))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_2)))))));
                                var_20 ^= ((/* implicit */short) max(((((~(((/* implicit */int) (_Bool)1)))) | ((-(-136961093))))), (min((((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned char)251)))), (((/* implicit */int) arr_8 [(unsigned short)19] [(unsigned char)22] [i_0]))))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((((/* implicit */unsigned long long int) arr_0 [i_3 + 2])) % (((((/* implicit */_Bool) -136961096)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197))) : (9902793298305675347ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_1]))))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((var_6) + (2147483647))) << (((((/* implicit */int) var_15)) - (56608))))) > (((/* implicit */int) (signed char)8)))))) < (var_8)));
}
