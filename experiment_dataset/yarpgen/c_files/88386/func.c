/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88386
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) (short)15493)) >> (((790609706681167687LL) - (790609706681167671LL))))))) : (((((/* implicit */int) var_2)) * (((/* implicit */int) min(((unsigned short)27903), (((/* implicit */unsigned short) (unsigned char)0)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)36))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)69))))) : (((/* implicit */int) (short)-14765))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)36)))))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_9 [i_4] [i_4] [i_4])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 790609706681167687LL)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (max((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)238)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (unsigned char)238))))))));
                                arr_16 [(unsigned char)1] |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_10)))) ? (max((var_5), (var_5))) : (((/* implicit */int) arr_3 [i_4] [i_1] [i_1])))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max(((short)-14050), (var_1))))))));
                                var_13 = ((/* implicit */unsigned long long int) 0U);
                                arr_17 [i_0] [i_2] [i_4] [i_3 - 1] [i_4] = ((/* implicit */unsigned long long int) max(((signed char)37), (((/* implicit */signed char) ((((/* implicit */_Bool) -790609706681167687LL)) && (((/* implicit */_Bool) max((arr_6 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) 790609706681167686LL))))))))));
                            }
                        } 
                    } 
                    var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-77)) ? (max((((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77))) : (0U))))) : (((/* implicit */unsigned int) min((min((((/* implicit */int) var_3)), (var_5))), (1899724023))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_3))))), (((1ULL) * (0ULL)))))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (8459003166177568947ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) (unsigned char)255))))))));
            arr_21 [i_0] [i_0] = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (268431360ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(short)5] [i_5] [i_5]))))), (arr_6 [i_0] [i_0 + 1] [i_0 - 3] [i_0 - 4]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31254)))));
            arr_22 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))) < (min((-9223372036854775788LL), (((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)-44)), (var_3))))))));
            arr_23 [i_0 - 4] [i_0 - 4] = max((min((0ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned char) var_9))))));
        }
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)26773)) ? (-9223372036854775788LL) : (3221466966338674061LL)))) > (max((var_10), (((/* implicit */unsigned long long int) var_1)))))) && (((/* implicit */_Bool) (-(((var_6) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) var_9))))))))))));
    }
    for (unsigned long long int i_6 = 2; i_6 < 24; i_6 += 3) 
    {
        arr_26 [i_6] = ((/* implicit */unsigned char) (signed char)(-127 - 1));
        var_17 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6 - 2]))) < (18446744073709551610ULL))))))), (min((((unsigned int) var_7)), (((/* implicit */unsigned int) var_4))))));
        arr_27 [i_6 - 2] = ((/* implicit */long long int) arr_25 [i_6]);
    }
    for (int i_7 = 2; i_7 < 21; i_7 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) -790609706681167674LL)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)65)) || (((/* implicit */_Bool) (short)-32354)))))))), (9223372036854775776LL))))));
        arr_30 [i_7] = ((/* implicit */int) (signed char)117);
    }
}
