/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94180
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) min((((/* implicit */int) (short)2477)), (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2503))) : (var_4))) : (var_4)));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned char) max((-1479749057), (((/* implicit */int) (unsigned char)98))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_11 [i_1] = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_1]);
                                var_21 = ((/* implicit */unsigned short) max((4192256ULL), (((/* implicit */unsigned long long int) (unsigned char)12))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 1; i_6 < 18; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) min(((short)-2487), (((/* implicit */short) var_13))))), (((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */int) arr_10 [i_5] [i_1] [i_1] [i_5] [i_1])))))))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 + 2] [i_1] [i_2] [i_5] [i_5] [i_6])) ? ((~(((/* implicit */int) (short)-1501)))) : ((((_Bool)1) ? (((/* implicit */int) ((unsigned char) var_14))) : (((((/* implicit */_Bool) 4182060882U)) ? (var_5) : (((/* implicit */int) var_13))))))));
                        }
                        var_24 += ((/* implicit */unsigned char) var_5);
                        arr_18 [i_5] [i_5] [i_2] [i_1] [(signed char)17] [i_5] = (~(((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (short)2498)) : (((/* implicit */int) (short)-2488)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        var_25 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) (short)-25167)) : (var_7))) <= ((~(((/* implicit */int) var_0))))));
                        arr_21 [i_0] = ((/* implicit */unsigned int) (unsigned char)229);
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 2; i_8 < 19; i_8 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */int) (unsigned short)13474))))) ? (arr_1 [i_8 + 1]) : (15096452153763911459ULL)));
                            var_27 = ((/* implicit */short) (!(arr_4 [i_0 - 3] [i_1] [i_2])));
                            arr_25 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_2)))) ? (var_17) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (short)-13512))))));
                        }
                        arr_26 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) (_Bool)1);
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 18; i_9 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (short)-24360)) || (var_11))));
                        arr_30 [i_0 + 1] [i_9] [i_2] [i_9 - 2] = ((/* implicit */unsigned short) ((signed char) var_1));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 4) 
                    {
                        var_29 = var_17;
                        var_30 *= ((/* implicit */unsigned int) var_17);
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (!(((/* implicit */_Bool) min((arr_8 [i_11 - 1] [i_11]), (((/* implicit */short) (_Bool)1))))))))));
                            var_32 = ((/* implicit */unsigned char) 3876795446686293588ULL);
                        }
                    }
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (~(var_17))))))));
        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) var_18)) <= (4294967295U)))) >> (((min((var_8), (((/* implicit */long long int) var_7)))) + (6703140854902189277LL))))))));
    }
}
