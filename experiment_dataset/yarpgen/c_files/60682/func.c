/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60682
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
    var_14 &= ((/* implicit */long long int) max((var_5), (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_8)))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) var_1)))))))));
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) (-(var_12)))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) min((arr_1 [i_0 + 3] [i_0 + 3]), (((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [i_1] [i_0]))))))) | (((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-105))))) * (((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1])))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 19; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_3))))) & (((((/* implicit */int) arr_7 [i_3] [i_2] [i_2] [i_1] [i_1] [i_0])) | (((/* implicit */int) (signed char)-103)))))));
                            var_18 += max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)102))))), (min((min((((/* implicit */int) arr_4 [i_3] [i_2] [i_1] [i_0])), (var_12))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_2 [i_1 - 1] [i_0 + 3]), (arr_2 [i_1 - 3] [i_0 + 1])))) % ((-(((/* implicit */int) (signed char)98)))))))));
                            /* LoopSeq 4 */
                            for (short i_4 = 2; i_4 < 20; i_4 += 3) 
                            {
                                var_20 ^= ((/* implicit */long long int) ((max((((/* implicit */int) (signed char)100)), (2147483630))) >= (((/* implicit */int) ((((var_10) << (((arr_1 [i_2] [i_0]) + (1544960528))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4013580938704738225ULL)))))))))));
                                var_21 = min((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)73))) > (4013580938704738218ULL))))) / (var_4))), (((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned short) (signed char)-14))))));
                                var_22 &= ((/* implicit */unsigned char) min((((arr_1 [i_1 - 2] [i_0 + 3]) ^ (arr_1 [i_1 - 2] [i_0 + 3]))), (arr_1 [i_1 - 2] [i_0 + 3])));
                            }
                            for (long long int i_5 = 2; i_5 < 20; i_5 += 3) 
                            {
                                var_23 = ((/* implicit */int) min((((min((((/* implicit */long long int) var_9)), (var_11))) | (((/* implicit */long long int) ((((/* implicit */int) (signed char)102)) << (((var_0) - (853882342U)))))))), (((/* implicit */long long int) arr_11 [i_5 + 1] [i_1 + 1] [i_0 + 1]))));
                                arr_13 [i_0] [i_1] [i_0] [i_0] [i_5] = ((/* implicit */int) ((unsigned short) ((signed char) 4294967295U)));
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((unsigned long long int) arr_7 [i_2] [i_2 - 1] [i_2] [i_2] [i_2] [i_1 - 3]))));
                                var_25 |= ((((/* implicit */int) ((arr_10 [i_1 - 1] [i_0 + 3] [i_2] [i_2 + 2] [i_6] [i_6] [i_1]) == (arr_10 [i_1 + 1] [i_0 + 2] [i_2] [i_2 + 2] [i_6] [i_3] [i_2])))) >= (((((/* implicit */_Bool) (+(575709033)))) ? (((/* implicit */int) (signed char)-101)) : (((var_12) - (((/* implicit */int) (unsigned char)251)))))));
                                var_26 = ((/* implicit */long long int) arr_3 [i_0]);
                                arr_17 [i_6] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)85))))), (var_1))))));
                            }
                            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                            {
                                var_27 = ((/* implicit */unsigned long long int) var_12);
                                var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) ((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) && (((/* implicit */_Bool) var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_3] [i_1]))) : (((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_7] [i_3] [i_3] [i_2] [i_1] [i_0])), ((unsigned char)165)))))))));
                            }
                            var_29 += ((/* implicit */unsigned char) ((((/* implicit */int) min(((_Bool)1), ((_Bool)0)))) * (((/* implicit */int) (unsigned short)65520))));
                        }
                    } 
                } 
                var_30 ^= var_3;
                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) var_9))));
                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 + 2])) * (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (((/* implicit */int) arr_3 [i_0 + 2])))) : (((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (((/* implicit */int) arr_3 [i_0 + 2]))))));
            }
        } 
    } 
    var_33 = ((/* implicit */signed char) max((var_33), (var_8)));
}
