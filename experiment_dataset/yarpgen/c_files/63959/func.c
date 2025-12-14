/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63959
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
    var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(min((((/* implicit */int) var_3)), (var_1)))))) ? (((/* implicit */long long int) max(((+(2063496670))), (max((-1336682072), (((/* implicit */int) (short)0))))))) : (min((((/* implicit */long long int) min((((/* implicit */short) var_3)), ((short)-9)))), ((-(var_11)))))));
    var_15 = ((/* implicit */unsigned int) (-(min((min((1336682069), (var_1))), ((-(var_1)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) (+((~(((/* implicit */int) var_0))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_4 [i_0] [(_Bool)1] [(short)4])) : (((/* implicit */int) var_3))))));
            arr_5 [(short)13] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20)) ? (-1336682082) : (var_1))))));
            /* LoopNest 2 */
            for (long long int i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [6U])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)28))))));
                        arr_11 [i_3] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1] [i_0 + 1])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 3] [i_1] [i_2] [(short)9])))))));
                    }
                } 
            } 
            arr_12 [(short)4] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_2 [i_1] [i_1] [i_1])))) ? ((-(694533821318847793LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))));
        }
        var_19 &= ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_1 [i_0 - 1] [7U]))))));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            arr_15 [i_0] [i_0] = (+((+(((/* implicit */int) var_2)))));
            arr_16 [i_0 - 3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-3))))) ? ((~(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) (short)0)) ? (var_1) : (((/* implicit */int) arr_7 [i_4] [i_4] [(unsigned short)9] [i_0]))))));
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (-(4027859181U)))) ? (((var_2) ? (4242539709U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-38))))) : ((+(arr_14 [(unsigned char)4] [i_4] [i_4])))));
        }
        for (int i_5 = 1; i_5 < 13; i_5 += 4) 
        {
            var_21 |= ((/* implicit */unsigned char) (~((-(((/* implicit */int) (signed char)-32))))));
            arr_19 [0U] [i_5] [i_5] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_17 [i_5 + 2] [1U] [i_5])))) ? ((+(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) var_2))))));
            arr_20 [5] [(short)13] [i_0] = ((/* implicit */int) (~((+(arr_3 [i_5 - 1] [(unsigned short)7] [i_0])))));
        }
        arr_21 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    }
    for (unsigned int i_6 = 1; i_6 < 18; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((short)-1), (((/* implicit */short) var_5)))))))) ? (min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) min((var_13), (((/* implicit */short) var_4))))))) : (max(((-(arr_22 [i_7] [i_6]))), (min((2063496696), (((/* implicit */int) (short)-714))))))));
            arr_27 [5] = ((/* implicit */unsigned char) (+(min((min((((/* implicit */long long int) arr_25 [i_6])), (var_11))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0)))))))));
        }
        var_23 = ((/* implicit */short) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_22 [i_6 - 1] [i_6 - 1]) : (((/* implicit */int) arr_24 [i_6]))))), (min((694533821318847793LL), (((/* implicit */long long int) (short)20173)))))), ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 1336682098)) : (var_11)))))));
        arr_28 [(signed char)17] [(signed char)6] = ((/* implicit */signed char) min((((/* implicit */long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_23 [13] [i_6]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6 + 1]))) : (arr_26 [i_6] [i_6])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-25)) ? (arr_22 [(signed char)1] [i_6 + 1]) : (((/* implicit */int) var_2))))) : (min((var_11), (((/* implicit */long long int) var_5))))))));
    }
}
