/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6534
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
    var_10 = ((((/* implicit */int) var_2)) * ((+(((/* implicit */int) var_9)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) var_1);
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_1]) % (((/* implicit */int) arr_5 [i_0] [i_1]))))) ? (min((((/* implicit */int) arr_0 [i_0] [i_1])), (arr_3 [i_0] [i_1]))) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)1)), (arr_3 [i_0] [i_1])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (-8270402612032684986LL))) : (((/* implicit */long long int) (~(((((((/* implicit */int) arr_4 [i_0] [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_0] [i_1])) + (138)))))))))))));
                var_13 = ((/* implicit */long long int) min((((/* implicit */int) arr_4 [i_0] [i_1])), (min((((/* implicit */int) min((arr_0 [i_0] [i_1]), (var_9)))), (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (1773139910) : (var_6)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (signed char i_6 = 2; i_6 < 15; i_6 += 1) 
                            {
                                var_14 = ((/* implicit */unsigned char) ((arr_13 [i_3 - 1] [i_4 + 1] [i_3]) <= (arr_13 [i_3 - 1] [i_4 + 1] [i_3])));
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_2] [i_3] [i_4] [i_3] [i_6])) ^ (((/* implicit */int) (unsigned short)65183))))) && (((/* implicit */_Bool) arr_15 [i_3] [i_3 - 1] [i_4 + 4] [i_6 - 2]))));
                            }
                            for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                            {
                                var_16 -= ((/* implicit */int) min((((((/* implicit */_Bool) min(((unsigned short)45279), (var_9)))) ? (min((arr_10 [i_7] [i_3 - 1]), (((/* implicit */long long int) arr_16 [i_3 - 1] [i_3 - 1] [i_5] [i_7])))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_2)))))), ((~(min((-457767211007454506LL), (var_7)))))));
                                var_17 = arr_13 [i_3] [i_5] [i_3];
                                var_18 = ((/* implicit */unsigned char) var_7);
                                var_19 = ((/* implicit */short) ((unsigned short) max((((/* implicit */long long int) 667193390U)), (((((/* implicit */_Bool) 255)) ? (arr_10 [i_3] [i_4]) : (((/* implicit */long long int) arr_16 [i_3] [i_4] [i_5] [i_7])))))));
                            }
                            for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 4) 
                            {
                                var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (max(((~(((/* implicit */int) var_5)))), (((/* implicit */int) arr_11 [i_8 - 1]))))));
                                var_21 -= arr_20 [4];
                            }
                            var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-48))))) ? (arr_18 [i_2] [i_3] [i_3] [i_4] [i_5]) : (((/* implicit */unsigned int) arr_26 [i_4 + 1] [i_4] [i_4] [i_4 + 1])))) >= (max((max((arr_28 [i_3] [i_3]), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)83)) << (((3627773905U) - (3627773904U))))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_0)), (arr_18 [i_2] [i_3] [i_3] [i_3] [i_3])));
                /* LoopSeq 2 */
                for (unsigned char i_9 = 2; i_9 < 15; i_9 += 3) 
                {
                    var_24 -= ((/* implicit */long long int) arr_18 [i_2] [i_3 - 1] [i_3 - 1] [i_3] [i_3]);
                    var_25 = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_3]))) % (arr_21 [i_2] [i_2] [i_3] [i_3 - 1] [i_9])))))), (((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_28 [i_3] [i_3])) >= (arr_30 [i_2] [i_3] [i_3 - 1] [i_9])))) < (((/* implicit */int) (!(((/* implicit */_Bool) 667193390U)))))))));
                }
                for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 2; i_12 < 14; i_12 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) min((max((max((((/* implicit */int) arr_34 [i_2] [i_12])), (2147483647))), (((((/* implicit */_Bool) 2147483647)) ? (1210625125) : (((/* implicit */int) (signed char)0)))))), (-1805952461))))));
                                var_27 &= ((/* implicit */unsigned int) min((min((((/* implicit */long long int) (short)27871)), (5877500766847470481LL))), (((/* implicit */long long int) max((((/* implicit */int) arr_27 [i_3 - 1] [i_3] [i_3 - 1] [i_12 - 1])), ((-(((/* implicit */int) arr_39 [i_2] [i_3 - 1] [i_10] [i_11] [i_12])))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) arr_16 [i_3] [i_3 - 1] [i_10] [i_10]))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
}
