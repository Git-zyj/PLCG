/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56612
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 ^= ((((/* implicit */_Bool) 4646967168325398093ULL)) ? ((+(((((/* implicit */_Bool) -1787371555059850412LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))))))) : (max((((/* implicit */unsigned long long int) arr_0 [12ULL] [12ULL])), (0ULL))));
        arr_2 [i_0] [10U] |= ((/* implicit */_Bool) arr_1 [i_0] [2LL]);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_21 ^= ((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [0] [i_1 - 1])) && (((/* implicit */_Bool) 1787371555059850412LL))))) <= (((/* implicit */int) ((_Bool) 186168124580458405ULL))))))));
        var_22 = ((/* implicit */unsigned char) arr_4 [i_1 - 1]);
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) max(((+(2147483647))), (((/* implicit */int) arr_7 [i_1] [i_2] [i_1]))));
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26896))) : (-1787371555059850412LL)))))))) != ((~(3604287119U))))))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_25 &= ((/* implicit */unsigned long long int) (+(var_0)));
                        arr_14 [i_1] [i_2] [i_3] [(unsigned char)9] [i_4] = ((/* implicit */int) max((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) (!(arr_4 [i_1 - 1])))) : (max((var_10), (((/* implicit */int) (_Bool)0))))))), ((+(3457985429U)))));
                        arr_15 [i_2] = ((/* implicit */unsigned int) arr_5 [i_2] [i_3]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                var_26 = max((1513383515778294031ULL), (((((/* implicit */unsigned long long int) arr_13 [i_1 - 1] [i_2] [(unsigned char)8] [i_2])) * (((((/* implicit */_Bool) (unsigned char)114)) ? (var_16) : (((/* implicit */unsigned long long int) var_13)))))));
                arr_18 [(_Bool)1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((arr_9 [i_2] [i_2] [2]) << (((((/* implicit */int) var_5)) - (181)))))))) ? (((/* implicit */int) ((((/* implicit */int) max((var_7), (var_7)))) <= (((/* implicit */int) (short)26902))))) : (((((/* implicit */int) arr_4 [i_1 - 1])) + (((/* implicit */int) arr_4 [i_1 - 1]))))));
                var_27 = ((/* implicit */unsigned char) var_8);
            }
            arr_19 [i_2] [8U] = ((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_1 - 1]);
        }
        var_28 += ((/* implicit */unsigned char) ((_Bool) arr_10 [0ULL]));
        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((-2147483647) / (((/* implicit */int) max((arr_12 [0U] [0U]), (((/* implicit */unsigned short) var_9))))))) <= (((/* implicit */int) arr_5 [2] [2])))))));
    }
    var_30 = ((/* implicit */int) (signed char)9);
    var_31 = ((/* implicit */short) (signed char)127);
}
