/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56153
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = (i_0 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= ((+(arr_0 [i_0])))))) <= ((+(((((var_7) + (2147483647))) >> (((arr_0 [i_0]) - (8090296821290672004ULL)))))))))) : (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= ((+(arr_0 [i_0])))))) <= ((+(((((var_7) + (2147483647))) >> (((((arr_0 [i_0]) - (8090296821290672004ULL))) - (4006530949374524059ULL))))))))));
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */short) ((unsigned long long int) (+(0U))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
                {
                    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) max(((((~(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) ((_Bool) (_Bool)1))))), (min((((((/* implicit */int) (_Bool)0)) >> (((var_6) - (2107029230U))))), (((int) arr_5 [(short)1] [(_Bool)1])))))))));
                    var_12 = ((/* implicit */short) ((unsigned int) ((unsigned int) (_Bool)1)));
                }
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 3; i_4 < 15; i_4 += 4) 
                    {
                        var_13 |= ((/* implicit */short) (((+(((/* implicit */int) arr_1 [(unsigned short)0])))) << (((((/* implicit */int) ((((/* implicit */int) (short)32758)) > (((/* implicit */int) (_Bool)1))))) >> (((((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)75)))) + (8912)))))));
                        arr_13 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_0] [i_0]))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            var_15 ^= ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)42813))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 992064728))))))) > (((/* implicit */int) ((unsigned short) arr_5 [i_4 + 3] [i_1]))));
                            var_16 = ((/* implicit */short) max(((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_1]))))))), ((!(((/* implicit */_Bool) arr_3 [i_4 - 2]))))));
                            arr_18 [i_0] [(_Bool)1] [i_1] [i_0] [i_4 + 2] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) >> (((-3631789097280490002LL) + (3631789097280490032LL))))) << ((((+(((/* implicit */int) arr_9 [i_1] [i_1] [7ULL] [i_5])))) + (11701)))))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))));
                        }
                        arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((arr_8 [i_0] [i_0] [i_4 - 1] [i_4 - 1]) / (arr_8 [i_4] [i_0] [i_4 - 3] [i_4])))));
                    }
                    var_17 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_14 [i_3] [i_1] [(short)8] [8LL])), ((+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (5097086960062121192LL)))))));
                    var_18 = ((/* implicit */_Bool) (~(((((((/* implicit */int) arr_9 [i_0] [i_0] [i_3] [i_0])) + (2147483647))) >> (((var_4) - (366799135U)))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                arr_26 [i_0] [i_1] [(_Bool)1] [i_0] [i_7] = ((/* implicit */signed char) ((long long int) (short)-23663));
                                var_19 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0])))) ? (var_7) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 381288108814235935LL)) <= (((((/* implicit */unsigned long long int) arr_2 [i_3] [i_3])) / (17866711464217157959ULL))))))));
                                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 981604385))));
                                var_21 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)52639)))));
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) (+(((((_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) (short)6)) >> (((/* implicit */int) (_Bool)1))))) : (((long long int) (_Bool)0))))));
                }
                arr_28 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */int) arr_14 [(signed char)14] [i_1] [i_0] [i_0])) >> (((arr_25 [i_1] [i_0] [i_0] [i_0]) + (516164315))))) >> (((((/* implicit */int) arr_23 [i_0] [i_1] [i_0] [i_0])) << (((((/* implicit */int) arr_15 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0])) - (53788)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)11206)) : (((/* implicit */int) (short)31185))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) (short)-31196))))))) : ((((~(1473229276U))) >> (((max((var_4), (((/* implicit */unsigned int) (unsigned char)255)))) - (366799130U)))))));
    /* LoopSeq 1 */
    for (unsigned short i_8 = 1; i_8 < 8; i_8 += 4) 
    {
        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) arr_24 [i_8]))))))));
        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_8] [i_8 + 2] [i_8 + 2] [i_8 + 2]))))), ((~(314649051035546043ULL))))))));
        var_25 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65524)) : (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_24 [i_8])) - (12209)))))))));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(arr_30 [i_8] [i_8])))) > ((((~(((/* implicit */int) arr_9 [i_8] [i_8] [i_8 - 1] [i_8 + 1])))) >> (((var_7) + (1824794974)))))));
    }
    var_27 = ((((/* implicit */int) (!(((/* implicit */_Bool) 2821738026U))))) <= (((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) 2821738030U)) / (4492726515791007387ULL))))));
    var_28 = ((/* implicit */_Bool) var_2);
}
