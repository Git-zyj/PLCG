/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79599
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) 166495631U)) ? (1448216179U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) - (((unsigned int) 1133518331U))));
    }
    for (unsigned int i_1 = 2; i_1 < 10; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((1006437583264257821LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))) < (((((/* implicit */int) (unsigned short)21332)) | (((/* implicit */int) (signed char)-121))))));
        var_12 = ((var_2) ^ (((arr_0 [i_1] [i_1]) >> (((arr_0 [i_1] [i_1]) - (478390956534127353LL))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)73)) >> (((-524380579) + (524380588)))));
    }
    for (unsigned int i_2 = 2; i_2 < 10; i_2 += 2) /* same iter space */
    {
        var_13 ^= ((/* implicit */unsigned long long int) ((arr_4 [i_2]) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)30516)) ? (-1006437583264257821LL) : (((/* implicit */long long int) 193457264U)))))));
        arr_10 [i_2] = ((/* implicit */long long int) (unsigned short)54099);
    }
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                arr_16 [0U] [i_4] |= ((var_7) == (((/* implicit */long long int) ((/* implicit */int) var_5))));
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_3]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)172)) ? (-493671016211019449LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42664))))))));
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            {
                                arr_27 [i_4] [i_5] [i_4] [i_4] [i_4] = ((/* implicit */signed char) min((arr_15 [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) var_1))));
                                arr_28 [i_3] [i_5] [i_5] [(unsigned short)8] [i_7] [i_5] = ((/* implicit */unsigned long long int) arr_14 [i_5] [i_7]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) ((_Bool) var_5))), (var_6)))) ? (((((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (var_2))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) + (var_4)))) : (((unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
}
