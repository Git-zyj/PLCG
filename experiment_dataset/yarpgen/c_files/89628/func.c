/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89628
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [4LL] [i_2] [i_0] = ((/* implicit */signed char) (~(1826854097)));
                        arr_10 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) 305528451);
                        arr_11 [i_1] [0ULL] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (max((var_9), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) (unsigned short)7779))));
                        var_15 = ((/* implicit */int) ((unsigned short) max(((short)-8041), (((/* implicit */short) arr_4 [i_0] [i_0] [i_3])))));
                        var_16 += ((/* implicit */short) 1831521947U);
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned long long int) (-((~(var_6)))));
    }
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */long long int) ((unsigned int) 305528462))))))));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-8192)), (305528436)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)160)) : (-305528451)))) : ((((_Bool)1) ? (((/* implicit */unsigned int) -1918764142)) : (var_6)))))) ? (var_7) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)26989), ((unsigned short)34668))))) : (max((15807604049363979489ULL), (((/* implicit */unsigned long long int) -1826854093)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 2; i_4 < 14; i_4 += 1) 
    {
        for (long long int i_5 = 1; i_5 < 12; i_5 += 1) 
        {
            {
                var_19 = ((/* implicit */int) min((var_19), (max((((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */int) (unsigned short)7779)) : (((/* implicit */int) (unsigned char)66)))), ((~((-(((/* implicit */int) (short)5794))))))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 3) 
                    {
                        {
                            arr_22 [i_4] = ((/* implicit */unsigned int) (-(var_2)));
                            var_20 = max((((/* implicit */int) min((((/* implicit */short) (signed char)24)), ((short)14156)))), (((((/* implicit */_Bool) (unsigned char)100)) ? (-305528444) : (((/* implicit */int) arr_14 [i_5 + 3] [i_4 + 1])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (short i_10 = 0; i_10 < 15; i_10 += 1) 
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((-5227858289880891920LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)28724))))), (((/* implicit */long long int) arr_27 [i_4] [i_5 - 1] [i_10] [i_10]))))) ? ((~(max((var_11), (((/* implicit */long long int) (signed char)24)))))) : (((/* implicit */long long int) var_2))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(2221311083155569734LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57754)) ? (((/* implicit */int) (short)-21445)) : (((/* implicit */int) (unsigned short)65535)))))))) ? ((~(var_5))) : (((/* implicit */long long int) (~((+(((/* implicit */int) (short)-32760)))))))));
                                var_23 ^= ((/* implicit */unsigned int) (((-((-(((/* implicit */int) var_4)))))) < (((/* implicit */int) ((short) (short)31237)))));
                                var_24 += ((/* implicit */unsigned short) var_2);
                            }
                            /* vectorizable */
                            for (unsigned char i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
                            {
                                arr_33 [i_4 + 1] [i_5 - 1] [i_4] [i_9] = arr_24 [i_4] [6U] [i_9];
                                var_25 = ((/* implicit */unsigned int) var_4);
                                arr_34 [i_4] [9LL] [i_9] [i_8] [i_5] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)28734))));
                                arr_35 [(unsigned char)4] [(unsigned char)4] |= ((/* implicit */long long int) ((int) (signed char)-104));
                            }
                            for (unsigned char i_12 = 0; i_12 < 15; i_12 += 1) /* same iter space */
                            {
                                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) 3615074700551907753LL)) ? ((-(((/* implicit */int) (signed char)7)))) : (((int) -2126901266)))), (((/* implicit */int) (_Bool)1)))))));
                                var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_4 + 1] [(_Bool)1] [i_4 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 3]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_4 + 1] [(unsigned char)10] [i_4 + 1] [i_5 + 3] [(unsigned char)14] [i_8]))) : (min((-3733178283392194082LL), (var_5)))));
                            }
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_13 = 0; i_13 < 15; i_13 += 3) 
                            {
                                arr_40 [i_4] [(signed char)8] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_3)) : (6074632594332231961LL))));
                                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)11281)) ? (-984024536842195780LL) : (((/* implicit */long long int) 539609659)))) < (((/* implicit */long long int) ((/* implicit */int) ((663426224U) == (1061298598U))))))))));
                                var_29 = ((/* implicit */signed char) (unsigned char)52);
                            }
                            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                            {
                                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_4] [i_5 + 3] [i_8] [i_4] [1ULL])) ? (((/* implicit */int) arr_44 [i_4] [i_4] [i_5] [i_5] [i_8] [i_9] [i_14])) : (((int) (unsigned char)223))));
                                var_31 = ((/* implicit */_Bool) min((((unsigned long long int) (~(((/* implicit */int) (short)-20913))))), (((/* implicit */unsigned long long int) (-(((unsigned int) var_6)))))));
                                arr_45 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) 16184610849295547835ULL);
                                arr_46 [i_4] [i_5] [i_8] [i_4] [3LL] = ((/* implicit */unsigned char) 4611686018427387776ULL);
                            }
                            var_32 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(-3733178283392194082LL)))) ? (min((var_9), (((/* implicit */unsigned long long int) 3898499768U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-2147483647 - 1))))))), (((/* implicit */unsigned long long int) 3233668698U))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_33 = ((/* implicit */short) (-((+(((/* implicit */int) ((((/* implicit */int) (unsigned char)52)) <= (((/* implicit */int) (unsigned char)34)))))))));
}
