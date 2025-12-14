/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74019
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) var_1))));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (~(((/* implicit */int) var_4)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_14 = arr_2 [2ULL];
        var_15 = ((/* implicit */unsigned short) ((short) min(((+(var_2))), (((/* implicit */unsigned int) (+((-2147483647 - 1))))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) (~(((unsigned long long int) var_3))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_17 &= ((/* implicit */unsigned int) (~((~(min((arr_9 [(_Bool)0] [(_Bool)0] [i_2] [(_Bool)0]), (((/* implicit */unsigned long long int) var_4))))))));
                        var_18 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_8 [4ULL] [i_4 + 1] [i_4] [4ULL])))) >= (((((/* implicit */_Bool) arr_8 [(unsigned short)10] [i_4 + 3] [i_4] [(unsigned short)10])) ? (arr_8 [(_Bool)1] [i_4 + 1] [i_4 - 1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_19 = ((/* implicit */unsigned long long int) (-((((~(((/* implicit */int) arr_3 [i_1] [i_1])))) << (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))))));
                    }
                } 
            } 
            var_20 = max(((+(((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))), (arr_8 [i_1] [i_1] [i_1] [10]));
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_21 ^= ((/* implicit */_Bool) 15154951913472944958ULL);
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_5] [i_5] [i_6]))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (arr_9 [i_6] [i_6] [i_6] [i_6])))))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) (signed char)21)) >= (((/* implicit */int) var_1)))))));
            var_24 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)204))))) ? ((((_Bool)0) ? (13988136139086635015ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5] [6LL] [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5] [i_6] [i_6])))))));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 2; i_10 < 15; i_10 += 4) 
                        {
                            var_25 = arr_10 [i_7] [10U] [i_7];
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (~((((~(var_11))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_10]))))))))));
                            var_27 = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-21))))) ? (((((/* implicit */_Bool) (~(2101463443882651310ULL)))) ? (10075727216942183152ULL) : (13622488299864687344ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7] [i_7]))))))) % (var_10))));
                        }
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) 8519550582276879891ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(2000621986U)))) ? (((/* implicit */int) (short)-12836)) : (((/* implicit */int) (unsigned short)61117))))) : (2328790493U))))));
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) var_10))));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!((_Bool)1)))))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((17875457857456059936ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_7 - 1]))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10)));
        }
        for (short i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (+(-6870231295105359858LL)))))) : (((((/* implicit */long long int) 4294967295U)) / (max((var_9), (((/* implicit */long long int) arr_14 [i_5] [i_11] [i_5] [i_11] [i_5] [i_5])))))))))));
            var_33 = ((/* implicit */_Bool) ((((((var_6) > (var_7))) ? ((-(10075727216942183166ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) var_0))))) - (((((/* implicit */_Bool) (~(33554432U)))) ? ((+(10244136183274954400ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
        }
    }
    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_5)) : (2147483625))))));
}
