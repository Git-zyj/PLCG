/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7829
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
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_10))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */int) max((((((/* implicit */_Bool) var_2)) && (arr_1 [i_0] [i_0]))), (arr_1 [i_0] [i_0])))) << (((/* implicit */int) (!(((/* implicit */_Bool) -8299915548371057034LL))))))))));
        var_15 = ((/* implicit */long long int) max((((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [14] [i_0]))))))), (((/* implicit */unsigned long long int) (~(max((var_7), (((/* implicit */long long int) arr_1 [i_0] [i_0])))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) var_9);
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
                {
                    for (signed char i_4 = 2; i_4 < 13; i_4 += 3) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned long long int) arr_3 [i_2] [2ULL]);
                            arr_13 [i_4] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((long long int) max((arr_9 [i_4 + 2] [i_4 + 3] [i_4 - 2] [i_3 - 1] [i_0] [i_0]), (arr_9 [i_3 - 2] [i_1] [i_4 + 3] [i_3 - 2] [i_2] [i_1]))));
                            arr_14 [i_2] = ((/* implicit */short) max((((/* implicit */int) ((short) max((-5694765321490674072LL), (((/* implicit */long long int) (short)-27211)))))), (((((/* implicit */int) arr_1 [i_4 + 1] [i_0])) | (((/* implicit */int) arr_1 [i_4 - 2] [i_4 - 1]))))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)25))));
        }
    }
    for (unsigned short i_5 = 1; i_5 < 21; i_5 += 1) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) && (((/* implicit */_Bool) var_10))))) + (max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (max((((/* implicit */int) arr_16 [i_5])), (var_5)))))));
        arr_18 [(signed char)11] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (var_12)))) : (((unsigned long long int) var_3))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 1) 
    {
        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 4; i_9 < 10; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((int) 1485478168));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)25)) < (((/* implicit */int) (signed char)117)))) ? (((/* implicit */int) (signed char)117)) : ((-(((/* implicit */int) arr_2 [i_9 - 1])))))))));
                            }
                        } 
                    } 
                } 
                var_21 = arr_15 [i_6];
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 11; i_11 += 1) 
                {
                    for (long long int i_12 = 4; i_12 < 11; i_12 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_13 = 2; i_13 < 9; i_13 += 1) 
                            {
                                var_22 = (+(((((/* implicit */_Bool) arr_19 [i_12])) ? (arr_19 [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                                arr_39 [i_6] = ((/* implicit */short) (+(max((((/* implicit */int) var_10)), (1485478168)))));
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_1 [i_6] [i_11 - 2])))) * (var_5))))));
                            }
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_3))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((unsigned long long int) var_4)))));
                            arr_40 [i_6] [i_6] [6LL] = ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9)))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_8)) : (var_11))))) | (((/* implicit */long long int) max((max((var_4), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) arr_10 [i_12 + 2] [i_12 - 3] [i_11 - 2] [i_11 - 2]))))));
                            arr_41 [i_6 - 2] [1] [i_11] [i_6] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_1 [i_11] [i_7])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_11)) : (arr_23 [i_6]))))), (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) var_4)) / (var_7))), (((((/* implicit */long long int) ((/* implicit */int) var_3))) + (var_6))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
