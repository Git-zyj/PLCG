/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91774
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    arr_8 [i_2] [i_1] [i_0] = arr_0 [i_0] [0LL];
                    var_19 = ((/* implicit */unsigned long long int) ((max((arr_3 [i_1]), (((/* implicit */unsigned long long int) (-2147483647 - 1))))) <= (((/* implicit */unsigned long long int) var_13))));
                    var_20 &= ((/* implicit */unsigned char) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2147483635)))))));
                    var_21 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (arr_1 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) / (arr_1 [i_0])))))))));
                    arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (-2147483647 - 1));
                }
                for (unsigned int i_3 = 2; i_3 < 14; i_3 += 4) 
                {
                    arr_12 [i_0] [i_1] = ((((/* implicit */_Bool) min((arr_4 [i_1] [i_3 - 1]), (((((/* implicit */_Bool) 5800665611781180813LL)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95)))))))) ? (max((266287972352LL), (((/* implicit */long long int) arr_7 [i_1] [i_1])))) : (-5800665611781180814LL));
                    arr_13 [i_0] [i_0] [i_1] [i_0] &= ((/* implicit */unsigned char) 5800665611781180793LL);
                }
                var_22 = ((/* implicit */int) 6045676742762278560LL);
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 365432523U)) ? (((/* implicit */long long int) -4039695)) : (-12LL)));
                                arr_22 [i_1] [12LL] [13] [2LL] [2LL] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_9)) ? (arr_20 [i_1] [i_6]) : (arr_3 [i_1]))), (arr_20 [i_0] [i_0])));
                                var_24 -= arr_1 [i_6];
                                arr_23 [i_0] [i_1] [i_4] [i_1] [i_5] [i_6] = ((/* implicit */unsigned long long int) min((arr_5 [i_6]), (((/* implicit */unsigned int) arr_0 [i_0] [i_4]))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    var_25 = ((/* implicit */int) arr_25 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 13; i_8 += 3) 
                    {
                        for (long long int i_9 = 2; i_9 < 14; i_9 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) 3870014344U))));
                                var_27 += ((/* implicit */long long int) (((+(1027698081U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)187)) != (var_1)))))));
                                arr_32 [i_1] [i_1] [i_1] [i_8 + 2] [i_0] |= ((/* implicit */unsigned long long int) var_0);
                                var_28 = ((/* implicit */int) arr_6 [i_0] [i_1]);
                                var_29 &= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)97)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_15))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_10 = 1; i_10 < 14; i_10 += 2) 
                {
                    var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_14 [i_0]) : (((/* implicit */unsigned long long int) (+(5800665611781180813LL)))))))));
                    arr_37 [i_0] [3ULL] [i_1] [i_1] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
                }
                for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        var_31 = ((/* implicit */long long int) (-(137438953471ULL)));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_21 [i_0] [i_1] [i_11] [i_12] [i_0])), (((((/* implicit */_Bool) 5356540930999016034ULL)) ? (((/* implicit */long long int) arr_2 [i_12])) : (5800665611781180813LL)))))) ? ((((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */long long int) arr_24 [i_1] [i_11] [i_1] [i_1])) : (-2515867490826036771LL))) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned char)95))))))));
                    }
                    for (unsigned long long int i_13 = 2; i_13 < 14; i_13 += 4) 
                    {
                        arr_45 [13ULL] [i_1] [i_1] [(unsigned char)3] [i_11] = arr_38 [i_1] [i_1] [1U];
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) 1027698110U)) ? (min((((((/* implicit */_Bool) arr_20 [i_0] [11])) ? (var_3) : (((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [12] [i_0])))), ((~(5217321084932433028ULL))))) : (((/* implicit */unsigned long long int) var_8)))))));
                        var_34 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))), (var_11)));
                        var_35 = ((/* implicit */unsigned long long int) max(((unsigned char)0), ((unsigned char)37)));
                    }
                    var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((var_8) >= (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
                }
                arr_46 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) != (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_27 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))) && (((/* implicit */_Bool) 2501932840U)))))));
            }
        } 
    } 
    var_37 &= ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) 8ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_15)))))) < (((((/* implicit */_Bool) min((((/* implicit */long long int) 2843762703U)), (-8779139570836459007LL)))) ? ((-(((/* implicit */int) (unsigned char)151)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) == (var_12))))))));
    var_38 = var_0;
    var_39 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) var_11))) & (5800665611781180813LL))), (((/* implicit */long long int) 375874194))));
}
