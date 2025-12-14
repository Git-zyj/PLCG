/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60836
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
    var_20 = ((/* implicit */int) var_12);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [(signed char)8] [3] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_3 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0]))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (short)32767);
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_2] |= ((/* implicit */int) min((((/* implicit */long long int) (-(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))), (arr_9 [i_0])));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) 1412265489402304809ULL))) ? (((/* implicit */int) min((((unsigned short) var_4)), (((/* implicit */unsigned short) arr_10 [i_2] [i_0]))))) : (max((max((var_4), (((/* implicit */int) arr_10 [i_0] [i_2])))), (((-581364278) - (((/* implicit */int) arr_10 [i_0] [i_0])))))))))));
                    var_22 = ((/* implicit */int) arr_10 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_23 ^= ((/* implicit */int) (+(max((var_5), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
    {
        var_24 = arr_20 [10ULL] [(unsigned char)9];
        arr_22 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_5])) ? (-581364254) : (569569210)))) : (((((/* implicit */_Bool) (unsigned char)121)) ? (arr_21 [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122)))))))) ? (-569569231) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (arr_21 [(unsigned char)5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
    {
        arr_25 [i_6] [8U] = ((/* implicit */unsigned int) ((-581364278) + ((-(((/* implicit */int) arr_24 [i_6]))))));
        var_25 = ((/* implicit */unsigned int) var_1);
        var_26 = ((/* implicit */int) arr_19 [i_6]);
    }
}
