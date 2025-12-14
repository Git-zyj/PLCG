/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99056
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) (((((~(27ULL))) << (((min((((/* implicit */unsigned long long int) var_0)), (18446744073709551600ULL))) - (1421442655ULL))))) << (((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) + (18446744073709551580ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (9223372036854775807LL) : (var_6)))))) - (9223372036854775781ULL)))));
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-18780))))) ? (((/* implicit */unsigned long long int) -389203753)) : (18446744073709551580ULL)));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) 1818256060);
        var_20 -= (!(((/* implicit */_Bool) (signed char)64)));
        arr_10 [i_2] |= ((/* implicit */long long int) 18446744073709551555ULL);
        arr_11 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) 4160344958513107205ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (0ULL))) : (((/* implicit */unsigned long long int) var_1))));
        arr_12 [i_2] = (-((+(-1818256060))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-7172))))) : (((18446744073709551609ULL) / (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) (unsigned char)246)))))))));
        var_22 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -2692917433066050074LL)) != (2305840810190438400ULL)))) + (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551588ULL)) && (((/* implicit */_Bool) -8611718356525167830LL)))))))) <= (((((/* implicit */unsigned long long int) ((((-4191126103539370759LL) + (9223372036854775807LL))) << (((8611718356525167829LL) - (8611718356525167829LL)))))) ^ (13147185082949422941ULL))));
        arr_15 [i_3] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(var_6))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) -2147483647)) : (1171857967785641861LL)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-8611718356525167830LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) + (((((/* implicit */_Bool) (short)24412)) ? (((/* implicit */unsigned long long int) var_15)) : (18446744073709551607ULL))))))));
    }
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                    {
                        var_23 += ((/* implicit */unsigned char) ((((18446744073709551609ULL) | (((/* implicit */unsigned long long int) var_7)))) > (((/* implicit */unsigned long long int) (-(2147483647))))));
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) 18446744073709551608ULL);
                            arr_31 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) (+(18446744073709551605ULL)));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))) - (1808311705U)));
                            arr_32 [i_4] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)192))));
                            var_26 |= ((/* implicit */long long int) ((3ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32750)))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 8; i_9 += 4) 
                        {
                            arr_35 [i_9] [i_4] [i_5] [i_4] [i_4] = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)110))))) ? (((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32748))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)166)))))));
                            var_27 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)245))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)72))))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8ULL)) ? (var_3) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)94)))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)121)) + (var_5))))))));
                            arr_38 [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 9007199254740991LL))));
                            var_30 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-124))));
                            arr_39 [i_10] [i_5] [i_6] [i_6] [i_5] [i_4] &= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-70))) >= (var_1)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 655985725U)))))));
                            var_31 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (18446744073709551612ULL)));
                        }
                    }
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
                    {
                        var_32 *= ((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) var_19)) - (var_4))) & ((-(var_13))))) ^ (((/* implicit */unsigned long long int) min((max((((/* implicit */int) var_12)), (-1580859035))), (((/* implicit */int) max((((/* implicit */short) (signed char)88)), ((short)31741)))))))));
                        arr_42 [i_6] [i_11] |= ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) (signed char)-123)) || (((/* implicit */_Bool) (signed char)-68)))), (((((/* implicit */long long int) 2147483634)) <= (var_10))))) || (((/* implicit */_Bool) -1LL))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)55))))) ? ((+(18446744073709551598ULL))) : (min((3ULL), (((/* implicit */unsigned long long int) (short)-1))))))) ? (((/* implicit */unsigned long long int) ((var_19) + (((/* implicit */long long int) ((/* implicit */int) (signed char)112)))))) : ((-(18446744073709551588ULL)))));
                    }
                    var_34 = (((((+(((/* implicit */int) var_16)))) + (min((((/* implicit */int) var_2)), (var_7))))) <= (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) < (max((var_19), (((/* implicit */long long int) 1859870533))))))));
                    arr_43 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */int) (+((+(min((-658943614628696466LL), (((/* implicit */long long int) var_8))))))));
                    var_35 = min((-3993282472611535292LL), (((/* implicit */long long int) (+((-(-1323590244)))))));
                    arr_44 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)31752))) + (var_9)))) ? (((/* implicit */long long int) (~(2147483635)))) : (min((((/* implicit */long long int) var_8)), (var_18))));
                }
            } 
        } 
    } 
}
