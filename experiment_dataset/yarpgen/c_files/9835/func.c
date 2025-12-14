/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9835
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */int) min((((min((((/* implicit */long long int) var_14)), (-8796118333643737959LL))) / (arr_6 [i_2] [i_2] [i_2 + 1] [i_2 + 1]))), (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_1] [i_2 - 1] [i_3 + 1] [i_4])) ? (var_14) : (((/* implicit */int) (signed char)103))))) : (var_15))))));
                                var_18 = ((/* implicit */long long int) max((70368744177660ULL), (((/* implicit */unsigned long long int) (unsigned short)0))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 21; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1] [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
                                var_20 = ((/* implicit */unsigned short) var_8);
                                var_21 = ((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1]);
                                arr_18 [i_6] [i_5] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23)))))) ? (-16LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1] [i_0 + 1])) ? (var_5) : (((/* implicit */unsigned int) var_7)))))))));
                                var_22 = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_5 + 1] [i_5] [i_6]))) < (4294967295U)))), (((signed char) (unsigned short)27))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
                    {
                        var_23 -= ((/* implicit */unsigned long long int) var_9);
                        arr_23 [i_2] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) -7936008096955594860LL);
                        var_24 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_6))))));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)64)), ((-2147483647 - 1)))))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((~(var_16)))))) ? (((/* implicit */unsigned long long int) min((7936008096955594865LL), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 1]))) == (18446744073709551615ULL))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7] [i_2] [i_2 - 1] [i_0 + 1] [i_0 + 1]))) * (8992275909146510822ULL)))));
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_7] [i_2] [i_0] [i_2 + 1])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_7] [i_2 + 1])))) | (((/* implicit */int) min((var_12), (arr_19 [i_0] [i_0 - 1] [i_8] [i_8])))))))));
                            arr_26 [i_0] [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2227688304U)) ? (11ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0]))))) : (min((var_14), (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((int) arr_20 [i_0] [i_0 + 1] [i_2 + 2]))) : ((~(18446744073709551615ULL)))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            arr_30 [i_0 + 1] [i_0 - 1] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16599932873144466588ULL)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (unsigned short)35023))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_27 [i_0 + 1] [i_1] [i_2] [i_7] [i_9] [i_9] [i_9])) ? (min((((/* implicit */long long int) var_14)), (1788596347203391151LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2 + 2] [i_7] [i_9])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))))))));
                            var_29 = ((/* implicit */unsigned int) max((((unsigned long long int) min((arr_6 [i_0 + 1] [i_0] [i_0 - 1] [i_0]), (68685922304LL)))), (((unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-17))))))));
                        }
                    }
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
                    {
                        arr_33 [i_0] [i_1] [i_2] [i_2] [i_10] = min((((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_2 - 1]))) - (4294967295U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_29 [i_2 + 1]))))));
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) 16265777303690237570ULL)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_9 [i_10] [i_2 + 2] [i_2 - 1] [i_1] [i_0 + 1])), (var_4)))) ? (((/* implicit */long long int) ((16777216U) << (((var_4) - (63710878U)))))) : (((7936008096955594876LL) << (((7168) - (7168))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 264241152U)) ? (((/* implicit */int) min(((short)-1), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) arr_2 [i_2] [i_2 + 2] [i_2]))))))))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        var_31 = ((/* implicit */long long int) max((var_31), (min((((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1] [i_0 - 1] [i_0])) ? (((/* implicit */long long int) max((var_7), (((/* implicit */int) (short)-12))))) : (((((/* implicit */_Bool) 16599932873144466606ULL)) ? (arr_14 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_11] [i_1] [i_2 + 2] [i_1] [i_2] [i_11]))))))), (((/* implicit */long long int) arr_16 [i_0] [i_0 - 1] [i_1] [i_0] [i_2] [i_11]))))));
                        arr_37 [i_0] [i_1] [i_2 - 1] [i_2 - 1] = ((/* implicit */int) (+((+(min((1846811200565085009ULL), (((/* implicit */unsigned long long int) -9223372036854775801LL))))))));
                        arr_38 [i_1] [i_2 - 1] [i_1] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_10 [i_0] [i_1] [i_0] [i_0])))) ? (((/* implicit */int) (signed char)127)) : (((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_2 - 1] [i_2] [i_11] [i_11] [i_11])) ? (((/* implicit */int) (short)-12)) : (((/* implicit */int) (short)-18)))))), (((/* implicit */int) (!(var_12))))));
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((var_12) && (((/* implicit */_Bool) var_3)))))) <= (arr_6 [i_2 - 2] [i_2] [i_2 + 2] [i_0 - 1])))))))));
                    }
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */unsigned char) var_3);
    var_34 = ((/* implicit */unsigned long long int) 2227688310U);
    var_35 = ((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) min((var_13), (var_2)))))))));
}
