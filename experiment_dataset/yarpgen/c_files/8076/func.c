/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8076
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned char i_3 = 4; i_3 < 22; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_4 = 2; i_4 < 24; i_4 += 1) /* same iter space */
                            {
                                var_11 = ((/* implicit */unsigned int) ((_Bool) max(((+(3958230190115981838LL))), (((8668529553749336724LL) / (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                                arr_14 [i_4 - 1] [i_3 + 3] [i_0] [i_1] [i_0] [i_0] [(signed char)23] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((var_2) ? (arr_2 [(unsigned char)24] [i_1]) : (((/* implicit */int) arr_0 [i_0])))), (max((((/* implicit */int) arr_12 [i_0] [i_3] [(signed char)17] [i_2 - 2] [i_3])), (arr_2 [i_3] [i_3])))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36428))) & (2462476737U)))));
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_3] [i_2] [i_1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_3 - 4]))) % (var_3)))))) ? (max((var_0), (((var_1) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_4] [i_4 + 1] [i_3]))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(signed char)23] [(unsigned char)23] [(short)2] [i_4])) & (arr_2 [i_0 + 1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((var_7), (((/* implicit */unsigned long long int) var_6))))))));
                                arr_15 [(signed char)17] [i_0] [i_0] [i_3] [i_2] = ((/* implicit */unsigned int) arr_6 [i_0] [i_0 + 1] [i_0 + 1] [i_0]);
                                var_13 = ((/* implicit */long long int) var_7);
                            }
                            for (signed char i_5 = 2; i_5 < 24; i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_0] = ((/* implicit */long long int) (+((+(((/* implicit */int) var_1))))));
                                arr_19 [i_0] [i_3 + 1] [2] [i_0] [i_2 - 2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned short)16253)) ? (((/* implicit */unsigned long long int) var_10)) : (var_7))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (3824529986U) : (((/* implicit */unsigned int) 1848314746))))))) | (((/* implicit */unsigned long long int) var_4))));
                                arr_20 [i_0] [i_0 + 4] [i_0 + 3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
                            }
                            var_14 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) (!(arr_8 [i_0]))))));
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_1] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49283))))), (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (4004317831U)))) & (((var_8) & (((/* implicit */unsigned long long int) 3888127627U)))))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (1099511627775ULL)))));
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4128639102U)) ? (var_7) : (((/* implicit */unsigned long long int) 1U)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))))) ? (max((((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) var_5)) : (2147483647)))), (min((((/* implicit */unsigned long long int) arr_2 [i_0] [(_Bool)1])), (var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (+((-(var_10)))))) ? (((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) var_1))))) % (((var_2) ? (var_3) : (((/* implicit */long long int) var_10)))))) : (((max((((/* implicit */long long int) arr_8 [i_0])), (var_9))) / (((var_3) & (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (+(((var_3) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) : (arr_11 [i_0] [i_1] [(signed char)1] [13] [i_1])));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (var_4) : (var_4))) < (((var_10) - (((/* implicit */unsigned int) var_6)))))))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) % (var_4))), (((/* implicit */unsigned int) (signed char)0))))));
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((var_10) * (var_10)))) - (max((var_9), (((/* implicit */long long int) var_4))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)52)) ? (-975182355) : (-348498496)))) : (((((/* implicit */_Bool) var_9)) ? (max((var_8), (var_8))) : (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */long long int) 4)) : (var_9))))))));
}
