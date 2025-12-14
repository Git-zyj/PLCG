/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6591
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((134217696U) & (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)663)))))))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (4160749599U)))) : (min((var_1), (var_18))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) (~(arr_1 [i_0] [i_0])));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_4 [(unsigned char)2] [i_0] [i_1] = ((/* implicit */unsigned int) ((_Bool) (-(9016045118088009067LL))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) (-(((var_6) ? (((/* implicit */int) var_0)) : (var_11)))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) + (((/* implicit */int) var_14))))) >= ((~(arr_8 [i_0] [i_0] [i_2])))));
                    }
                } 
            } 
        }
        for (unsigned char i_4 = 3; i_4 < 10; i_4 += 4) 
        {
            var_24 *= ((/* implicit */short) (+(((/* implicit */int) var_19))));
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    for (unsigned int i_7 = 2; i_7 < 8; i_7 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */int) (~((-(134217713U)))));
                            arr_22 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-667))) % (arr_2 [i_7 - 2] [i_4 + 1] [i_4 + 1])));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_17 [i_4 - 2] [i_4 - 1]) : (arr_17 [i_4 - 1] [i_4 - 1])));
                        }
                    } 
                } 
            } 
            var_27 = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [i_4] [i_0]))))) : (arr_8 [i_0] [i_0] [i_4 + 1]));
        }
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-664)) ? (arr_18 [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-8543)))))));
    }
    for (int i_8 = 2; i_8 < 24; i_8 += 1) /* same iter space */
    {
        var_29 = ((unsigned int) arr_24 [i_8 + 1]);
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned short)65532), (((/* implicit */unsigned short) var_6))))) ? (((arr_26 [(_Bool)1]) + (((/* implicit */unsigned int) ((/* implicit */int) max((arr_25 [i_8 - 2]), (((/* implicit */unsigned short) arr_23 [(unsigned char)5])))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) + (((((/* implicit */int) var_4)) - (((/* implicit */int) var_15))))))))))));
        var_31 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_25 [i_8 - 2])) ? (((/* implicit */int) arr_25 [i_8 - 1])) : (((/* implicit */int) (short)649)))));
        var_32 = ((/* implicit */short) (((((-(((/* implicit */int) (unsigned char)51)))) == (((/* implicit */int) arr_23 [i_8 - 1])))) ? (min((((/* implicit */unsigned int) var_16)), (arr_26 [i_8]))) : ((+(((4160749599U) * (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))));
    }
    for (int i_9 = 2; i_9 < 24; i_9 += 1) /* same iter space */
    {
        arr_30 [i_9] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_23 [i_9 - 2]))))));
        var_33 = var_3;
        var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)120))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_9 - 1]))) - (arr_26 [(unsigned char)0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_9 - 1])) ? (((/* implicit */int) arr_27 [i_9 - 1])) : (((/* implicit */int) arr_27 [i_9 - 1])))))));
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 24; i_10 += 1) /* same iter space */
    {
        arr_34 [i_10] = ((/* implicit */short) (-(((/* implicit */int) (short)8543))));
        arr_35 [i_10] [i_10] = ((/* implicit */unsigned long long int) 3415499663U);
    }
    var_35 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
}
