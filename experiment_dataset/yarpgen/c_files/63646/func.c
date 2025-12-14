/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63646
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) 3026402784U))));
    var_12 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)(-32767 - 1)))));
    var_13 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) ((long long int) (unsigned short)0)))))));
    var_14 = ((((/* implicit */_Bool) min((((/* implicit */short) var_8)), (var_2)))) ? (((((/* implicit */_Bool) ((unsigned long long int) 996885117))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_8)));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned char) (unsigned short)0);
                    var_15 -= arr_5 [(unsigned char)2] [i_0] [i_0 + 1] [i_1 - 1];
                    /* LoopSeq 2 */
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1992115018)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) (unsigned short)0))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))) : (var_7))))))))));
                        arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(min((((/* implicit */int) (short)8064)), (var_5)))));
                    }
                    for (long long int i_4 = 2; i_4 < 10; i_4 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned short) ((4151537086U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_15 [i_1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_0]);
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 1; i_5 < 11; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */int) ((unsigned short) ((((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))))) <= ((~(arr_8 [i_0] [i_1] [i_1] [i_4] [i_4] [i_5]))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [i_4 - 1] [i_1] [i_4 + 1] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-29946))))) ? (((((/* implicit */int) var_8)) % (((/* implicit */int) arr_4 [i_1 + 2])))) : (arr_6 [i_1] [i_1] [i_1 - 1] [i_1 - 2])));
                        }
                        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            var_20 = arr_0 [i_6];
                            var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)35614))));
                        }
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (((_Bool)1) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((+(9223372036854775807LL))))) : (((/* implicit */long long int) min((((/* implicit */int) (signed char)-19)), (0)))))))));
                    }
                    arr_21 [i_0] [i_1] [i_1] = ((/* implicit */int) (unsigned char)53);
                    /* LoopSeq 4 */
                    for (long long int i_7 = 3; i_7 < 11; i_7 += 4) 
                    {
                        var_23 = var_0;
                        arr_24 [i_0] [i_0] [i_0 + 2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)28320))) ? (var_9) : (((/* implicit */unsigned long long int) 268435392U))));
                        var_24 = ((/* implicit */_Bool) (short)28320);
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned char) (~(((int) arr_10 [i_1] [i_0] [i_0 - 1] [i_0 - 1] [i_8]))));
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) ((0) >= (((/* implicit */int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) (_Bool)1))))) && (((/* implicit */_Bool) arr_1 [i_0])))))));
                            var_27 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL))), (((/* implicit */unsigned long long int) 1035699021))));
                            arr_31 [i_0 - 1] [i_0 - 1] [i_1] [i_8] [i_8] [i_9] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((~(var_9))), (((/* implicit */unsigned long long int) 996885117))))) ? ((~(1822023334U))) : (((/* implicit */unsigned int) 1128287592))));
                        }
                        for (short i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
                        {
                            var_28 += ((/* implicit */unsigned short) var_3);
                            var_29 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((unsigned long long int) ((((/* implicit */_Bool) (short)-4356)) ? (((/* implicit */int) (short)4356)) : (((/* implicit */int) (short)-9405))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_0)))))))));
                            arr_35 [i_0] [i_1] [i_2] [i_2] [i_8] [i_10] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) < (min((arr_0 [i_0 + 1]), (13835058055282163712ULL)))));
                        }
                    }
                    for (int i_11 = 2; i_11 < 10; i_11 += 3) /* same iter space */
                    {
                        arr_39 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) 1128287581);
                        arr_40 [(short)10] [i_0 - 1] [i_1] [i_2] [i_11] &= ((/* implicit */short) -1326146024);
                    }
                    for (int i_12 = 2; i_12 < 10; i_12 += 3) /* same iter space */
                    {
                        arr_44 [i_0] [i_1] [i_2] [i_1] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-23123)) & (((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_12]))));
                        /* LoopSeq 1 */
                        for (signed char i_13 = 0; i_13 < 13; i_13 += 1) 
                        {
                            arr_47 [i_0 + 2] [i_2] [i_12] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-16100)) ? (((/* implicit */unsigned long long int) 1326146034)) : (arr_8 [i_0 - 1] [i_0] [i_1] [i_0] [i_0] [i_0 + 2])))))));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (unsigned short)11242)), (var_7)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-14))))) : (((((/* implicit */_Bool) 1326146023)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)16100)) ? (((/* implicit */int) (unsigned short)54596)) : (((/* implicit */int) (signed char)-24))))) : (min((4265096509U), (((/* implicit */unsigned int) 455295395))))))));
                            arr_48 [i_1] = ((/* implicit */unsigned int) min((17853895593719457898ULL), (((/* implicit */unsigned long long int) (signed char)-14))));
                        }
                        var_31 = ((/* implicit */short) max((min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-14)) >= (483989626)))), (arr_2 [i_1] [i_2]))), (((/* implicit */long long int) -1326146035))));
                    }
                }
            } 
        } 
    } 
}
