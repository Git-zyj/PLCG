/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93684
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
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_11 += ((/* implicit */short) 712052392253784959LL);
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
        arr_5 [i_0 - 2] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_2 [(signed char)14])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) < (((/* implicit */unsigned long long int) (-(-712052392253784949LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) arr_2 [i_0 - 2])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (arr_1 [i_0])))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) -179649028);
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (+(((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_6 [i_1] [i_1])))))))));
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) var_4);
        var_13 &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_1])) : (var_4)))));
    }
    for (short i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)-37), (arr_2 [i_2])))) ? ((-(((/* implicit */int) (signed char)-7)))) : (((((/* implicit */int) arr_7 [i_2])) + (((/* implicit */int) arr_2 [(unsigned short)2]))))));
        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (short)27636)))) | (((/* implicit */int) arr_0 [i_2] [i_2])))))));
    }
    for (signed char i_3 = 2; i_3 < 20; i_3 += 1) 
    {
        var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_3 - 2]))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) max(((unsigned short)1701), (((/* implicit */unsigned short) var_1))))) : (((/* implicit */int) (((+(((/* implicit */int) arr_13 [i_3])))) == ((+(((/* implicit */int) (signed char)21)))))))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (signed char i_7 = 1; i_7 < 22; i_7 += 1) 
                        {
                            {
                                arr_26 [(signed char)7] [i_4] [i_4] [i_6] [i_7] = ((/* implicit */long long int) (-((((+(3122491441U))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7 - 1] [i_3 + 3])))))));
                                arr_27 [i_7] [i_6] [i_5] [i_6] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                                arr_28 [i_3 - 2] [i_4] [i_5] [i_6] [i_7] [i_6] = ((/* implicit */long long int) var_9);
                                var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((arr_19 [i_3] [i_4] [i_5] [i_6]), (((/* implicit */unsigned short) arr_14 [i_3])))), (((/* implicit */unsigned short) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3)))) : (min((((/* implicit */long long int) max((((/* implicit */unsigned char) var_8)), (var_1)))), ((-(arr_24 [(short)6] [i_4] [(short)6] [i_6])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_8 = 4; i_8 < 20; i_8 += 4) 
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & ((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) arr_16 [i_3 - 2] [i_3]))))))));
                        arr_32 [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((((_Bool)1) ? (-1073873649) : (((/* implicit */int) (_Bool)1)))))))));
                        arr_33 [i_3] [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_4]))));
                        arr_34 [i_3] [(_Bool)1] [(_Bool)1] [i_8 + 1] = ((/* implicit */unsigned long long int) (short)-8474);
                        var_19 -= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_23 [i_8 - 4] [i_5] [i_5] [i_3] [i_3]))) & (((/* implicit */int) (signed char)-41))));
                    }
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) (_Bool)1))), (((((/* implicit */_Bool) 7696907773341994101ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))))) ? (max((((/* implicit */int) max((arr_25 [16LL] [10LL] [i_5]), (((/* implicit */unsigned char) arr_16 [i_3 - 1] [i_5]))))), ((-(((/* implicit */int) var_6)))))) : ((+(((/* implicit */int) (unsigned short)24111))))));
                    arr_35 [i_3] [i_4] [i_5] [i_5] = ((/* implicit */long long int) max((((((((/* implicit */int) (signed char)-62)) < (((/* implicit */int) (signed char)25)))) ? (var_4) : (((/* implicit */int) arr_13 [i_3 + 1])))), (((/* implicit */int) var_10))));
                    var_21 *= ((/* implicit */unsigned char) (!(((((/* implicit */int) (short)-22806)) < (((/* implicit */int) (short)-32759))))));
                }
            } 
        } 
        var_22 += ((/* implicit */unsigned int) arr_19 [i_3] [i_3 + 2] [i_3] [i_3 - 2]);
    }
    var_23 = ((/* implicit */long long int) (signed char)-37);
    var_24 = ((/* implicit */_Bool) (~((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)-22807)))) + (157)))))));
}
