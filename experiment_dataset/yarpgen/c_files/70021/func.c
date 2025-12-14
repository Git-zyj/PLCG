/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70021
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) var_13)), (var_10))))))) : (((/* implicit */int) (unsigned char)212))));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (var_0)));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 7; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (1835008U))), (392008116U))))));
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_13))))))))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            var_18 |= ((/* implicit */_Bool) 407248101U);
                            var_19 |= var_6;
                            arr_14 [i_4] [i_1] [i_1] = ((/* implicit */unsigned int) ((((var_12) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)51)), (var_6)))))) << (((/* implicit */int) (!(var_13))))));
                        }
                        for (unsigned int i_5 = 1; i_5 < 9; i_5 += 4) 
                        {
                            var_20 = 407248101U;
                            var_21 = ((/* implicit */unsigned short) -828987850);
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
                        {
                            arr_19 [i_6] [i_3] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned int) var_5);
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5112116876269643112ULL)) ? (((/* implicit */int) var_3)) : (-161995429)));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
                        {
                            arr_22 [i_7] [i_1] [i_2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_10))))) > (((/* implicit */int) var_2))));
                            var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 13334627197439908508ULL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        }
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) 3887719194U)))));
        var_25 = ((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */long long int) 1023U)), (4393223628442102170LL))));
    }
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (+(var_9)))) || (((/* implicit */_Bool) var_9))))) >= (var_7)));
    /* LoopSeq 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_27 = ((/* implicit */short) min(((-(((((/* implicit */_Bool) 1127215878U)) ? (((/* implicit */unsigned int) var_7)) : (var_4))))), (((/* implicit */unsigned int) min((((short) (unsigned short)62841)), (max(((short)4520), (var_8))))))));
        arr_27 [i_8] [i_8] = min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_9)))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)26574))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)1)) ^ (min((var_11), (((/* implicit */int) (short)-26575))))))));
        var_28 *= ((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned int) -2106896475)), (980697365U))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_10 = 1; i_10 < 15; i_10 += 2) 
        {
            arr_33 [i_10 + 1] [i_10] [i_9] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) (short)-32311)) : (((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_14), ((unsigned char)0))))) : (((unsigned long long int) var_3))))));
            arr_34 [i_9] [(signed char)3] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((~(3887719192U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_0)))))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 2; i_12 < 13; i_12 += 2) 
            {
                {
                    arr_40 [i_9] [(unsigned short)15] [i_9] = ((/* implicit */short) (+(((/* implicit */int) ((min((var_0), (((/* implicit */unsigned long long int) var_2)))) <= (((/* implicit */unsigned long long int) var_6)))))));
                    var_29 = ((/* implicit */signed char) ((short) ((1625554443) / (((/* implicit */int) ((short) var_10))))));
                    var_30 *= ((/* implicit */long long int) ((_Bool) 5399124345931537290LL));
                    var_31 = ((/* implicit */unsigned short) (+(3887719192U)));
                }
            } 
        } 
        var_32 = min((((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (var_11)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_1)))))), (((long long int) min((((/* implicit */unsigned short) var_14)), (var_2)))));
    }
}
