/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99684
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
    var_12 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
    var_13 ^= ((/* implicit */int) ((unsigned int) min((((/* implicit */unsigned long long int) ((long long int) (short)27865))), (((unsigned long long int) (short)-17455)))));
    var_14 = ((/* implicit */short) var_2);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 11410235174813413033ULL)) ? (11410235174813413034ULL) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_8)))) : (var_3)))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)512))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) (short)31034);
                        arr_11 [3] = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            var_16 ^= ((((/* implicit */_Bool) ((((/* implicit */int) (short)17455)) + (((/* implicit */int) (short)-11929))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17432))) : (min((var_2), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_2 - 1])))));
                            var_17 = ((/* implicit */unsigned long long int) max(((short)-11949), ((short)-32755)));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_18 += ((/* implicit */unsigned short) ((7036508898896138573ULL) >> (((/* implicit */int) arr_14 [i_0] [i_2 + 3] [i_2] [i_5 - 1]))));
                            var_19 ^= ((/* implicit */int) ((arr_5 [i_1] [i_1] [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2] [i_2])))));
                            var_20 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_9 [i_1] [i_2] [(short)14] [i_2])) ? (var_2) : (var_10)))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) 9658584013584616937ULL);
                            var_21 = var_8;
                        }
                        var_22 = ((/* implicit */signed char) 1190888475);
                    }
                } 
            } 
        } 
        arr_17 [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) (short)32763))), (var_3)))));
    }
    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
    {
        arr_20 [i_6] &= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_8 [i_6] [i_6] [i_6] [i_6] [i_6]) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6] [i_6] [i_6] [i_6])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_6] [i_6] [i_6] [i_6])) & (var_3)))) : (min((((/* implicit */unsigned long long int) arr_8 [i_6] [15] [i_6] [15] [i_6])), (var_10)))));
        arr_21 [(unsigned short)12] = ((/* implicit */unsigned long long int) arr_6 [i_6] [i_6] [i_6]);
        arr_22 [(short)11] &= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) var_4)))));
        var_23 -= ((((/* implicit */_Bool) (+((-(951265585U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6] [i_6] [(short)5] [i_6]))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [4ULL]))) + (2371951631U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((var_10), (((/* implicit */unsigned long long int) (short)-24185)))))));
    }
    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
    {
        arr_27 [i_7] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32652))) : (2371951638U)));
        var_24 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((var_4) ? ((-(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) -1190888480)) ? (((/* implicit */int) (short)19004)) : (((/* implicit */int) (short)-11938))))))), (((((/* implicit */_Bool) ((unsigned long long int) arr_12 [16U] [16U] [16U] [9U] [i_7] [16U] [i_7]))) ? (((((/* implicit */_Bool) arr_26 [i_7] [i_7])) ? (var_2) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) arr_5 [i_7] [i_7] [i_7]))))));
        var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((((/* implicit */int) min((var_11), (var_7)))) | (((/* implicit */int) ((((/* implicit */_Bool) (short)-11925)) && (((/* implicit */_Bool) (unsigned short)27195))))))) : ((~(((/* implicit */int) ((var_3) > (((/* implicit */int) var_11)))))))));
    }
    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            for (signed char i_10 = 4; i_10 < 15; i_10 += 1) 
            {
                {
                    var_26 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) arr_0 [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20760))) : (13826105406190450073ULL))), (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_10] [i_9] [i_10]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_10 - 1] [i_10 - 1] [i_10] [i_10])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))))));
                    var_27 += ((/* implicit */int) ((signed char) (short)-20760));
                }
            } 
        } 
        arr_37 [i_8] = ((/* implicit */long long int) min((min((((/* implicit */int) var_9)), (arr_15 [i_8] [i_8] [i_8] [i_8] [(_Bool)1] [i_8] [i_8]))), (((/* implicit */int) min((arr_13 [i_8] [13LL] [i_8] [i_8] [i_8]), (arr_13 [i_8] [i_8] [i_8] [i_8] [(_Bool)1]))))));
    }
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 2371951638U))))))) | (((long long int) var_4))));
}
