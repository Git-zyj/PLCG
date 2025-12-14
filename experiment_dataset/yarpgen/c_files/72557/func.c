/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72557
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)15351);
        var_10 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_5))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)56603)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)-8)))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)56603)) && (((/* implicit */_Bool) (unsigned short)544))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_7))))));
        var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_5 [i_1])), (((((/* implicit */_Bool) (unsigned short)8932)) ? (((/* implicit */int) (unsigned short)39839)) : (((/* implicit */int) (unsigned short)52406))))));
        var_13 = ((/* implicit */signed char) (unsigned short)39826);
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)24576)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max(((unsigned short)1023), (((/* implicit */unsigned short) (signed char)-70)))))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 3; i_2 < 9; i_2 += 3) 
        {
            arr_10 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_2 - 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)65525))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)38421)) : (((/* implicit */int) (unsigned short)56622)))) : ((-(((/* implicit */int) var_0)))))))));
            var_15 = ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)48)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_2])) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) max(((unsigned short)8), ((unsigned short)32601)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30613)))))))));
        }
        for (signed char i_3 = 1; i_3 < 8; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 2; i_4 < 11; i_4 += 4) 
            {
                arr_18 [i_3] [i_3] = ((/* implicit */unsigned short) max((min((((/* implicit */int) min((arr_17 [i_3] [i_1] [i_3] [i_4]), (var_7)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) (unsigned short)21816)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) arr_9 [i_3] [i_3] [i_4 + 1])) : (((/* implicit */int) arr_15 [i_1] [i_3] [i_3 + 2] [i_4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_1] [i_3 - 1] [i_4 - 2]))))) : ((~(((/* implicit */int) (unsigned short)15360))))))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) min(((unsigned short)49087), (((/* implicit */unsigned short) (signed char)30))))), (((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) var_1)) - (97)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-30)), (arr_7 [i_3 + 1] [i_4 - 1])))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) arr_1 [i_3] [i_3])))))) : (((((((/* implicit */int) var_6)) - (((/* implicit */int) (signed char)24)))) - (((((/* implicit */_Bool) (unsigned short)65502)) ? (((/* implicit */int) (unsigned short)38398)) : (((/* implicit */int) (signed char)96))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_5 = 3; i_5 < 9; i_5 += 1) 
                {
                    var_17 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)38421)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_1] [i_3])) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-73))))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_1] [i_3] [i_3] [i_5 - 1])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_17 [i_3] [i_4 - 1] [i_3 - 1] [i_3])))) : (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (unsigned short)8191)) : (((/* implicit */int) (signed char)84))))));
                }
            }
            var_19 = min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 + 4]))))), (min((arr_7 [i_3 + 3] [i_3 + 3]), (arr_7 [i_3] [i_3 + 3]))));
        }
    }
    var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-40))));
}
