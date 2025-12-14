/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75265
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
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        var_18 ^= ((/* implicit */signed char) ((unsigned int) arr_8 [i_0 + 1] [i_1] [i_3 - 1] [i_3] [i_2 + 1] [i_2 + 1]));
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (short)1023))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-90))))) ? (((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) (unsigned short)49495))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1019)) == (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_0)))))));
                    }
                    arr_11 [i_0 + 3] [4LL] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_0] [(signed char)5])))))) == (((/* implicit */int) arr_9 [i_2 + 2] [i_1] [i_2 - 1] [i_0] [i_0 - 2]))));
                }
            } 
        } 
        arr_12 [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) (unsigned char)0))));
    }
    var_22 |= ((/* implicit */long long int) var_6);
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 2) 
    {
        arr_17 [i_5 - 2] [i_5] = ((/* implicit */signed char) min((((((_Bool) (short)-1023)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1492987552U)) ? (((/* implicit */int) (short)32766)) : (((/* implicit */int) (_Bool)1))))) : (((unsigned int) var_11)))), (max((3309253451U), (((/* implicit */unsigned int) (unsigned char)188))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (short)-1006)) : ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)32736))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_6])) >= (0)))) * (((/* implicit */int) ((short) var_5))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
        {
            arr_25 [i_6] = ((/* implicit */_Bool) ((unsigned int) arr_0 [i_7]));
            arr_26 [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_20 [i_6] [i_6])) - (arr_18 [i_6]))) > ((~(((/* implicit */int) (signed char)110))))));
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-46)))))));
        }
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */short) ((unsigned short) arr_29 [i_6]));
            arr_30 [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31616)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6] [6U] [i_6] [i_8] [i_8] [i_8]))) : (var_9)))) && (((/* implicit */_Bool) var_11)));
            var_27 = ((/* implicit */unsigned long long int) (-(arr_21 [i_6])));
        }
        arr_31 [i_6] = ((/* implicit */short) min((((((((/* implicit */_Bool) arr_20 [i_6] [i_6])) || (((/* implicit */_Bool) (unsigned char)192)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_8 [(_Bool)1] [i_6] [i_6] [13LL] [13LL] [13LL])) >> (((((/* implicit */int) (unsigned short)16376)) - (16356)))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)29740))) % (-1959969521854633493LL))))), (var_10)));
        arr_32 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) ((8191U) <= (4294967295U)))) : (((((/* implicit */_Bool) 7488432095657257627LL)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) arr_14 [i_6]))))))) * (((((/* implicit */_Bool) arr_27 [i_6] [i_6])) ? (((/* implicit */long long int) 67108863)) : (arr_4 [i_6] [i_6] [i_6])))));
    }
    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        arr_36 [4LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)2)) - (((/* implicit */int) (_Bool)1))))) ? (1221164335U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)111)))));
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))) < (-5517638983374575348LL)))), (max((((/* implicit */int) (short)21753)), (731393659))))) > (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-1043)) : (var_14))) ^ (((/* implicit */int) var_4)))))))));
    }
    var_29 = ((/* implicit */short) ((((((((/* implicit */int) (unsigned char)67)) + (((/* implicit */int) (_Bool)1)))) & ((-(((/* implicit */int) var_16)))))) - (((/* implicit */int) ((((((/* implicit */_Bool) -1572143244)) ? (((/* implicit */unsigned long long int) 684244567)) : (8289405387059339489ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)182)) / (((/* implicit */int) var_11))))))))));
}
