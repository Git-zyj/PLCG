/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57610
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
    var_16 = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) 1U)), (0ULL)))));
    var_17 ^= ((/* implicit */signed char) var_13);
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || ((!(((/* implicit */_Bool) var_8)))))))) : (var_14))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            arr_5 [i_1] = ((/* implicit */signed char) ((_Bool) (!(arr_2 [i_1 - 1] [i_1 - 1]))));
            arr_6 [i_1] = ((/* implicit */signed char) max((arr_3 [i_1 - 1] [i_1 - 1] [i_1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3325963713U)))))));
            arr_7 [i_1] [i_0] [i_1] = ((/* implicit */signed char) 1U);
        }
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 7; i_2 += 1) 
        {
            for (long long int i_3 = 3; i_3 < 9; i_3 += 4) 
            {
                {
                    var_19 = arr_3 [i_0] [i_2 + 1] [i_0];
                    var_20 *= ((/* implicit */unsigned long long int) (+(3325963724U)));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
        var_22 -= ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)127))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (min((8U), (((/* implicit */unsigned int) (signed char)114))))))));
    }
    for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_5 = 3; i_5 < 23; i_5 += 1) 
        {
            var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? ((+(arr_13 [i_5 - 2]))) : (min((var_4), (arr_13 [i_4])))));
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) max((((/* implicit */unsigned int) (short)16135)), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (4294967288U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (3325963724U))) : (((((/* implicit */_Bool) var_5)) ? (arr_17 [(unsigned short)10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))))));
            var_25 = ((/* implicit */_Bool) max((var_25), (((var_1) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_14 [i_5 - 1])) : (((/* implicit */int) arr_14 [i_5 - 2])))))))));
            var_26 = ((/* implicit */short) arr_13 [i_5]);
            var_27 = ((/* implicit */signed char) (~(((/* implicit */int) arr_15 [i_4] [i_5]))));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            var_28 &= ((/* implicit */unsigned long long int) min((arr_19 [i_4]), (((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_6] [i_6 - 1] [i_6 - 1])))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                for (long long int i_8 = 2; i_8 < 23; i_8 += 3) 
                {
                    {
                        var_29 = ((/* implicit */int) (-((+(969003569U)))));
                        var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((969003553U) << (((((/* implicit */int) (short)-27483)) + (27496))))))))));
                        arr_29 [i_4] [7ULL] [i_6] [i_8 - 2] = ((/* implicit */_Bool) (short)-20225);
                    }
                } 
            } 
        }
        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_14 [i_4])), (7506185407697249744ULL))) + (((/* implicit */unsigned long long int) arr_23 [i_4] [i_4] [i_4]))))) ? (-577211839) : ((((-(((/* implicit */int) (short)-6689)))) + (((/* implicit */int) var_13))))));
            var_32 = ((/* implicit */unsigned char) arr_30 [i_9]);
        }
        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (!(((/* implicit */_Bool) var_8)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_10 = 3; i_10 < 23; i_10 += 1) 
        {
            arr_37 [i_4] = (_Bool)1;
            var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) -1976954136))));
        }
        for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) 
        {
            var_35 &= ((/* implicit */unsigned short) var_8);
            /* LoopSeq 2 */
            for (signed char i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_4] [i_11] [i_12])) ? (((var_11) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_36 [i_12] [i_11] [i_4])))) : (((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_12] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_11] [i_12]))) : (541163440U)))) : (((((/* implicit */_Bool) arr_19 [i_12])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_8))))) : (((((/* implicit */long long int) arr_24 [i_4] [i_4] [21LL] [i_12])) + (-4765011791734784174LL)))))));
                arr_42 [i_12] [i_12] = ((/* implicit */_Bool) 577211838);
                arr_43 [i_12] [i_12] [(unsigned char)5] [i_12] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (short)-6686)) ? (arr_38 [21ULL] [i_11] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4450))))));
            }
            for (signed char i_13 = 0; i_13 < 25; i_13 += 1) /* same iter space */
            {
                var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (unsigned char)4))));
                arr_47 [(_Bool)1] [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_36 [i_13] [i_11] [i_4]))))), ((~(var_15)))));
                var_38 = ((/* implicit */unsigned int) var_4);
                var_39 += ((/* implicit */signed char) (+(arr_30 [i_4])));
            }
            var_40 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [10ULL] [i_11] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6656))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (arr_38 [i_4] [i_4] [i_4])))));
            var_41 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min(((_Bool)1), (var_13))) ? (((((/* implicit */_Bool) var_7)) ? (arr_17 [i_4]) : (((/* implicit */unsigned int) (-2147483647 - 1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */int) var_7)) - (((/* implicit */int) (short)23838)))) : (var_4)));
        }
    }
    for (int i_14 = 2; i_14 < 20; i_14 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_15 = 1; i_15 < 21; i_15 += 4) 
        {
            var_42 = (!(((/* implicit */_Bool) arr_19 [i_15 + 1])));
            var_43 = ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
            var_44 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (signed char)-16)) ^ (((/* implicit */int) (_Bool)1)))));
        }
        var_45 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_14 + 1] [i_14 + 2] [i_14] [i_14 + 1]))) : (arr_34 [i_14] [i_14])))))) + (var_9)));
    }
}
