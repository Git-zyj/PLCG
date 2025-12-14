/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83909
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [(unsigned char)4] = ((/* implicit */signed char) arr_1 [i_2 + 2]);
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) ((unsigned char) var_3)))))));
                        var_12 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_5 [i_2] [i_1])))) ? (((int) 886387886287426460ULL)) : (((((/* implicit */int) ((6813992262891317187LL) > (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_2])))))) | (((/* implicit */int) (!(arr_10 [14ULL] [i_0]))))))));
                        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40614))));
                        var_14 ^= ((/* implicit */unsigned char) (_Bool)0);
                        var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [(unsigned short)13]))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_2 - 1] [i_0] [i_4] = ((/* implicit */short) (((!((!(((/* implicit */_Bool) arr_1 [i_0])))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)4))));
                        var_16 = (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4]))))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (arr_14 [i_0] [i_0] [10LL] [10LL] [i_4] [i_1]))))))));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) arr_9 [i_4] [i_4] [i_4] [i_4])), (arr_13 [i_0] [i_1] [i_2] [i_4])))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)65529)) ? (1807938186) : (((/* implicit */int) (unsigned short)12)))))) : (((/* implicit */int) ((signed char) max((arr_3 [(unsigned short)7] [i_0]), (((/* implicit */unsigned int) arr_0 [(short)0]))))))));
                        var_18 = ((/* implicit */short) (+(((((/* implicit */int) arr_12 [i_0])) + (((/* implicit */int) arr_6 [i_2 - 2]))))));
                    }
                    arr_16 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) arr_2 [i_0]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_9))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned short)25948)) ? (((/* implicit */long long int) var_3)) : (-6813992262891317188LL))) : (((/* implicit */long long int) ((int) (unsigned short)41067))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(arr_17 [(unsigned char)19] [i_5])))) | (((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (arr_18 [i_5]) : (((/* implicit */unsigned long long int) arr_17 [i_5] [i_5])))))))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(arr_17 [i_5] [i_5]))))));
        arr_19 [i_5] = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) (_Bool)1)))));
    }
    var_22 += ((/* implicit */_Bool) (-(((((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_0)))) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_6] [i_6 + 1])) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [i_6]))))) ? ((-(((/* implicit */int) (unsigned char)160)))) : (((/* implicit */int) arr_5 [i_6 + 4] [i_6 + 1]))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (-(arr_3 [i_6] [(unsigned char)13])))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_13 [i_6] [i_6] [i_6] [i_6])) & (arr_18 [i_6]))))))) % (((/* implicit */int) arr_10 [i_6] [i_6]))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)141)))))));
        var_26 = ((/* implicit */unsigned short) ((signed char) (unsigned short)7));
        arr_22 [i_6] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) var_9)) % (((/* implicit */int) min(((signed char)93), (arr_6 [i_6])))))));
    }
    for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_7 - 1])) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) arr_2 [i_7 + 3])))))));
        var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) (~(arr_13 [i_7 + 4] [i_7 - 1] [i_7] [14U])))))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_21 [i_7 + 4])))) ? (((/* implicit */int) arr_7 [i_7])) : (((/* implicit */int) arr_2 [(_Bool)1]))));
    }
}
