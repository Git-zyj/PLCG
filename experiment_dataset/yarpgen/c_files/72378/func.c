/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72378
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
    var_15 = ((/* implicit */signed char) max((1125899906842623LL), ((~((~(6067031182533903548LL)))))));
    var_16 = var_8;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */short) var_8);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) (~((-(arr_6 [i_0] [i_1] [i_2] [i_3])))));
                                var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (6597069766656ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? ((+(var_11))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2])))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_1] [(signed char)3] [i_1] = ((((/* implicit */_Bool) (+((-(arr_14 [i_0] [i_1] [i_1] [i_1])))))) ? (arr_12 [(signed char)7] [i_0] [i_5] [i_5] [i_1] [i_0]) : ((((_Bool)1) ? (18446737476639784928ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)67))))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), ((((!(((/* implicit */_Bool) max((arr_15 [i_0] [i_1] [i_5]), (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_5]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 253632260U)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (short)-28213))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-28213)), (arr_14 [i_0] [i_5] [15LL] [i_1])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_0 [i_5])) : (arr_12 [(unsigned char)10] [i_0] [i_5] [i_1] [i_0] [(unsigned char)10]))))) : (((/* implicit */unsigned long long int) arr_6 [i_0] [(unsigned char)1] [i_0] [i_0]))))));
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        arr_19 [i_0] [i_0] [5LL] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (~(2529356774427506139LL)));
                        var_20 -= ((/* implicit */_Bool) (~(2529356774427506139LL)));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) 18446737476639784963ULL);
                            arr_22 [i_0] [i_7] [i_5] [i_6] [i_1] = arr_20 [i_7] [(signed char)22] [i_6] [i_5] [i_1] [i_1] [i_0];
                            arr_23 [i_0] [i_5] [i_5] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((arr_8 [i_0] [i_6]), (((/* implicit */short) (signed char)33))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_11 [i_0] [i_1] [(unsigned char)12] [i_6] [i_7] [i_7])), (6611161099829160101LL)))) : (((((/* implicit */_Bool) var_9)) ? (arr_12 [i_0] [i_1] [i_5] [i_6] [i_1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (short)28212)), (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_5] [i_0] [i_5] [i_5])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_5]))))))))));
                            var_22 = ((/* implicit */unsigned short) ((_Bool) (short)-27596));
                        }
                        for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [(unsigned char)6] [i_1] [i_8] [i_1] [i_8] [i_8]))))), (min((((/* implicit */unsigned long long int) arr_20 [i_0] [i_1] [i_5] [i_1] [i_6] [i_6] [i_8])), (18446737476639784960ULL)))))));
                            arr_27 [i_1] [i_1] [i_5] [i_6] [i_8] [i_6] [i_6] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((arr_8 [i_1] [i_0]), (((/* implicit */short) var_5))))), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_10 [i_8] [i_8] [i_6] [i_5] [i_1] [i_0]))))));
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_1))));
                        var_24 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_17 [i_0])), (var_3)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_25 [i_0] [i_1] [(short)10] [i_0] [i_5] [i_0]))))), (min((((/* implicit */long long int) (short)-27589)), (((((/* implicit */long long int) ((/* implicit */int) var_4))) | (var_3)))))));
                        var_25 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_9] [i_1] [i_0] [i_9] [i_5] [i_1] [i_9])) ? (((/* implicit */int) arr_28 [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1]))))) : (max((((((/* implicit */_Bool) arr_29 [i_0] [(short)5] [i_1] [(short)5])) ? (arr_14 [i_0] [i_0] [i_0] [i_0]) : (-4258255650193491986LL))), (((/* implicit */long long int) min((((/* implicit */int) arr_4 [i_1])), (var_12))))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_1] [i_5] [i_10] = ((/* implicit */short) max(((+(arr_6 [i_0] [i_0] [i_5] [i_10]))), ((((_Bool)1) ? (arr_6 [i_0] [i_1] [i_5] [i_10]) : (arr_6 [i_0] [i_1] [i_5] [i_10])))));
                        var_26 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) min((var_11), (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_5] [i_5] [i_10] [i_10]))))), (arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_10]))), ((~(arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])))));
                        var_27 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 846155104)) : (18446737476639784959ULL)))) ? ((-(max((((/* implicit */long long int) (_Bool)1)), (var_3))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (1001851770U))))));
                        arr_35 [i_1] = ((/* implicit */long long int) ((int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)28214)), (var_11)))), (max((5859216925042206451ULL), (((/* implicit */unsigned long long int) var_2)))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 4) 
                        {
                            {
                                arr_41 [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */short) var_5)), ((short)27596)));
                                var_28 = ((/* implicit */int) (~(arr_14 [i_1] [i_5] [7ULL] [i_12])));
                                arr_42 [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_0 [i_1])))) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_11] [i_12])) : (max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (6597069766656ULL)))));
                                var_29 = (-(((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)-28213), (((/* implicit */short) arr_24 [i_0] [i_0] [i_5] [i_0] [i_0])))))) : (var_11))));
                                arr_43 [i_1] [(unsigned char)12] [i_11] = arr_14 [i_0] [i_1] [i_5] [19LL];
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_5] [i_0] [i_0])))))))));
                }
                for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_37 [i_1] [i_1] [i_13] [i_13] [i_13] [i_0])), (arr_33 [i_0] [2LL] [i_1] [i_0])))))))) : (arr_6 [i_0] [i_1] [i_13] [i_13]))))));
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) arr_17 [i_13]))));
                }
                var_33 ^= (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))));
                var_34 = ((/* implicit */unsigned long long int) (+(arr_46 [(_Bool)1] [i_1] [i_0] [i_0])));
                arr_47 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_5)), ((+(((/* implicit */int) (short)29717))))))) ? (min((((/* implicit */unsigned long long int) (~(var_9)))), (arr_33 [21ULL] [i_0] [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -4509331671168813270LL)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (short)27380)))))))))));
            }
        } 
    } 
    var_35 = ((/* implicit */_Bool) max((-9223372036854775803LL), (var_3)));
}
