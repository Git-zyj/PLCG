/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79107
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
    var_10 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((long long int) var_4))) ? (min((((/* implicit */long long int) (short)(-32767 - 1))), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)84)))))), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) 1849384051)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (var_8)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (var_1)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)20031))))) : (var_5))));
        var_12 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))), (min((((/* implicit */long long int) (short)-32764)), (var_4)))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((unsigned long long int) (unsigned char)8)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)45)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((var_6), (((/* implicit */unsigned long long int) var_8))))))) : (var_3)));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_13 += ((/* implicit */unsigned int) min((var_9), (((/* implicit */short) ((_Bool) var_5)))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9087813570127895301ULL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)63)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 3)) : (var_6)))));
        }
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 19; i_2 += 3) 
        {
            arr_11 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) 1244466113));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                var_14 ^= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 666389760225114370LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32754)))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)43))) : (var_2)));
            }
            arr_14 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
            var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (short)69)) : (((/* implicit */int) (short)20696))))));
            arr_15 [i_0] &= ((/* implicit */_Bool) ((short) (-(((/* implicit */int) (short)30699)))));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 20; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                {
                    var_17 = (+(((((/* implicit */_Bool) var_9)) ? ((-(var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)76))))))));
                    arr_25 [i_4] [i_4] [i_6] [i_4] = ((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) (_Bool)1)))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned int) ((int) 9271813688536179337ULL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) ((signed char) -414224901))) : (((/* implicit */int) var_9))))) : (max((var_0), (((/* implicit */unsigned int) -1244466094)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 1; i_7 < 17; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 3; i_8 < 20; i_8 += 2) 
                        {
                            var_19 ^= ((/* implicit */long long int) var_0);
                            var_20 = ((/* implicit */_Bool) (unsigned char)247);
                        }
                        var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) ((signed char) (signed char)-15))) ? (((/* implicit */long long int) (-(var_0)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 551810044U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (8463667705699974882LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)15)))) : (min((-6653128663260468004LL), (var_8)))))))));
                    }
                    arr_31 [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned long long int) -1))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */long long int) 20)))))), (4489757186229930270LL)));
                }
            } 
        } 
        arr_32 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18298694264555683966ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88))) : (var_6)))) ? (((/* implicit */int) ((signed char) (unsigned char)1))) : ((+(((/* implicit */int) var_9))))));
        /* LoopNest 2 */
        for (signed char i_9 = 4; i_9 < 19; i_9 += 3) 
        {
            for (unsigned short i_10 = 2; i_10 < 17; i_10 += 2) 
            {
                {
                    arr_37 [i_4] [i_10] [i_9 - 3] [8LL] |= var_1;
                    var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_0)) ? (var_4) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_0)) : (12392870325823688352ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (signed char i_11 = 3; i_11 < 14; i_11 += 2) 
    {
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)244)) ? (18446744073709551615ULL) : (16577967221757436132ULL)));
        arr_40 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) max((var_8), (((/* implicit */long long int) (unsigned short)65535)))))) ? (((((/* implicit */_Bool) max((var_2), (-6476248100438862817LL)))) ? (((/* implicit */long long int) min((0U), (237521087U)))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) -56699444)) : (var_2))))) : (((((/* implicit */_Bool) 1689383711413651218ULL)) ? (((/* implicit */long long int) 962130737)) : (6150120871155250945LL)))));
        arr_41 [i_11] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 56699432)) ? (min((((/* implicit */long long int) (unsigned char)241)), (-4489757186229930277LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-23157)))))));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) max((-4489757186229930277LL), (var_4))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) -1190171118)) ? (((/* implicit */unsigned long long int) var_2)) : (var_1))))) : (((/* implicit */int) (unsigned char)249))));
    }
    var_25 += ((/* implicit */unsigned int) ((int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 549755813880LL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (var_2))));
}
