/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55585
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_10 *= ((signed char) var_5);
        arr_2 [(unsigned short)2] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) > (var_1)));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            var_11 = ((((/* implicit */int) var_3)) != ((~(((/* implicit */int) var_8)))));
            arr_5 [(short)10] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) ((int) var_1));
        }
    }
    var_12 = ((/* implicit */unsigned int) ((min((min((((/* implicit */int) var_3)), (var_4))), (var_1))) - (var_4)));
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        var_13 |= ((/* implicit */unsigned int) ((((var_9) + (var_1))) > (((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_5))))) << (((((var_9) | (var_9))) - (1685623391)))))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
            {
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) && (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) var_8))))) || ((!(((/* implicit */_Bool) var_1)))))))))));
                var_15 = ((short) ((((/* implicit */int) ((var_9) < (var_6)))) * (((/* implicit */int) min((var_7), (var_8))))));
                var_16 &= ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_8))))))))));
                arr_16 [i_3] &= ((((((/* implicit */int) var_0)) - (var_5))) < (((var_4) / (((/* implicit */int) var_8)))));
                var_17 *= ((/* implicit */unsigned char) ((((((((var_1) | (var_9))) + (2147483647))) >> (((((((/* implicit */int) var_3)) / (((/* implicit */int) var_7)))) + (3))))) < (((((var_5) == (((/* implicit */int) var_2)))) ? (((/* implicit */int) min((var_7), (((/* implicit */short) var_0))))) : (((/* implicit */int) var_2))))));
            }
            for (short i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 4) 
                {
                    var_18 = ((/* implicit */_Bool) min((2982103130000997603LL), (-2982103130000997588LL)));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_8))))) ? (((((/* implicit */int) var_3)) >> (((var_5) - (193819967))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (var_5)))));
                }
                for (short i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    arr_25 [i_7] [i_2] [i_2] [i_2] = (~(((var_9) >> (((var_9) - (1685623409))))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((min((var_4), (((/* implicit */int) var_2)))) | (max((var_1), (var_1)))))) ? (min((var_4), (((var_5) ^ (((/* implicit */int) var_3)))))) : (((((((/* implicit */_Bool) var_7)) ? (var_6) : (var_1))) ^ (((/* implicit */int) var_8)))))))));
                }
                for (signed char i_8 = 1; i_8 < 12; i_8 += 3) 
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) && (((/* implicit */_Bool) var_3))))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (((unsigned int) var_8)))))));
                    var_22 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (var_4))) / (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) < (3833487405U)))) | ((-(((/* implicit */int) var_7))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        arr_31 [i_3] [i_8] [i_2] [i_3] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                        var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_7))));
                    }
                    for (int i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((var_4) >= (((/* implicit */int) var_0)))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)112)) << (((1420939622) - (1420939619))))))));
                        var_25 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) (short)26769))))) < (min((((/* implicit */long long int) (short)26766)), (2402177831268694528LL)))));
                    }
                    arr_36 [i_2] [i_2] [i_2] [i_5] [i_8] [(signed char)6] = ((/* implicit */long long int) ((((((var_4) + (2147483647))) >> (((var_4) + (883171367))))) > ((~(((/* implicit */int) var_2))))));
                }
                for (int i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    var_26 *= ((/* implicit */unsigned short) ((((((/* implicit */int) ((var_1) > (((/* implicit */int) var_0))))) >> (((max((var_4), (var_9))) - (1685623403))))) >= (((/* implicit */int) ((var_5) > (((/* implicit */int) ((unsigned short) var_1))))))));
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_4))) % (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_7)))))))))))));
                }
                var_28 = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) (short)21656))))) / (((/* implicit */int) (short)-18035)))) >> (((/* implicit */int) ((_Bool) var_0)))));
                var_29 |= (-(((/* implicit */int) var_0)));
                var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((/* implicit */int) ((((var_6) >> (((var_6) - (793251554))))) >= (((var_5) + (((/* implicit */int) var_3))))))) / (((((/* implicit */int) var_0)) + (var_6))))))));
            }
            /* LoopNest 3 */
            for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                for (short i_13 = 0; i_13 < 14; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                            arr_48 [i_2] [i_13] [i_14] [2ULL] [2U] &= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_0))))) - (((((/* implicit */int) (short)4)) - (((/* implicit */int) (signed char)24))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_32 += ((/* implicit */long long int) (~(var_4)));
}
