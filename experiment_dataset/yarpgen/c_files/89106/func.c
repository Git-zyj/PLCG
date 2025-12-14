/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89106
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
    var_19 = ((/* implicit */unsigned int) -2017735694);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((min((arr_1 [i_1]), (((/* implicit */unsigned long long int) (_Bool)1)))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)25)), (590222979)))))) : (((unsigned long long int) arr_2 [i_0] [i_1 - 1] [i_1 + 1])))))));
                var_21 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)0)) & (2017735702)));
                /* LoopSeq 4 */
                for (signed char i_2 = 2; i_2 < 11; i_2 += 2) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) % (var_15)))) || (((/* implicit */_Bool) -2002760990746880149LL))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_22 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) ((_Bool) var_8)))))) > (4535743977429366889ULL)));
                                arr_13 [3LL] [3LL] [i_1 - 1] [3LL] [3LL] [i_3] = ((/* implicit */signed char) var_16);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)0)), ((~(((/* implicit */int) (unsigned short)0))))))) : (((((/* implicit */unsigned int) max((2147483647), (((/* implicit */int) var_1))))) + ((-(var_12)))))));
                    var_24 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 25ULL)) && (((/* implicit */_Bool) (unsigned short)2717)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4535743977429366893ULL)) ? (1898499250) : (((/* implicit */int) (signed char)20))))) || (((/* implicit */_Bool) var_14))))));
                }
                /* vectorizable */
                for (signed char i_5 = 2; i_5 < 11; i_5 += 2) /* same iter space */
                {
                    var_25 = ((((/* implicit */_Bool) arr_9 [i_5 + 2])) ? (13911000096280184715ULL) : (4535743977429366900ULL));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) ((487570519) != (-1463601125)));
                        arr_20 [i_1] [i_6] = (~(((/* implicit */int) ((arr_2 [i_1] [i_1] [i_1]) >= (65535U)))));
                        arr_21 [i_0] [3LL] [3LL] [i_0] = ((/* implicit */signed char) arr_18 [i_0] [i_1] [i_5 + 3] [i_6]);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            var_27 |= ((/* implicit */long long int) (signed char)12);
                            arr_27 [i_0] [i_0] [i_5] [i_7] [i_8] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((1252703935810057324ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_5] [i_1 - 1] [i_0]))))))) == (((((var_7) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)3)) - (3)))))));
                            var_28 *= ((/* implicit */unsigned char) (+((~(-1)))));
                            arr_28 [(_Bool)1] [i_7] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15360))) : (var_12))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11493)))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            var_29 = 0LL;
                            var_30 = ((/* implicit */unsigned short) ((4294967263U) != (((/* implicit */unsigned int) ((var_6) | (-1898499250))))));
                            var_31 = ((/* implicit */int) var_11);
                        }
                        var_32 = ((/* implicit */unsigned int) var_8);
                    }
                }
                for (signed char i_10 = 2; i_10 < 11; i_10 += 2) /* same iter space */
                {
                    var_33 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-12))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        for (long long int i_12 = 3; i_12 < 11; i_12 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned short) arr_3 [i_1]);
                                arr_40 [i_0] [i_1] [i_11] [i_12 + 1] = ((/* implicit */signed char) (_Bool)1);
                                var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (unsigned short)0))));
                            }
                        } 
                    } 
                    arr_41 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 4; i_13 < 13; i_13 += 2) /* same iter space */
                    {
                        arr_45 [i_0] [i_1] [i_10 - 2] [i_13 + 1] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (signed char)127))))));
                        var_36 = ((/* implicit */signed char) 1898499250);
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) var_12))));
                    }
                    for (unsigned char i_14 = 4; i_14 < 13; i_14 += 2) /* same iter space */
                    {
                        var_38 = ((/* implicit */int) (signed char)-118);
                        var_39 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((var_0), (var_17)))) ? (var_2) : (((/* implicit */unsigned int) max((0), (((/* implicit */int) var_8))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)5689))))) ? (max((var_6), (((/* implicit */int) var_14)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) > (arr_1 [10ULL])))))))));
                    }
                }
                for (signed char i_15 = 2; i_15 < 11; i_15 += 2) /* same iter space */
                {
                    var_40 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1463601124)) ? (-7251809224797720368LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)11)))))) && (((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0] [i_1] [i_0] [i_15]))));
                    arr_51 [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_17);
                    arr_52 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) 378269043U)), (var_13)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16)))))) : (max((((/* implicit */long long int) (signed char)116)), (-5329629334317153272LL))))))));
                }
            }
        } 
    } 
    var_41 = ((/* implicit */signed char) ((int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))), (20ULL))));
}
