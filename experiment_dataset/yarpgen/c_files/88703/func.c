/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88703
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
    var_20 = ((/* implicit */signed char) var_7);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_21 = ((/* implicit */signed char) ((arr_0 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_16)) != (((/* implicit */int) (short)-1))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((long long int) (((_Bool)1) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))) == ((-(-4705073219142525095LL))))))));
        arr_7 [(short)1] = ((/* implicit */long long int) arr_3 [i_1] [i_1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            arr_10 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) var_19)))));
            var_23 ^= ((/* implicit */short) (-(((/* implicit */int) (!(arr_4 [i_1]))))));
            var_24 = ((/* implicit */_Bool) ((signed char) (signed char)10));
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
        }
        arr_12 [(short)6] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)20)) ? (1341137230) : (((/* implicit */int) (_Bool)1))))));
    }
    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_25 |= ((/* implicit */signed char) (+(18446744073709551601ULL)));
        arr_15 [i_3] = ((/* implicit */int) var_12);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        var_26 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)5)) << ((((~(((/* implicit */int) var_15)))) - (87)))));
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */signed char) ((arr_19 [i_4] [i_5]) ? (((arr_17 [i_4]) * (((/* implicit */unsigned long long int) -1341137251)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-96)))))));
            arr_22 [i_5] = (signed char)-7;
        }
        for (signed char i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(8442485667702986930ULL)))) ? (((/* implicit */int) ((var_19) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_4 [i_4]))));
            arr_25 [i_6] = ((/* implicit */short) ((long long int) ((unsigned long long int) arr_3 [i_4] [i_4])));
            var_29 = ((/* implicit */signed char) (+(arr_13 [i_4])));
            var_30 = ((/* implicit */signed char) ((((unsigned long long int) (signed char)-9)) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_19))))))));
        }
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_4] [i_4])) ? (((/* implicit */int) arr_3 [i_4] [i_4])) : (((/* implicit */int) var_18))));
        arr_26 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8562954548429137416LL)) ? (-23LL) : (((/* implicit */long long int) -1341137223))))) ? (-4705073219142525090LL) : (((/* implicit */long long int) ((/* implicit */int) ((arr_21 [i_4]) < (var_12))))));
        /* LoopSeq 1 */
        for (int i_7 = 4; i_7 < 8; i_7 += 3) 
        {
            var_32 = arr_3 [i_4] [i_7];
            arr_29 [(signed char)6] = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_7 + 2] [i_7 + 2]))));
            var_33 = ((/* implicit */long long int) (signed char)-7);
        }
    }
    var_34 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_11))))) / (((((/* implicit */_Bool) (short)7)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-9)))))) ? (((((/* implicit */_Bool) 1341137238)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3))) : ((~(var_3))))))));
}
