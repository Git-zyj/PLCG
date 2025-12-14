/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8954
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
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        arr_10 [i_3] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (~(var_2)));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 4) /* same iter space */
                        {
                            arr_13 [i_0] [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) var_4);
                            arr_14 [i_2] [i_3] [i_3] [i_2] [8LL] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
                            var_10 = ((/* implicit */_Bool) (-(var_6)));
                            arr_15 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) var_2);
                            var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) var_1))));
                        }
                        for (signed char i_5 = 2; i_5 < 11; i_5 += 4) /* same iter space */
                        {
                            arr_19 [i_5] [i_3] [i_2] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (~(var_8)));
                            var_12 = ((/* implicit */short) (-(var_6)));
                            arr_20 [i_0] [i_1] [i_2] [i_1] = (!(var_0));
                        }
                        var_13 += ((/* implicit */unsigned long long int) var_0);
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 2; i_6 < 11; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (+((~(var_9))))))));
                                var_15 += ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_7))))));
                                arr_25 [i_7 + 1] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) max((min((var_6), (((/* implicit */int) var_0)))), ((-(((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((var_1), (max((var_1), ((!(var_1))))))))));
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        for (unsigned short i_9 = 2; i_9 < 21; i_9 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 20; i_10 += 3) 
                {
                    for (int i_11 = 3; i_11 < 19; i_11 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                            {
                                var_17 *= ((/* implicit */unsigned int) max(((short)(-32767 - 1)), ((short)32763)));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-(((/* implicit */int) min((var_5), (var_5)))))))));
                                arr_40 [(signed char)1] [i_9 - 2] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) max((((/* implicit */int) max((var_3), (((/* implicit */short) var_0))))), ((~(var_6)))));
                                var_19 *= ((/* implicit */signed char) min(((+(var_6))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                                var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (min((max((((/* implicit */int) var_0)), (var_2))), (((/* implicit */int) var_0))))));
                            }
                            for (signed char i_13 = 0; i_13 < 22; i_13 += 3) 
                            {
                                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-((-(var_2))))))));
                                arr_43 [i_9] [i_9] [i_11] [i_9] [i_9 - 1] [i_9] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-((~(((/* implicit */int) var_0))))))), (max((min((((/* implicit */unsigned int) var_5)), (var_8))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))))));
                                arr_44 [i_11] [i_9 - 2] [i_10 + 1] [i_11] [i_13] = ((/* implicit */_Bool) max(((-((-(((/* implicit */int) var_0)))))), (((/* implicit */int) (!(var_1))))));
                                var_22 |= (~(min((var_2), (var_2))));
                            }
                            arr_45 [i_8] [i_8] [i_8] [i_11] [i_8] [i_8] = ((/* implicit */unsigned int) max(((short)13963), ((short)28507)));
                            arr_46 [i_11] [i_11] [i_11] [i_8] = ((/* implicit */_Bool) (~((-(var_2)))));
                            var_23 = ((/* implicit */unsigned int) var_1);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_14 = 3; i_14 < 19; i_14 += 3) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) max((min((var_3), (((/* implicit */short) var_7)))), (max(((short)32767), ((short)-32759)))));
                            arr_52 [i_8] [i_8] [i_9] [i_8] = min((max((var_5), ((!(((/* implicit */_Bool) var_6)))))), ((!(((/* implicit */_Bool) (+(var_9)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
