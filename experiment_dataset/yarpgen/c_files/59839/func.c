/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59839
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
    var_13 = ((/* implicit */signed char) ((min((2147483647), ((-2147483647 - 1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))));
    var_14 = ((/* implicit */short) var_8);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (~(arr_3 [i_0]))))));
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            var_17 = ((/* implicit */signed char) var_8);
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((arr_4 [i_0] [i_1] [i_1 - 3]) & (arr_4 [i_0] [i_1] [i_1 - 3]))))));
            var_19 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_0])) && (((/* implicit */_Bool) var_6)))) ? (402765256U) : (arr_4 [i_1] [i_1] [i_1 - 1])));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_5 [i_0])))) % (arr_6 [i_0])))));
        }
        arr_7 [i_0] [i_0] = ((/* implicit */short) ((14358331965388683723ULL) <= (((/* implicit */unsigned long long int) 2474522660U))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_3 = 2; i_3 < 12; i_3 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) 2527548573U)))));
            var_22 = ((/* implicit */_Bool) arr_2 [i_3]);
            var_23 = ((/* implicit */unsigned int) (!(arr_10 [i_2] [i_3 + 1] [i_3 + 1])));
            arr_12 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) (+(((3221296338862431925ULL) + (((/* implicit */unsigned long long int) arr_4 [i_3 - 1] [i_2] [(short)17]))))));
            arr_13 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_6 [i_3]))))));
        }
        for (unsigned int i_4 = 2; i_4 < 12; i_4 += 4) /* same iter space */
        {
            arr_17 [i_2] [i_4 - 2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (((+(1130690181U))) != (((/* implicit */unsigned int) 2147483647)))))));
            arr_18 [i_4] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_1 [i_2] [i_2]))))));
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            arr_22 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) (signed char)117)))) ? (arr_11 [12U] [i_2] [12U]) : (arr_4 [i_2] [i_5] [i_2])));
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                for (signed char i_7 = 2; i_7 < 13; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) arr_3 [i_6]))));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_6] [i_5] [i_7 + 1] [i_5] [i_5]))) & (8281149051458464220ULL))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-61)) || ((_Bool)1)));
                            var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_7] [i_7 - 1] [i_7 - 2] [i_7 - 1])) ? (((/* implicit */int) arr_25 [i_8] [i_7 - 2] [i_7 - 2] [i_7 + 1])) : (((/* implicit */int) arr_25 [i_8] [i_8] [i_7 + 1] [i_7 - 2]))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_24 [i_5] [i_2] [i_2]) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_4)))) && (((/* implicit */_Bool) arr_5 [i_2])))))));
        }
        for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            var_29 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((short) arr_11 [i_2] [i_2] [i_2]))) + (2147483647))) >> ((((~(((/* implicit */int) arr_14 [i_2])))) + (122)))));
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (~(arr_4 [16ULL] [i_2] [i_9]))))) ? ((~(arr_6 [i_2]))) : (((/* implicit */unsigned long long int) min((arr_15 [i_2] [i_9]), (var_3))))));
            var_31 += ((/* implicit */unsigned int) (~((+(((/* implicit */int) (signed char)119))))));
        }
        var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) + (min((((unsigned long long int) var_0)), (arr_23 [i_2] [(signed char)13] [i_2])))));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_33 += ((/* implicit */unsigned int) var_12);
        var_34 = ((/* implicit */_Bool) (+(arr_35 [i_10] [i_10])));
    }
    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 1) 
    {
        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */int) var_7)) % ((+(arr_0 [i_11]))))))));
        var_36 = ((/* implicit */_Bool) ((arr_2 [i_11]) * (((/* implicit */unsigned int) ((arr_37 [i_11] [i_11]) % (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_5)))))))));
        var_37 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_11] [(signed char)13] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))) : (10146182367597040291ULL))) != (((/* implicit */unsigned long long int) (~(arr_4 [i_11] [i_11] [i_11]))))));
        var_38 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 21ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_34 [i_11])))) > (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (short)-16997))))))));
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 17; i_12 += 3) 
        {
            for (signed char i_13 = 3; i_13 < 16; i_13 += 4) 
            {
                {
                    var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) arr_0 [i_11])) == (arr_3 [i_11]))))))));
                    arr_44 [i_13] [i_12] [i_11] = ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */_Bool) var_9)) || (var_11))) ? (((/* implicit */unsigned long long int) ((int) (signed char)-109))) : (arr_35 [i_11] [3ULL]))));
                    var_40 = ((/* implicit */unsigned long long int) (((+(arr_4 [i_13 - 2] [i_13 - 1] [i_13 - 1]))) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                }
            } 
        } 
    }
}
