/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85789
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)9980)) * (((/* implicit */int) var_10))))), (5694194738628584704LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24811))) : (arr_2 [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)15505);
        arr_5 [i_0] = ((/* implicit */unsigned int) ((_Bool) (+(arr_0 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) -3517368078737391613LL)), (max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (33554428ULL)))))));
            var_15 = ((/* implicit */unsigned long long int) max((-4299012542924019592LL), (((/* implicit */long long int) ((unsigned int) ((_Bool) 3150472024714971271ULL))))));
            arr_13 [i_1] [i_2] |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3150472024714971271ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)9978))))), (14910186879451490168ULL)));
        }
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) var_10))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)110)) ? (274743689216LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52097)))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) 3599871388U)) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_12))))))));
            arr_16 [i_1] = ((/* implicit */int) (unsigned short)65534);
        }
    }
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_9))));
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned int) (unsigned char)236);
        arr_21 [i_4] = ((/* implicit */unsigned short) ((long long int) (+(min((((/* implicit */unsigned long long int) (unsigned short)23204)), (6177488382932323284ULL))))));
        var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42332)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_1)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned char) var_5)))))) ? (((/* implicit */int) arr_9 [2])) : (((/* implicit */int) var_7))));
        arr_22 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((var_1) > (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [(unsigned short)0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_10)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))))))) : (((/* implicit */unsigned int) ((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) ((signed char) (_Bool)0))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)244)) : (0))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_7)) ? (3536557194258061448ULL) : (11794186959531984251ULL)))));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 4) 
                {
                    {
                        arr_33 [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)128))));
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) 3517368078737391613LL);
                            arr_37 [i_6] [i_8] [i_7] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 2147483647))) ? (((((/* implicit */int) var_4)) | (((/* implicit */int) (unsigned short)49048)))) : (((/* implicit */int) (unsigned short)65535))));
                        }
                        for (short i_10 = 3; i_10 < 8; i_10 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) 18446744073709551615ULL);
                            arr_41 [i_5] [i_6] [i_7] [i_8] [i_6] = ((/* implicit */int) ((signed char) ((2147483647) % (((/* implicit */int) var_5)))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) -1LL))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            arr_45 [3] [i_6] [i_6] [(unsigned char)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned short)56811))));
                            arr_46 [i_5] [(signed char)6] [8] [i_8] [8] |= ((/* implicit */unsigned long long int) var_2);
                        }
                        var_23 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((_Bool) var_2)))));
        arr_47 [i_5] = ((/* implicit */unsigned short) ((unsigned char) 6952573252429809612ULL));
    }
    var_25 = ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)138)), (2147483647)))), (var_1))));
    var_26 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 1709569291285727082LL)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)4974)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))))), (((((/* implicit */_Bool) (unsigned short)26535)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64379)))))))));
}
