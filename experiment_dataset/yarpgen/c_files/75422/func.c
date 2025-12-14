/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75422
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((long long int) 0ULL));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 24; i_3 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned int) ((short) 1ULL));
                        arr_11 [i_0] [i_0] [i_1 - 2] [i_2] [i_1 - 2] [i_0] = min(((+(((((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_1 - 1] [i_2 + 1] [i_3 + 1] [i_0])) % (532480383U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (short)-26144))))));
                        arr_12 [21U] [i_1 + 2] [i_1 - 2] [i_0] [i_3] = ((/* implicit */signed char) ((long long int) ((unsigned long long int) var_12)));
                    }
                    for (short i_4 = 1; i_4 < 24; i_4 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (+(((int) arr_3 [0ULL] [i_1 - 2])))))));
                        var_17 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_8 [i_4 - 1] [i_1 - 2] [i_1 - 2] [i_4 - 1])) ? ((+(((/* implicit */int) (short)26142)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)7)) && (((/* implicit */_Bool) (short)26143)))))))));
                        var_18 = ((/* implicit */unsigned short) var_8);
                        var_19 += ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) (short)-26144)), (5106138383351678974ULL)))));
                        var_20 = ((/* implicit */_Bool) var_5);
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_17 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5])))) ? (arr_7 [i_0] [i_0] [i_2 - 3] [i_5]) : (((/* implicit */long long int) (~(4294967270U))))));
                        var_22 += ((/* implicit */unsigned char) (((+(((/* implicit */int) var_6)))) << ((((+(4162253928005834342ULL))) - (4162253928005834335ULL)))));
                        var_23 = ((unsigned short) arr_3 [i_0] [i_0]);
                        arr_18 [i_0] [13ULL] [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)62535)) < (((/* implicit */int) (unsigned char)244))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            arr_21 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1 + 1] [i_2] [i_1 + 1])) ? (var_14) : (var_14)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_5] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [(signed char)14] [i_5] [(signed char)14]))) : (var_3)))) : (((((/* implicit */_Bool) (short)2048)) ? (5106138383351678975ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526)))))));
                            arr_22 [i_6] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (short)26143);
                        }
                    }
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        arr_25 [i_0] [i_1 + 2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_13)))) && (((/* implicit */_Bool) var_9)))))) | (((((((/* implicit */_Bool) (short)-12656)) ? (-50877960188281873LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) % (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 2; i_8 < 23; i_8 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) arr_7 [i_7] [i_7] [i_7] [i_7]);
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 10278885445495636901ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (+(var_2)))))) : (1ULL)));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_9 = 2; i_9 < 23; i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_26 [i_0] [(unsigned char)11] [i_1 - 1] [i_0] [i_2 - 4] [i_0] [i_0])) : (((/* implicit */int) var_7))));
                            arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(1623367794)))) ? (arr_7 [i_0] [i_2] [i_7] [i_9 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17314177519643448239ULL))))))));
                        }
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((+(min((((/* implicit */long long int) 2120267626)), (arr_8 [i_0] [i_0] [i_0] [i_0]))))) != (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) + (((int) (unsigned char)29)))))));
                    }
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) max((((short) ((short) arr_14 [i_0] [i_2] [i_1 + 1] [i_0] [i_0]))), (((/* implicit */short) ((_Bool) (unsigned char)216))))))));
                    arr_34 [i_0] [i_1] [i_0] = ((/* implicit */short) ((unsigned int) 18446744073709551614ULL));
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2] [i_2])))))))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((long long int) (+(((/* implicit */int) (signed char)-72))))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)-2048)))))))));
    var_29 += ((/* implicit */unsigned int) var_8);
}
