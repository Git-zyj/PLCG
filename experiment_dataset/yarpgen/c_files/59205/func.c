/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59205
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) min(((signed char)-1), (((/* implicit */signed char) (!(var_9))))));
                    arr_11 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) (-(((((-78865804) + (2147483647))) >> (((/* implicit */int) var_4))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((unsigned long long int) (short)-9976));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32512)) ? (((/* implicit */long long int) -335937022)) : (8740141989108912928LL)));
    var_21 = ((/* implicit */unsigned char) (+((-(var_10)))));
    /* LoopSeq 2 */
    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((4294443008U) - (3673345075U)))) ? (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) -491299308)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13))))));
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 18; i_4 += 2) 
        {
            for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) 
            {
                {
                    arr_21 [i_5] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_12)))))))) * (((((/* implicit */_Bool) var_7)) ? (67108864ULL) : (var_7))));
                    var_23 = ((/* implicit */_Bool) ((max((((/* implicit */int) (signed char)66)), (var_3))) * ((+(((/* implicit */int) (signed char)-56))))));
                    var_24 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (short)9976)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))))));
                    var_25 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) max(((short)9976), ((short)10867)))) >> (((1660653183) - (1660653177))))));
                }
            } 
        } 
        var_26 = ((/* implicit */int) var_11);
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)18235)) ? (((/* implicit */unsigned int) 1660653183)) : (1538606768U)));
        var_28 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) var_17)))) <= ((~(642858070))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) / ((-(((/* implicit */int) (short)7168))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_14)))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 2; i_6 < 12; i_6 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_7 = 3; i_7 < 13; i_7 += 1) 
        {
            var_29 = ((/* implicit */unsigned int) var_16);
            arr_26 [i_6] [i_6] = ((/* implicit */unsigned int) ((268435455ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)768)))));
            /* LoopNest 2 */
            for (short i_8 = 1; i_8 < 11; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 2; i_10 < 11; i_10 += 1) 
                        {
                            var_30 = ((/* implicit */int) (-(1073741568LL)));
                            var_31 = ((/* implicit */unsigned short) var_11);
                            var_32 = ((/* implicit */int) ((signed char) var_1));
                        }
                        for (unsigned int i_11 = 3; i_11 < 13; i_11 += 4) 
                        {
                            arr_37 [i_9] [1LL] [10ULL] [i_6] [i_7] = ((/* implicit */short) ((signed char) var_15));
                            arr_38 [(short)3] [i_7] [i_6] [i_7 - 1] [i_7] [i_7 - 1] [(unsigned short)12] = ((/* implicit */unsigned long long int) (~((~(var_14)))));
                            var_33 = ((/* implicit */int) ((long long int) (signed char)32));
                            arr_39 [i_9] [i_8 - 1] [i_6] [i_6] [i_9] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) var_4)) | (var_3)));
                        }
                        arr_40 [i_9] [i_8 - 1] [i_9] [i_6] = ((/* implicit */short) ((var_1) >> (((((/* implicit */int) var_12)) - (30)))));
                    }
                } 
            } 
        }
        var_34 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-68))));
        arr_41 [i_6] = ((/* implicit */_Bool) var_2);
    }
}
