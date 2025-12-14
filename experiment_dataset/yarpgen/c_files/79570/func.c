/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79570
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) var_1);
                var_15 = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_1)) - (((/* implicit */int) var_1)))) * (((/* implicit */int) var_5)))) & (((((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_1))))) * (((((/* implicit */int) var_2)) - (((/* implicit */int) var_4))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_1);
    var_17 = ((/* implicit */unsigned char) ((var_13) & (((/* implicit */long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
    {
        for (unsigned char i_3 = 2; i_3 < 11; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_4 = 4; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_18 [i_2] [i_5] [i_4] [i_2 - 1] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) << (((((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) - (1849329792938004ULL))))) | (((/* implicit */int) var_6))));
                                arr_19 [i_2] [i_5] [i_4] [i_3] [i_2] = ((/* implicit */unsigned char) var_3);
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (var_11)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        for (long long int i_9 = 2; i_9 < 10; i_9 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) var_5);
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((var_9) >> (((/* implicit */int) ((((((/* implicit */int) var_3)) << (((((/* implicit */int) var_4)) - (32777))))) == (((/* implicit */int) ((var_7) < (((/* implicit */long long int) ((/* implicit */int) var_3))))))))))))));
                                var_21 ^= ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) ((((((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) | (((/* implicit */int) (short)18501))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_5))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    var_24 *= ((/* implicit */_Bool) var_11);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_13 = 2; i_13 < 9; i_13 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_3))));
                        /* LoopSeq 1 */
                        for (unsigned char i_14 = 1; i_14 < 9; i_14 += 3) 
                        {
                            arr_39 [i_2] = ((/* implicit */short) var_6);
                            arr_40 [i_13] [i_2] [i_13] [i_14] [i_2] = ((/* implicit */unsigned short) ((((((var_7) + (9223372036854775807LL))) >> (((((/* implicit */int) var_5)) - (45))))) << (((((/* implicit */int) var_3)) - (1604)))));
                        }
                        var_26 = ((/* implicit */_Bool) var_12);
                    }
                    /* vectorizable */
                    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        arr_44 [i_2] [i_2] [8LL] [3ULL] [i_2 - 1] [i_2] = ((/* implicit */unsigned int) var_2);
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_1))))) > (((((/* implicit */int) var_3)) % (((/* implicit */int) var_8))))));
                    }
                }
                arr_45 [i_3] [i_2] [i_3] = var_5;
            }
        } 
    } 
}
