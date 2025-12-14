/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77547
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2056453494)) ? (((((/* implicit */_Bool) (unsigned short)25422)) ? (3533460427334388944LL) : (((/* implicit */long long int) -2056453495)))) : (((3533460427334388943LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-81))))))))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1]))));
                arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-2056453495)))) ? ((~(1907376875U))) : ((~(4294967295U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4448797114505699285LL)) ? (1793140041) : (-2056453481)))) : ((~(-1688088312537698129LL))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)12957)) ^ (((/* implicit */int) (unsigned short)12957)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) arr_10 [i_4]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~(3))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_6 = 3; i_6 < 13; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2056453475)) ? (4194304U) : (((/* implicit */unsigned int) 939524096))));
                            var_24 ^= ((((/* implicit */_Bool) arr_14 [i_6] [i_6 - 3] [i_6] [i_6 - 2] [i_4] [i_2])) ? (arr_14 [i_6] [i_6 + 4] [i_6] [i_6 - 2] [i_5] [i_3]) : (var_12));
                            var_25 = ((/* implicit */unsigned long long int) arr_16 [i_5]);
                            arr_19 [i_6] [i_4] [i_4] [i_4] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2056453464)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27881))) : (-1738011769788345228LL)));
                        }
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            arr_23 [i_2] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_7))))));
                            arr_24 [i_2] [i_3] [i_5] [i_5] [i_7] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (4194303U) : (arr_22 [i_2] [i_3] [i_4] [i_5] [i_5])));
                        }
                        for (long long int i_8 = 2; i_8 < 16; i_8 += 2) 
                        {
                            var_26 = ((/* implicit */int) ((4294967291U) & (((/* implicit */unsigned int) -939524077))));
                            var_27 = ((/* implicit */signed char) (~(2923801782U)));
                            var_28 = ((((arr_25 [i_8]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) + (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6144))) : (4767372187971226120LL))));
                        }
                        for (unsigned int i_9 = 4; i_9 < 15; i_9 += 3) 
                        {
                            var_29 = ((((/* implicit */_Bool) 2467437212U)) ? (9223372036854775807LL) : (((/* implicit */long long int) 1804333669)));
                            var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
                        }
                        var_31 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)45068)) ? (((/* implicit */int) (unsigned char)61)) : (arr_16 [i_2])));
                    }
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)251))));
}
