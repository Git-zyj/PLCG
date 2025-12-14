/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56696
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
    var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) var_3))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_11 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(-1105883272)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            var_12 *= ((/* implicit */signed char) (+((+(((/* implicit */int) var_4))))));
            var_13 = ((/* implicit */short) (~(((/* implicit */int) var_7))));
            var_14 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) < (var_0)));
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) var_7);
                var_15 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_1))))));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_0) - (var_0)))))))));
            }
            for (long long int i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
            {
                arr_10 [(unsigned short)17] [i_1 + 4] [i_3] = ((/* implicit */long long int) (((-(((/* implicit */int) var_7)))) * (((-721429001) * (((/* implicit */int) (unsigned short)0))))));
                var_17 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-107))));
            }
            for (long long int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
            {
                var_18 -= ((/* implicit */int) (!((!(var_7)))));
                arr_13 [(short)6] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
                arr_14 [i_4] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_7))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_5 = 4; i_5 < 16; i_5 += 3) 
            {
                for (int i_6 = 2; i_6 < 15; i_6 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (+(((((/* implicit */int) var_1)) - (arr_20 [i_5] [i_6] [i_6]))))))));
                            var_20 ^= ((/* implicit */short) (+(((((/* implicit */int) var_1)) - (((/* implicit */int) arr_1 [i_5 - 4]))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) != (var_0))))) + (var_8))))));
                            arr_27 [i_5] [i_6 + 3] [i_5] [i_5] [i_1] [i_1] [i_0] = arr_19 [i_5] [8] [i_5 + 3] [i_5] [i_5] [i_5];
                        }
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) + ((+(var_0)))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (var_9))))));
                            arr_32 [12LL] [i_5] [i_5] [i_5] [i_6] [i_6] [i_9] = ((/* implicit */short) arr_9 [i_0] [i_5] [i_6]);
                        }
                        var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
                    }
                } 
            } 
        }
        var_24 ^= (~(((((/* implicit */_Bool) (short)-10094)) ? (1643778134166259688ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4095)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4274509825U)))))));
    }
    for (int i_10 = 0; i_10 < 23; i_10 += 4) 
    {
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_33 [i_10]))));
        var_26 = ((/* implicit */unsigned char) var_6);
        var_27 = ((((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_2))))) == (min((var_9), (var_8)))))) * ((-(((/* implicit */int) var_7)))));
    }
}
