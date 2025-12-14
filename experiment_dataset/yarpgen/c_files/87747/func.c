/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87747
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (short i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-15)), (var_6)))) & (((/* implicit */int) arr_9 [i_2] [i_1] [i_2])))))));
                var_20 ^= (+(((/* implicit */int) var_11)));
                var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [i_2] [i_0])) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) arr_4 [i_2] [i_1])))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_2]))))));
            }
            for (short i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
            {
                var_22 &= min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) >= (2189269544U)))) > (arr_3 [i_3])))), (arr_5 [i_0] [i_0]));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (signed char)-16)) == (((/* implicit */int) (unsigned short)65535))))) & (((((((/* implicit */int) arr_13 [i_3] [i_0])) % (((/* implicit */int) (_Bool)1)))) % (((((/* implicit */int) (short)32767)) * (((/* implicit */int) (unsigned short)15798)))))))))));
            }
            for (int i_4 = 1; i_4 < 9; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (short i_5 = 4; i_5 < 7; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        {
                            var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_13 [i_1] [(unsigned short)2]), (arr_23 [(short)7] [i_5] [i_4 + 1] [(signed char)8] [i_1])))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_5 + 3] [i_4 + 1] [i_4])), ((unsigned short)5)))))));
                            arr_24 [i_1] = ((/* implicit */unsigned char) max((((arr_20 [i_6] [i_1] [i_1] [i_0]) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-8))))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_1] [i_4 + 1] [1ULL] [i_5 - 1] [i_5 - 1])) <= (((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (signed char)-1))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_7] [i_4 + 1] [i_4 - 1] [i_4] [i_4 + 1])) ? (((/* implicit */int) arr_23 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) arr_23 [i_7] [i_4 + 1] [i_4 - 1] [i_4] [i_4 - 1]))));
                }
            }
            for (short i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) -55343854)) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_8])) : (((/* implicit */int) arr_2 [i_0])))))), (((int) (-(((/* implicit */int) var_5))))))))));
                var_28 -= min((((short) 2105697750U)), (((/* implicit */short) (signed char)-8)));
            }
            arr_31 [i_1] = min((((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)32767)))) ? (var_0) : (arr_20 [i_1] [i_1] [i_1] [i_0]))), (((/* implicit */unsigned int) ((arr_11 [i_1] [i_1]) == (((/* implicit */int) (unsigned char)143))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_0] [i_0]))));
            var_30 = ((/* implicit */signed char) ((_Bool) var_16));
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) arr_34 [i_0] [i_10])) >= (((/* implicit */int) arr_34 [i_0] [i_0])))))));
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(unsigned char)6] [(unsigned char)6] [i_10])))));
        }
        var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(2189269531U))))));
    }
    for (signed char i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
    {
        var_34 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 2199022993408LL)) ? (((/* implicit */int) (short)27964)) : (((/* implicit */int) (unsigned char)128))))));
        var_35 &= ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_5)) - (13168)))));
        /* LoopSeq 4 */
        for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            var_36 *= ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)50))) | (-4181987224877574110LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((6179126006993821499ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (var_7)))))));
            var_37 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_12] [i_12] [i_12] [(unsigned char)0] [(_Bool)1] [i_11]))))) ? ((-(((/* implicit */int) arr_26 [i_11] [(short)5] [4LL] [i_11] [9LL] [i_11])))) : (((((/* implicit */int) arr_26 [i_11] [i_12] [5] [i_11] [i_11] [i_11])) - (((/* implicit */int) arr_26 [i_11] [i_11] [i_11] [6U] [i_12] [i_12]))))));
        }
        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            arr_47 [i_11] [i_11] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_11] [i_13]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 9079256848778919936ULL)))) : ((~(arr_0 [i_11] [i_13])))));
            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_15) : (((/* implicit */int) arr_27 [i_11] [i_11] [i_11] [(signed char)5] [i_13] [i_11]))))) ? (1063600835U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? ((~(((/* implicit */int) (signed char)2)))) : (((((/* implicit */_Bool) arr_5 [(unsigned short)4] [i_13])) ? ((-(((/* implicit */int) (unsigned char)168)))) : (((/* implicit */int) arr_13 [i_13] [i_11]))))));
            var_39 = ((/* implicit */unsigned short) max((((/* implicit */int) ((arr_11 [i_11] [i_13]) > (-1)))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))))));
            var_40 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)19569)) % (((/* implicit */int) (signed char)-64))))) ^ (((((/* implicit */_Bool) 9367487224930631679ULL)) ? (arr_33 [i_11] [i_11] [i_13]) : (var_0)))));
        }
        for (unsigned short i_14 = 0; i_14 < 10; i_14 += 2) 
        {
            var_41 *= ((unsigned long long int) max((((((/* implicit */_Bool) -2199022993408LL)) ? (((/* implicit */int) arr_27 [2ULL] [i_14] [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) (unsigned char)32)))), (((/* implicit */int) ((unsigned short) -2199022993408LL)))));
            arr_51 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
            var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-2854522363670832672LL)))) && ((!(((/* implicit */_Bool) arr_41 [i_11] [i_14]))))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_43 &= min(((((_Bool)1) ? (((/* implicit */int) arr_9 [i_11] [i_15] [i_15])) : (((/* implicit */int) arr_9 [i_15] [i_15] [i_11])))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65527)) && (((/* implicit */_Bool) arr_9 [i_11] [i_15] [i_15]))))));
            var_44 += min((((((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14101))) : (7009462866194629643ULL))) >> (((((((/* implicit */_Bool) 62914560U)) ? (arr_53 [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113))))) - (13941372263372217160ULL))))), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned char)112))))))));
        }
    }
    var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) var_2))));
}
