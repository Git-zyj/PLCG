/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95948
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
    var_20 = var_15;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) min(((signed char)-8), (((/* implicit */signed char) (_Bool)1))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 3; i_2 < 22; i_2 += 3) 
                {
                    var_22 = arr_8 [i_0] [i_2];
                    arr_9 [i_0] [(unsigned char)17] [2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_2 - 1]))));
                }
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((unsigned long long int) (signed char)-45)))));
                    var_24 = (+(((/* implicit */int) var_5)));
                }
                for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 2; i_5 < 24; i_5 += 4) 
                    {
                        var_25 |= ((/* implicit */signed char) (((~(((/* implicit */int) arr_15 [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 + 1])))) == (((/* implicit */int) ((((/* implicit */int) arr_15 [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 + 1])) > (var_8))))));
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_5] [i_6] = ((/* implicit */signed char) ((((6135980070475035542ULL) / (max((((/* implicit */unsigned long long int) var_1)), (var_14))))) | (((((/* implicit */unsigned long long int) var_8)) - (var_6)))));
                            var_26 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (288230376151710720ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) 1456624404379712014ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((signed char) (signed char)-45)))))));
                        }
                        for (int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((var_1) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (signed char)-34))))))) ? (((((/* implicit */_Bool) ((var_12) >> ((((((-2147483647 - 1)) - (-2147483632))) + (22)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)4)))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (2147483647) : (((/* implicit */int) arr_11 [i_0] [i_4] [i_4] [i_5])))))) : (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_20 [i_0] [i_0])) : (((/* implicit */int) var_19)))), (((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15))))))));
                            var_28 = ((/* implicit */unsigned char) (signed char)21);
                            var_29 = ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (var_12)));
                            var_30 = ((/* implicit */_Bool) var_14);
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [21] [i_0] [i_4] [i_0] [i_0])) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_18)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_1] [i_4] [i_0] [i_8]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_16)))))));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */int) var_16)) < (((/* implicit */int) (signed char)-108))));
                            var_33 |= var_11;
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) != (var_8))))) : (((arr_6 [i_8] [i_1]) >> (((var_14) - (6118158124651926563ULL)))))))));
                        }
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (3407891055946201183ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(-1444875483)))) != (((unsigned long long int) 17612022536613406314ULL))))) : (((((/* implicit */_Bool) (-(var_14)))) ? (((/* implicit */int) arr_26 [i_4] [i_5 - 1] [i_5] [i_5 + 1] [i_5] [(signed char)16] [i_5 + 1])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) > (3407891055946201183ULL)))))))))));
                        var_36 &= ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        var_37 *= ((unsigned long long int) 834721537096145302ULL);
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) 3407891055946201183ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (arr_1 [i_0])));
                        var_39 = ((((unsigned long long int) var_4)) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_9] [i_4] [i_1] [i_0]))));
                        arr_32 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_4] [i_0])) == (-2147483635))))));
                        arr_33 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_0]))) : (15038853017763350432ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)45))) | (3407891055946201156ULL))))));
                    }
                    for (signed char i_10 = 3; i_10 < 23; i_10 += 1) 
                    {
                        var_40 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_4] [i_0] [i_10 + 1] [i_10 + 2])) != (((/* implicit */int) var_0))))) | (((/* implicit */int) (signed char)9))));
                        var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [(signed char)14] [i_10 + 2] [i_10 + 2])) ? (((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_11 [i_0] [i_1] [(signed char)10] [i_10 + 2])))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)162)) : (var_4)))));
                        var_42 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) (signed char)102)) ? (var_17) : (((/* implicit */unsigned long long int) var_4)))))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) var_7))))))));
                    }
                }
            }
        } 
    } 
    var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-86)) ? (((((((/* implicit */int) (signed char)-23)) + (2147483647))) >> (((((/* implicit */int) (signed char)45)) - (16))))) : (((/* implicit */int) var_19))));
    var_44 = ((/* implicit */unsigned long long int) ((((unsigned long long int) ((((/* implicit */_Bool) 17612022536613406308ULL)) ? (((/* implicit */unsigned long long int) -1893717903)) : (var_14)))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) var_10)))))));
}
