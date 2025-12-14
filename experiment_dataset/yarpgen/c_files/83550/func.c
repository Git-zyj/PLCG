/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83550
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
    var_19 &= ((/* implicit */unsigned short) max((((/* implicit */short) ((((((/* implicit */_Bool) var_16)) ? (var_0) : (((/* implicit */long long int) var_14)))) != (((/* implicit */long long int) ((/* implicit */int) var_6)))))), ((short)-1)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((12833826636352617728ULL), (((/* implicit */unsigned long long int) -107321027))))) || (((/* implicit */_Bool) max(((-(7657882402619648488LL))), (min((arr_9 [i_1]), (((/* implicit */long long int) var_10)))))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 107321024)) ? (-7657882402619648488LL) : (((/* implicit */long long int) -107321002)))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -7657882402619648488LL)) : (var_15)))) ? (((((/* implicit */_Bool) var_12)) ? (-7657882402619648472LL) : (((/* implicit */long long int) -107321015)))) : (max((((/* implicit */long long int) var_5)), (arr_2 [i_1])))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((-107321027), (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3876957046009942521LL)) ? (((/* implicit */unsigned int) -2061973126)) : (32767U)))) : (max((((/* implicit */long long int) var_9)), (arr_2 [i_0])))));
                        arr_13 [i_3] [(unsigned short)12] [(unsigned short)12] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            var_23 *= min((((/* implicit */signed char) (_Bool)1)), ((signed char)4));
                            arr_18 [(unsigned char)11] [i_0] [i_0] [i_0] [(_Bool)1] [7ULL] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)0)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((-7657882402619648462LL) > (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4 - 2] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_4 - 1]))))))));
                        }
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            var_24 ^= ((/* implicit */short) min((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >> (((max((((/* implicit */unsigned int) (unsigned char)4)), (3849515181U))) - (3849515153U))))), (max((((/* implicit */int) var_16)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_3]))))))));
                            var_25 = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_18)))) / (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))));
                            arr_22 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_12 [(unsigned short)6] [i_0] [i_5])) : (((/* implicit */int) arr_0 [i_1] [i_0]))))));
                        }
                        var_26 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) (_Bool)1)), (70368744169472LL))) % (((/* implicit */long long int) 1071644672))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) (_Bool)1);
                        /* LoopSeq 1 */
                        for (long long int i_7 = 1; i_7 < 14; i_7 += 2) 
                        {
                            var_28 = ((/* implicit */int) var_15);
                            arr_28 [i_0] [i_1] [(unsigned short)2] [i_6] [(short)8] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) max((var_7), (((/* implicit */short) var_5))))) : ((~(((/* implicit */int) var_8))))))));
                            arr_29 [i_7] [i_0] [(unsigned short)2] [7LL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max(((+(((((/* implicit */long long int) var_14)) + (arr_24 [10] [i_0] [i_2] [10] [10]))))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-15279)) : (((/* implicit */int) (unsigned short)960)))))))));
                        }
                        var_29 |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) + (2147483647))) << (((((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) var_7))))) | (min((((/* implicit */unsigned long long int) (_Bool)1)), (281474909601792ULL))))) - (18446744073709549135ULL)))));
                        arr_30 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (signed char)-5)), ((unsigned short)0)));
                        var_30 *= ((/* implicit */unsigned short) ((unsigned long long int) var_3));
                    }
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */int) min((var_7), (arr_14 [i_0] [i_0] [12U] [(_Bool)1] [i_2] [16LL] [i_8])))) % (((/* implicit */int) ((_Bool) (_Bool)1))))), (((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) (unsigned char)25)), (17585422676246488813ULL)))))));
                        var_31 += ((/* implicit */signed char) min((((/* implicit */unsigned short) ((short) min(((unsigned char)246), (((/* implicit */unsigned char) (signed char)-66)))))), (min((((/* implicit */unsigned short) (signed char)27)), (var_10)))));
                    }
                }
            } 
        } 
    } 
}
