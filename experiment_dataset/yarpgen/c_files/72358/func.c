/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72358
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_11 = ((/* implicit */int) max((((/* implicit */long long int) var_1)), (((long long int) (!(((/* implicit */_Bool) (signed char)127)))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32736))) : (2728643788U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) ((((var_8) / (((/* implicit */int) arr_6 [i_0])))) / (((/* implicit */int) arr_6 [i_0 + 3]))))) : (((-7987238843015512449LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-15699)))))));
                    var_13 = ((/* implicit */short) ((max((((/* implicit */int) var_7)), (arr_3 [i_0]))) % (max((((/* implicit */int) var_1)), (arr_8 [i_0 - 1] [(_Bool)1] [i_2 + 1])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60409)))));
                        arr_13 [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (+((+(var_10)))));
                    }
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (unsigned char)141))));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 3; i_4 < 19; i_4 += 4) 
        {
            var_16 = ((/* implicit */_Bool) (((((-(((/* implicit */int) var_5)))) <= (((/* implicit */int) (signed char)78)))) ? (((((((/* implicit */int) arr_16 [i_0] [i_4])) <= (((/* implicit */int) var_7)))) ? ((-(var_0))) : ((-(((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) (unsigned char)126)) ? (((((/* implicit */_Bool) 4143486412U)) ? (arr_3 [i_0]) : (var_8))) : (var_0)))));
            arr_17 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) var_7)) < (var_0))))))) % (var_3)));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (int i_6 = 3; i_6 < 16; i_6 += 1) 
                {
                    {
                        arr_24 [i_0] [17U] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -929836113)) ? (((-2118516002) % (((/* implicit */int) var_6)))) : (((/* implicit */int) var_4))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))));
                            arr_27 [i_0] [i_0] = ((/* implicit */unsigned short) arr_25 [i_4 + 1] [i_0] [i_4 + 1]);
                        }
                        /* vectorizable */
                        for (signed char i_8 = 1; i_8 < 18; i_8 += 4) 
                        {
                            arr_30 [i_0] [i_4] [i_5] [i_0] [i_6] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_1)) ? (6) : (var_0)))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_5])) <= (((/* implicit */int) arr_9 [i_0 + 2]))));
                            arr_31 [i_0] [i_4] [i_0] [i_6] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)146)) ? (var_0) : (((/* implicit */int) (unsigned short)37706))));
                        }
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((var_5), (arr_23 [i_4] [i_5] [i_9] [i_9]))))))) : (((long long int) arr_3 [i_9])))))));
                            arr_35 [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) (unsigned char)209);
                        }
                        for (unsigned short i_10 = 4; i_10 < 18; i_10 += 4) 
                        {
                            var_20 ^= max((((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)130)) : (var_10))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)57)))))), (((/* implicit */int) ((((((/* implicit */_Bool) 1703837572772707136LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (3511502347U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_10]))))))))));
                            var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_2)) ? (var_8) : (var_2)))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_11 = 2; i_11 < 18; i_11 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_36 [i_4 - 1]))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_38 [i_0 + 3] [i_4] [i_5] [i_6] [i_6] [i_0 + 2]))) ? (((((/* implicit */_Bool) (short)-3660)) ? (var_0) : (var_2))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (var_2))))));
                            arr_40 [i_0] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_14 [i_0] [i_4] [i_4]))) ? (((((/* implicit */_Bool) arr_21 [i_0] [i_4] [(unsigned short)7] [i_6 + 3])) ? (((/* implicit */int) var_9)) : (0))) : (((/* implicit */int) arr_20 [i_0 - 1] [i_0] [i_0 + 1]))));
                            arr_41 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) var_9));
                        }
                    }
                } 
            } 
            arr_42 [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -959311417)) ? (-2LL) : (68719476735LL))))));
        }
    }
    var_24 *= ((/* implicit */short) var_0);
    var_25 = ((/* implicit */unsigned short) (-(((min((var_3), (((/* implicit */long long int) (_Bool)1)))) / (var_3)))));
}
