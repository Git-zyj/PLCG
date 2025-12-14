/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71001
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
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            var_11 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (signed char)90))));
            arr_6 [i_0] [i_1 + 2] = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-5937))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)21214))))) : (((/* implicit */int) max((var_9), (var_9)))));
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28858)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)12)))))) ? ((~(((/* implicit */int) (unsigned short)29464)))) : ((~(((/* implicit */int) (unsigned char)7))))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) 1U)))));
                            arr_14 [i_2] [i_2] [i_2] [i_3] [i_4] [i_2 + 1] [i_0] = ((/* implicit */signed char) 590687157);
                            arr_15 [1ULL] [i_4] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1238203930571568035LL)) ? (((/* implicit */int) (signed char)-111)) : ((-2147483647 - 1))));
                            var_14 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) 8240731671053292417LL)))));
                            arr_16 [i_4] [i_2 + 1] [i_0] [(unsigned short)4] [i_4] = ((/* implicit */unsigned char) max((4149770893U), (((/* implicit */unsigned int) (signed char)3))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 3U)) / (((long long int) 1665547560))));
                            var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)587))));
                        }
                    } 
                } 
            }
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_5))));
                arr_24 [i_0] [6ULL] [i_7] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1 + 3] [i_1] [i_1 + 3] [i_0])) ? (arr_10 [i_0] [1ULL] [i_1] [i_7 + 1] [i_0]) : (arr_10 [i_0] [i_7 + 1] [i_0] [i_0 + 2] [i_0]))) | (((((/* implicit */_Bool) arr_10 [(signed char)10] [i_0] [i_1 - 4] [i_7 + 1] [i_0])) ? (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 3] [i_1 - 2] [i_0]) : (arr_10 [i_0] [i_1 + 2] [i_1] [i_1] [i_0])))));
            }
        }
        /* LoopNest 2 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                {
                    arr_31 [i_0] [i_8] [i_0] = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_17 [i_9] [(_Bool)1] [i_0 + 1] [i_9] [i_8 - 1] [i_0])))), (((((/* implicit */int) (signed char)-24)) + (((/* implicit */int) (unsigned char)15))))));
                    var_18 = ((/* implicit */unsigned int) arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        for (signed char i_11 = 1; i_11 < 8; i_11 += 2) 
                        {
                            {
                                arr_38 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 33554431)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)185))));
                                var_19 ^= ((/* implicit */unsigned short) (signed char)-22);
                                var_20 = ((/* implicit */long long int) var_4);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) arr_21 [i_0 - 1] [i_0]);
                                var_22 = ((/* implicit */unsigned long long int) (+(4294967288U)));
                                var_23 &= ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
                                arr_46 [i_13] [i_8 - 1] [i_0] [5LL] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) / (-7LL)));
                                var_24 = max((((/* implicit */long long int) (short)693)), (-7917309191451041601LL));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
    }
    var_26 = ((/* implicit */unsigned int) var_2);
    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (!((_Bool)1))))));
    var_28 = ((/* implicit */unsigned char) var_5);
}
