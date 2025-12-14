/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7962
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
    var_14 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) max((-1), (((/* implicit */int) var_13))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) ((_Bool) arr_2 [i_0 + 3] [i_0] [i_0])))))));
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (~((~(((/* implicit */int) arr_6 [i_3])))))))));
                                var_18 = ((/* implicit */signed char) ((min((var_11), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)95))))))) >> (((var_6) - (10082546664110634075ULL)))));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((unsigned char) ((short) ((signed char) (unsigned char)160))));
                                var_19 = ((/* implicit */unsigned short) ((long long int) (+(arr_11 [i_1] [i_0] [i_1 - 2] [i_1] [7ULL] [i_0] [7ULL]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((unsigned short) (((+(((/* implicit */int) (short)-1)))) + (((/* implicit */int) var_12))))))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((arr_10 [i_0]) - (arr_0 [(_Bool)1])))))) ? (min((((/* implicit */int) arr_12 [i_0] [i_1] [i_1 - 1] [i_1] [(unsigned char)10] [i_0] [i_0])), ((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))) : (min(((~(arr_10 [i_0]))), ((+(var_9)))))));
                    var_22 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_11 [i_2] [0U] [i_2] [i_2] [i_2] [0U] [i_0])) ? ((~(((/* implicit */int) var_1)))) : ((~(((/* implicit */int) (unsigned char)159))))))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */long long int) var_8);
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_5 + 1] [i_5 + 1]))));
        /* LoopSeq 2 */
        for (long long int i_6 = 2; i_6 < 16; i_6 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */short) ((unsigned short) arr_15 [i_5 + 1]));
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (long long int i_8 = 3; i_8 < 16; i_8 += 1) 
                {
                    for (long long int i_9 = 2; i_9 < 17; i_9 += 2) 
                    {
                        {
                            arr_28 [i_9] [14U] [i_7] [i_7] [i_6] [3ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_5] [i_6 + 1] [i_7] [i_9 + 1])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_1))));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) 425962568U)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_15 [i_9 + 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7] [i_6])))))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_10 = 2; i_10 < 16; i_10 += 1) /* same iter space */
        {
            var_26 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)6))));
            var_27 += ((/* implicit */unsigned long long int) (~(268435455U)));
        }
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (-(var_11))))));
    }
    var_29 = ((/* implicit */signed char) ((unsigned long long int) 2428041582U));
}
