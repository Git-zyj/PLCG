/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59000
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
    var_19 = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-92))))) ? (var_18) : (((/* implicit */int) var_0)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) arr_0 [i_0]);
        arr_3 [(unsigned char)20] [(unsigned char)20] = ((/* implicit */long long int) max((399843204U), (((/* implicit */unsigned int) ((unsigned short) arr_2 [i_0 + 1])))));
    }
    for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((unsigned int) min((((/* implicit */unsigned char) (signed char)92)), ((unsigned char)255)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)51))))) ? (((/* implicit */int) (unsigned char)51)) : (min((((/* implicit */int) arr_4 [i_1] [(unsigned char)2])), (var_18))))))));
        arr_8 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) arr_2 [(unsigned char)8])), (((((/* implicit */_Bool) ((2666455625U) - (arr_0 [i_1])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)65528)))) : (((/* implicit */int) var_1))))));
    }
    for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((((/* implicit */int) (unsigned char)205)), (var_13)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)246))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_2]))))) ? (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2]))))) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) (unsigned char)9)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 13; i_5 += 3) 
                    {
                        for (short i_6 = 2; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (unsigned char)246)))));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (unsigned char)113)))))));
                                var_24 = ((/* implicit */unsigned char) ((((int) (unsigned short)56615)) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6 + 2]))) < (max((9223372036854775807LL), (((/* implicit */long long int) var_14)))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)205)) << (((((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1])) - (14284)))))) && (((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (unsigned short)0)), (0U))), (((/* implicit */unsigned int) (_Bool)1)))))));
                    arr_24 [i_2 + 1] [i_3] [i_3] = ((/* implicit */int) (unsigned char)47);
                    var_26 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))) : (var_7))) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_3] [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))), ((!(((/* implicit */_Bool) min((524287ULL), (((/* implicit */unsigned long long int) (unsigned char)50)))))))));
                }
            } 
        } 
        var_27 -= ((/* implicit */signed char) ((min((((int) var_8)), (((/* implicit */int) ((((/* implicit */_Bool) 3622724992U)) && (((/* implicit */_Bool) 3622724992U))))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41))))))) ^ (((14169590240163092409ULL) ^ (((/* implicit */unsigned long long int) arr_23 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2] [4U])))))) - (14169590237846527516ULL)))));
    }
}
