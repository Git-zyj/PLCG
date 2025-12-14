/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87685
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
    var_14 ^= ((/* implicit */long long int) ((max(((-(((/* implicit */int) (signed char)-112)))), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_6))))))) + (((/* implicit */int) min(((_Bool)1), (((_Bool) var_7)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 2) /* same iter space */
                {
                    arr_9 [i_0 + 3] [i_0 + 3] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-((+(((/* implicit */int) (short)26548))))))), (((arr_8 [i_0 + 1] [i_1 - 1]) / (arr_8 [i_0 - 1] [i_1 + 1])))));
                    var_15 = ((/* implicit */unsigned int) min((arr_4 [i_0]), (((/* implicit */long long int) (!(var_2))))));
                }
                for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 2) /* same iter space */
                {
                    arr_12 [i_1] = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) arr_11 [i_0 + 3] [i_3 + 1] [i_1 + 1])))));
                    var_16 ^= ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_3]);
                    var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((var_10) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_11 [i_3] [i_0] [i_0])))) : (-6272666839369385424LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_1 + 1] [i_0 + 2] [i_3 + 1])))))));
                }
                /* LoopSeq 2 */
                for (long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                {
                    arr_15 [i_4] = ((/* implicit */int) max((((((/* implicit */unsigned long long int) 6272666839369385423LL)) & (((unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (_Bool)1))));
                    arr_16 [i_1] [(unsigned short)11] [i_4] = ((/* implicit */unsigned long long int) 2951137122U);
                    var_18 = ((/* implicit */unsigned long long int) ((_Bool) var_12));
                    arr_17 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)65535)) >= ((-2147483647 - 1)))) ? (((arr_6 [i_0] [i_0] [i_0] [i_0]) % (var_1))) : (arr_14 [i_4] [i_0] [(unsigned char)6] [i_4])))) || (((/* implicit */_Bool) min(((-(arr_5 [i_0] [i_0] [i_4]))), (((/* implicit */long long int) ((var_4) << (((/* implicit */int) (_Bool)1))))))))));
                }
                for (signed char i_5 = 2; i_5 < 17; i_5 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                    {
                        var_19 ^= ((/* implicit */short) ((unsigned int) min(((-(arr_1 [i_1] [i_1]))), (((((((/* implicit */int) var_8)) + (2147483647))) << (((((((/* implicit */int) var_8)) + (9013))) - (6))))))));
                        var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_2 [i_0 + 1])))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (arr_14 [10ULL] [10ULL] [i_5] [i_6])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_19 [i_0 - 1] [i_6])) : (((/* implicit */int) var_6))))) : (arr_10 [i_6] [i_1 - 1] [i_1 - 1]))) : (((/* implicit */long long int) -253055398))));
                        arr_22 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) arr_20 [i_0 + 1])) ^ (((/* implicit */int) arr_20 [i_0 + 3])))));
                        arr_23 [i_0] [9LL] [9LL] [i_1] [i_5] &= ((/* implicit */int) arr_7 [i_0 + 1]);
                    }
                    for (short i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */long long int) min(((+(((/* implicit */int) arr_21 [i_0 + 1] [i_1] [i_1 + 1] [i_7])))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_25 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0])), (arr_21 [i_0] [i_1] [i_5] [i_7])))))))));
                        arr_28 [i_0] [i_0] [i_5 - 2] [i_7] [i_7] = ((/* implicit */long long int) (-(((unsigned int) arr_13 [i_7] [4LL]))));
                    }
                    arr_29 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned short) max((min((min((arr_7 [i_5]), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((var_7) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (arr_13 [(_Bool)1] [i_5 - 2]))))));
                    var_22 = max((min((var_3), (arr_6 [i_1] [i_1 - 1] [i_1 + 1] [i_1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1 + 1] [i_1]))))));
                    arr_30 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [i_0 + 3] [8]))));
                    var_23 = ((/* implicit */long long int) (_Bool)1);
                }
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */unsigned long long int) max((arr_7 [i_0]), (((/* implicit */long long int) (unsigned short)40651))))), (min((var_11), (((/* implicit */unsigned long long int) arr_20 [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_1 + 1] [i_1] [i_1 + 1] [i_1])))));
                var_25 = max((((/* implicit */int) ((min((-837203464), (((/* implicit */int) arr_18 [i_0] [i_0] [i_1 + 1] [i_0])))) != (((/* implicit */int) arr_11 [i_0 - 1] [i_0 + 1] [i_1 + 1]))))), (-837203464));
                arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_12);
            }
        } 
    } 
}
