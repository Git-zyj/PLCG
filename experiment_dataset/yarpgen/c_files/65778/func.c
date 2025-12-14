/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65778
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
    var_17 = ((/* implicit */signed char) var_7);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)(-127 - 1))))) / ((-(((/* implicit */int) (short)12))))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (signed char)-1))))), (min((((/* implicit */unsigned int) 2007954902)), (var_10)))))));
        var_18 += ((/* implicit */unsigned char) 913675138U);
        var_19 |= ((/* implicit */short) var_12);
        arr_3 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */int) arr_0 [i_0 + 3])), (-2007954907)));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_7 [i_1] = (+(arr_6 [i_1] [i_1]));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) | (max((((/* implicit */unsigned long long int) var_1)), (max((var_4), (((/* implicit */unsigned long long int) var_13))))))));
    }
    for (signed char i_2 = 1; i_2 < 11; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    {
                        arr_18 [i_4] = ((/* implicit */unsigned char) var_5);
                        var_21 = ((max((((unsigned int) (signed char)-126)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))))))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))));
                        arr_19 [i_2 + 2] [i_2] [i_2 + 2] [i_4] [i_2] = ((/* implicit */int) arr_17 [i_4]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) arr_10 [i_7]);
                        var_23 = ((/* implicit */long long int) var_2);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) arr_10 [i_2 + 2]))))), (var_8)));
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            for (long long int i_10 = 3; i_10 < 10; i_10 += 4) 
            {
                {
                    arr_31 [i_9] [i_2] = ((/* implicit */unsigned short) var_10);
                    var_25 = ((/* implicit */short) var_5);
                    /* LoopNest 2 */
                    for (long long int i_11 = 2; i_11 < 11; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 2; i_12 < 10; i_12 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) var_9);
                                var_27 *= ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_26 [i_12] [i_9] [i_9] [i_9] [i_9] [i_9]), (((/* implicit */unsigned int) min((2007954884), (-2007954895)))))))));
                                var_28 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)104))) : (var_6))))))), (min((arr_26 [i_9] [i_9] [i_9] [i_9] [i_11] [i_12]), (((/* implicit */unsigned int) var_0))))));
                                arr_37 [i_2] [i_2] [i_2] [i_11 + 1] [i_12] [i_9] = arr_34 [i_2] [i_2] [i_2] [i_2] [i_9];
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (signed char i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) max((min((((/* implicit */unsigned long long int) arr_6 [i_13] [i_13])), (var_8))), (((/* implicit */unsigned long long int) var_6)))))));
                        /* LoopSeq 2 */
                        for (long long int i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            var_30 = ((/* implicit */signed char) (-(min((((/* implicit */long long int) -2007954903)), (var_14)))));
                            arr_44 [i_2] [i_2] [i_2] [i_2] [i_9] [i_2] = ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)-116)), (min((min((var_3), (var_15))), (min((((/* implicit */long long int) var_10)), (var_16)))))));
                            var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) 2007954902)), (var_3)))) ? (min((arr_5 [i_13]), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned int) var_12))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                            var_32 *= ((/* implicit */short) arr_10 [i_2]);
                        }
                        for (unsigned int i_15 = 4; i_15 < 11; i_15 += 1) 
                        {
                            var_33 = (signed char)-112;
                            var_34 = ((/* implicit */unsigned char) var_11);
                            var_35 = max((((/* implicit */int) ((signed char) var_11))), ((-((-(((/* implicit */int) var_11)))))));
                        }
                    }
                    for (signed char i_16 = 0; i_16 < 13; i_16 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) (~(var_14))))));
                        arr_52 [i_9] [i_9] = (i_9 % 2 == 0) ? (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_9])) >> (((var_2) - (1280126619U)))))), (min((((/* implicit */long long int) 4294967283U)), (min((((/* implicit */long long int) (_Bool)1)), (494784574913247950LL)))))))) : (((/* implicit */short) max((((/* implicit */long long int) ((((((/* implicit */int) arr_17 [i_9])) + (2147483647))) >> (((var_2) - (1280126619U)))))), (min((((/* implicit */long long int) 4294967283U)), (min((((/* implicit */long long int) (_Bool)1)), (494784574913247950LL))))))));
                    }
                    for (signed char i_17 = 0; i_17 < 13; i_17 += 4) /* same iter space */
                    {
                        arr_55 [i_2] [i_2] [i_2] [i_9] [i_17] = (unsigned char)251;
                        var_37 *= ((/* implicit */_Bool) arr_20 [i_2] [i_9]);
                    }
                    /* vectorizable */
                    for (signed char i_18 = 0; i_18 < 13; i_18 += 4) /* same iter space */
                    {
                        var_38 *= ((/* implicit */unsigned char) var_5);
                        var_39 -= ((/* implicit */unsigned short) -2007954886);
                    }
                }
            } 
        } 
    }
}
