/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88123
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
    var_20 = ((/* implicit */_Bool) var_16);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((var_5), (var_17)))), (max((min((var_15), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_16))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_22 &= ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) var_8)), (var_6))))), (((/* implicit */unsigned long long int) min((max((var_18), (((/* implicit */int) var_16)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_17)))))))));
                        var_23 *= ((/* implicit */unsigned long long int) var_13);
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_16)), (min((var_15), (var_4)))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 17; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    var_24 = ((/* implicit */signed char) min((min((((/* implicit */int) var_1)), (max((var_18), (((/* implicit */int) var_5)))))), (((/* implicit */int) max((var_11), (var_11))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_10)), (min((((/* implicit */unsigned long long int) max((var_14), (((/* implicit */short) var_9))))), (var_6)))));
                        arr_23 [i_4] = ((/* implicit */short) var_2);
                    }
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) min((((/* implicit */int) var_14)), (var_18)));
                        var_27 = ((/* implicit */signed char) var_8);
                        var_28 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_1)), (max((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) var_13))))), (min((((/* implicit */unsigned long long int) var_7)), (var_6)))))));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) var_5))));
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 19; i_9 += 3) 
                        {
                            var_30 *= ((/* implicit */unsigned long long int) var_10);
                            var_31 *= ((/* implicit */unsigned short) var_12);
                        }
                        var_32 = ((/* implicit */long long int) var_17);
                    }
                    arr_33 [i_0] [i_4] = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_2)), (max((var_0), (((/* implicit */long long int) var_9)))))))));
                    arr_34 [i_5] [i_0] [i_4 - 2] [i_5] &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_11)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (766712449332498301ULL)))));
                }
            } 
        } 
    }
}
