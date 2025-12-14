/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56697
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) var_10))), ((-(((/* implicit */int) arr_2 [i_2]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (1065353216U))) : (arr_10 [i_2 - 2])))) : (((long long int) ((var_0) & (((/* implicit */long long int) ((/* implicit */int) (short)32256))))))));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_3 + 2] [i_3] [i_3]))));
                                var_20 -= var_1;
                            }
                            for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)32725)) ? (636720915U) : (3658246381U)));
                                var_22 += ((/* implicit */long long int) var_3);
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 636720915U)) ? (arr_10 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65513))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)54721))))))) > (var_10)));
                            }
                            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
                            {
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -5757476020952617792LL)) ? (((/* implicit */int) var_14)) : (min((1944634448), (((/* implicit */int) var_14))))))) : (((var_1) - (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) + (((/* implicit */int) var_15)))))))));
                                arr_17 [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) max((((/* implicit */unsigned long long int) 1364724368U)), (5883673887850851234ULL))))) ? (3169869235U) : (min((arr_15 [i_2] [i_2 + 3] [i_2 + 2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 3]), (((/* implicit */unsigned int) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2 - 1]))))));
                                var_25 += ((/* implicit */unsigned int) ((((arr_8 [i_1] [i_1] [i_1]) - (arr_11 [i_1] [i_2] [i_2] [i_0] [i_6]))) & (((((/* implicit */_Bool) var_6)) ? (arr_8 [i_1] [i_2] [i_1]) : (arr_8 [i_0] [i_2 + 3] [i_2])))));
                                var_26 = (short)-2829;
                                var_27 = ((/* implicit */signed char) ((max((636720915U), (((((/* implicit */_Bool) 1903288180U)) ? (3169869235U) : (var_10))))) & (((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [i_1])), (((((/* implicit */_Bool) arr_3 [i_6] [i_0])) ? (((/* implicit */int) (short)-4433)) : (1040187392))))))));
                            }
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-2829)) & (((/* implicit */int) (short)-2818))))) : (((((/* implicit */unsigned int) ((/* implicit */int) min(((short)-24370), ((short)31))))) + (arr_15 [i_2] [i_2] [i_2] [i_2 + 2] [i_2 - 2] [i_2] [i_3 - 2]))))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                            {
                                var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) (short)-16926)) & (((/* implicit */int) (short)2800)))), ((~(((/* implicit */int) (unsigned short)128))))))) ? (((/* implicit */unsigned long long int) (+(4294967280U)))) : (var_9)));
                                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) -986835687923353505LL))));
                            }
                            for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                            {
                                var_31 |= ((/* implicit */short) max((((((/* implicit */int) (unsigned short)65522)) + (((/* implicit */int) max((var_12), (arr_12 [i_1] [i_3] [i_2] [i_1] [i_0])))))), (((/* implicit */int) var_15))));
                                var_32 += ((/* implicit */unsigned short) ((_Bool) 67108862U));
                            }
                            arr_24 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23542))) > (max((4062510444U), (((/* implicit */unsigned int) var_13)))))))) & ((-(max((((/* implicit */unsigned long long int) (unsigned short)2047)), (9007198986305536ULL)))))));
                            var_33 &= ((/* implicit */short) 3169869235U);
                        }
                    } 
                } 
                var_34 = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    for (unsigned int i_12 = 3; i_12 < 16; i_12 += 4) 
                    {
                        for (signed char i_13 = 1; i_13 < 18; i_13 += 1) 
                        {
                            {
                                var_35 -= ((/* implicit */long long int) arr_29 [i_9]);
                                var_36 |= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_9] [i_10] [i_11] [4LL] [i_10])) <= ((-(1040187403)))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            }
                        } 
                    } 
                } 
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (unsigned char)146))));
            }
        } 
    } 
    var_38 += ((((((/* implicit */_Bool) (unsigned short)65535)) ? (min((var_1), (((/* implicit */unsigned int) var_5)))) : (max((1903288161U), (((/* implicit */unsigned int) (short)21158)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-32755)))))))));
}
