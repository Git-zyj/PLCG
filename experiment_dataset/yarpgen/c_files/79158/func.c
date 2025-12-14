/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79158
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
    var_14 = 1766356890;
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_15 *= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) -1201215850)))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_16 &= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */long long int) var_11)), (arr_3 [i_0] [i_0] [i_2]))) : (((/* implicit */long long int) 1201215860)))));
                    var_17 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((unsigned short) var_12))) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) ((((/* implicit */long long int) max((arr_0 [i_0]), (1201215861)))) >= (((long long int) arr_2 [i_0])))))));
                    var_18 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) min((-1955441310), (1201215860)))))));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) -1739594316933546374LL))));
        var_20 = ((/* implicit */unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) ((var_5) == (var_6))))) | (((long long int) (-2147483647 - 1))))) + (9223372036854775807LL))) >> (((max((1201215860), (-394891023))) - (1201215823)))));
        arr_8 [i_3] [i_3] = ((/* implicit */int) arr_6 [i_3] [i_3]);
        var_21 &= ((/* implicit */int) var_0);
    }
    for (int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)51994)))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4])) ? (arr_10 [i_4]) : (arr_10 [i_4])))) ? (-1931043954) : (max((-236792829), (((/* implicit */int) (unsigned short)41416))))));
        var_24 &= (~(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_4] [i_4])) && (((/* implicit */_Bool) arr_9 [i_4] [i_4]))))));
        var_25 |= ((((int) arr_10 [i_4])) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1118071545)) ? (7583271223694129566LL) : (var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4] [17]))))) : (arr_10 [i_4]))));
    }
    for (int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */long long int) arr_11 [i_5] [i_5]);
        arr_13 [i_5] = max((((/* implicit */int) ((((int) arr_12 [i_5] [i_5])) < (((int) (unsigned short)19548))))), (130168231));
        arr_14 [i_5] = ((/* implicit */int) ((((/* implicit */long long int) ((336722695) / (((/* implicit */int) ((((/* implicit */int) var_13)) < (483227095))))))) & (((long long int) arr_12 [i_5] [i_5]))));
    }
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((int) 1330949913)) + (321813275)))) == (((long long int) var_13))));
    var_28 = ((/* implicit */long long int) -175094294);
}
