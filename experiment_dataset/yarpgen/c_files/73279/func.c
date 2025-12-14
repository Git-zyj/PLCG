/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73279
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) 13U)), (3912418029064594555ULL)))))));
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 17300245070988240800ULL))) << (((((((/* implicit */_Bool) (signed char)117)) ? (1432856573432763835ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (1432856573432763817ULL)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) var_1))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_12 ^= ((/* implicit */short) ((17013887500276787781ULL) <= (17013887500276787781ULL)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_13 [i_4] [(signed char)5] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 11030810849094894490ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)1))));
                                var_13 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_10 [i_0] [i_2] [i_4]))));
                                arr_14 [i_0] [i_1] [i_0] [(unsigned short)2] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) 11030810849094894491ULL));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1432856573432763837ULL)) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) var_1))));
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_1 + 1])))))));
                }
            } 
        } 
        var_16 += ((/* implicit */unsigned char) ((_Bool) (unsigned short)65520));
        arr_15 [i_0] = ((/* implicit */unsigned short) 17261790600468456276ULL);
        var_17 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        var_18 = ((/* implicit */_Bool) ((((((((/* implicit */int) var_9)) | (((/* implicit */int) arr_16 [i_5] [i_5])))) & (((/* implicit */int) ((unsigned char) (unsigned short)0))))) >> (((((/* implicit */int) ((short) arr_2 [i_5]))) - (24875)))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((((11030810849094894490ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)-123))))))));
        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) (signed char)123))))) == (18446744073709551615ULL))))) : (max((7415933224614657131ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))));
        arr_18 [i_5] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_0 [(unsigned short)18])), (var_6))))));
    }
    var_21 = ((_Bool) (signed char)108);
}
