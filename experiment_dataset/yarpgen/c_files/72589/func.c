/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72589
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
    var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_5) : (274877906880LL)))) ? (((/* implicit */int) ((_Bool) var_12))) : (((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */int) var_0)) + (564))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 1577324637U)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (unsigned char)159)))) >= (((/* implicit */int) max((var_0), (((/* implicit */short) var_3))))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((arr_1 [i_0 + 2]) + (arr_1 [i_0 - 1])));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0 - 2]))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((arr_2 [i_0]) < ((~(arr_2 [i_0])))));
        var_19 = ((/* implicit */short) arr_1 [i_0]);
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_1 [i_0]) : (((/* implicit */int) var_15))))))))));
    }
    for (int i_1 = 2; i_1 < 18; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)63))));
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((arr_7 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)112)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13200))) : (min((min((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1]))), (arr_6 [i_1 - 1] [i_1 + 1])))));
        arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (arr_7 [i_1]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -3380634261083812462LL)) ? (arr_7 [i_1]) : (arr_6 [i_1] [i_1])))) ? (((arr_7 [i_1]) & (arr_6 [i_1] [i_1]))) : (arr_6 [i_1] [i_1])))));
    }
    for (long long int i_2 = 1; i_2 < 19; i_2 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_11 [i_2 + 1])))))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (short i_4 = 2; i_4 < 17; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((short) -7142344382155882385LL));
                            arr_24 [i_2] [i_2] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)63))));
                        }
                        var_24 *= ((((/* implicit */_Bool) arr_20 [i_2] [i_3] [i_3] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_2] [i_3] [i_4] [i_2] [i_2])) ? (((/* implicit */int) arr_12 [i_4 + 3])) : (((((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_4] [i_2])) ? (((/* implicit */int) arr_15 [i_3] [i_3])) : (((/* implicit */int) arr_12 [i_2]))))))) : (min((((/* implicit */unsigned long long int) arr_21 [i_2] [i_2] [i_2] [i_2])), (arr_22 [i_2] [i_2 + 2] [i_2 + 2] [i_2] [i_4 + 4]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_10 [i_2] [i_2 + 1]))))));
                            arr_30 [i_2] [i_2] [i_2] [i_2] [i_2] = (~(((arr_16 [i_2] [i_3] [i_3] [i_5]) | (((/* implicit */long long int) ((int) arr_19 [i_7] [i_5] [i_3] [i_2]))))));
                            var_25 = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) (+(18446744073709551613ULL)))))));
                            arr_31 [i_2] [i_3] [i_4] [i_5] [i_7] = ((/* implicit */unsigned int) ((unsigned char) (~(((unsigned int) arr_15 [i_2] [i_5])))));
                            arr_32 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) ((short) (_Bool)1))))));
                        }
                        arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_2])) ? (-3380634261083812462LL) : (((/* implicit */long long int) arr_25 [i_2] [i_3] [i_4] [i_5] [i_5] [i_5]))));
                        var_26 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) max((arr_22 [i_2] [i_2] [i_3] [i_2] [i_5]), (((/* implicit */unsigned long long int) var_6))))) || (((/* implicit */_Bool) arr_15 [i_2] [i_2]))))), ((-(((/* implicit */int) var_7))))));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */long long int) ((signed char) var_8));
}
