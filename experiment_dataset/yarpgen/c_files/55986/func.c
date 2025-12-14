/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55986
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
    var_18 = min((((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_3)))))), (var_15));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    var_19 |= ((/* implicit */long long int) arr_4 [i_1]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) min((arr_14 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0]), (((/* implicit */long long int) (signed char)-79))))) ? (((long long int) (short)-9436)) : (min((((/* implicit */long long int) var_10)), (arr_12 [i_0] [i_0] [i_1] [i_2 + 1] [i_0] [i_1]))))));
                                arr_16 [i_2] [i_1] [i_2] [i_1] [i_0] |= ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)9413)));
                                arr_17 [i_4] |= ((/* implicit */unsigned int) var_14);
                                var_21 = ((((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) (unsigned short)13814)))))) % (((((unsigned int) var_8)) ^ (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_2 + 2] [i_2 + 2] [i_2 + 2])) ? (arr_9 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3]))))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned int) (unsigned short)51727)), (var_17))))), ((+(((((/* implicit */_Bool) var_15)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) arr_4 [i_1]);
                                arr_23 [i_6] [i_5] [i_0] [i_1] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_22 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))) ? ((+(((/* implicit */int) arr_21 [i_2 + 2] [i_2 + 1])))) : (((/* implicit */int) (unsigned short)13813))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) max((((/* implicit */unsigned char) ((((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-91)))))) >= (((/* implicit */int) max((var_4), (((/* implicit */signed char) var_3)))))))), (((unsigned char) (-9223372036854775807LL - 1LL))))))));
                }
                /* LoopNest 3 */
                for (unsigned int i_7 = 2; i_7 < 18; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 4; i_8 < 18; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            {
                                arr_33 [i_7] [i_1] [i_8 - 4] [i_9] [i_9] [i_9] = ((/* implicit */short) min((max((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)9435)))), (((/* implicit */long long int) ((unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0]))))), (min((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (-9031683633382778124LL)))))));
                                var_24 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (signed char)-78)) > (((/* implicit */int) min((arr_1 [i_7 + 1] [i_8 - 4]), (var_4)))))));
                                arr_34 [i_9] [i_9] [i_1] [i_1] [i_8] [i_9] [i_9] |= ((/* implicit */short) ((((((/* implicit */long long int) var_1)) % (-9031683633382778114LL))) << (((-2083732178839702851LL) + (2083732178839702866LL)))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */long long int) ((unsigned short) 9031683633382778131LL));
                var_26 |= ((/* implicit */_Bool) ((unsigned char) min((min((((/* implicit */unsigned long long int) (short)16308)), (11091916394416794801ULL))), (((/* implicit */unsigned long long int) (unsigned short)51728)))));
                /* LoopSeq 1 */
                for (int i_10 = 1; i_10 < 17; i_10 += 2) 
                {
                    var_27 |= ((/* implicit */signed char) arr_6 [i_10]);
                    var_28 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (((int) (_Bool)1))))), (((((/* implicit */unsigned long long int) ((var_1) >> (((((/* implicit */int) var_0)) - (46891)))))) % (((((/* implicit */_Bool) arr_21 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 9031683633382778123LL)) : (arr_37 [i_10] [i_10] [i_10] [i_1])))))));
                    var_29 |= ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_10] [i_1])) >> (((((/* implicit */int) (short)9436)) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13807))) == (arr_37 [i_10] [i_1] [i_1] [i_0]))))))));
                }
            }
        } 
    } 
}
