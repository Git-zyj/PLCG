/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75001
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
    var_20 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-14549))) != (((unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) 4026531840U)), (max((((/* implicit */long long int) 4071331615U)), (9223372036854775807LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (-7419470757958622344LL) : (((/* implicit */long long int) arr_0 [i_0]))))))))));
        arr_4 [i_0] = var_2;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (330063714U)));
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) (short)-1);
        arr_10 [10U] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (signed char)126)) : (arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) ((unsigned int) (unsigned short)39974));
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (+((+(arr_5 [0LL] [0LL]))))))));
            arr_15 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) -1393686502)), (var_3)));
            arr_16 [i_3] [i_3] = ((/* implicit */long long int) (~(((var_15) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2]))) : (var_7)))));
        }
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
        {
            arr_19 [3U] [i_4] [(signed char)6] = ((/* implicit */unsigned int) arr_1 [i_2]);
            arr_20 [i_2] [i_4] &= ((/* implicit */unsigned short) min((((/* implicit */int) var_15)), (min((((/* implicit */int) arr_13 [i_4])), ((+(((/* implicit */int) (short)-32755))))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [4] [i_4] [5U] [i_6])) ? (min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)52127))))), (((((/* implicit */_Bool) var_0)) ? (2762473392U) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_7]))))))));
                            arr_30 [i_4] [i_5] [i_5] = arr_12 [i_6];
                        }
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            arr_34 [i_5] = ((/* implicit */signed char) arr_17 [i_8] [i_8]);
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 192764688U)) ? (arr_18 [i_2] [i_4]) : (arr_18 [i_8] [i_6])))) ? (((/* implicit */unsigned int) max((arr_18 [i_5] [i_8]), (arr_18 [i_2] [i_2])))) : (((((/* implicit */_Bool) -1014979686)) ? (3496852018U) : (((/* implicit */unsigned int) -2069738482))))));
                        }
                        arr_35 [i_2] [i_4] [i_4] [i_6] |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_6] [i_4] [i_4] [i_2])) ? (arr_31 [i_6] [i_5] [i_4] [i_2] [i_2]) : (((/* implicit */unsigned int) arr_21 [i_2] [i_4] [i_5] [i_4]))))) : (((7897808646894502527LL) & (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_2] [(_Bool)1] [i_5] [i_6]))))))), (((/* implicit */long long int) ((int) 507553992U)))));
                        arr_36 [i_5] [i_5] [9] [i_5] [(signed char)4] = ((/* implicit */signed char) (-((((!((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (arr_25 [i_6] [i_6] [i_2] [i_6])))));
                    }
                } 
            } 
            var_26 ^= ((/* implicit */signed char) (+(max((arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_4]), (((/* implicit */int) arr_14 [i_2] [i_4]))))));
            var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_12))))) : (max((((/* implicit */long long int) arr_5 [i_2] [i_2])), (var_11)))));
        }
        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
        {
            arr_39 [(signed char)5] [0] [i_2] = ((/* implicit */signed char) ((var_15) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(var_15))))) ^ (min((2367712809U), (((/* implicit */unsigned int) arr_21 [i_2] [i_2] [i_2] [i_2])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2])))));
            var_28 = ((/* implicit */int) (_Bool)1);
            var_29 = min(((_Bool)0), (((((/* implicit */int) arr_1 [i_2])) >= (((/* implicit */int) var_0)))));
            var_30 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((min(((unsigned short)312), (((/* implicit */unsigned short) (_Bool)1)))), ((unsigned short)38259)))) ? ((~(((long long int) arr_17 [i_2] [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) -249578709))) < ((+(((/* implicit */int) (short)-3))))))))));
            var_31 = ((/* implicit */long long int) max((2432225514U), (((/* implicit */unsigned int) min(((unsigned short)65531), (((/* implicit */unsigned short) (signed char)-6)))))));
        }
        var_32 *= ((/* implicit */unsigned short) arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) var_16))));
        arr_40 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (1348547329U) : (((/* implicit */unsigned int) -535369644)))))));
    }
    var_34 = ((/* implicit */unsigned int) ((var_14) < (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    var_35 = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */long long int) (signed char)117)), (var_1))));
}
