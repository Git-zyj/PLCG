/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75113
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_14 = ((/* implicit */int) min((arr_3 [i_0] [i_0]), (max((arr_3 [i_0] [i_1]), (var_4)))));
            var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-112)), (var_11)))) ? (((/* implicit */int) arr_4 [11] [i_1] [i_1])) : (var_8)));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_2 = 3; i_2 < 24; i_2 += 4) 
            {
                var_16 = arr_7 [i_1] [i_1];
                var_17 = arr_3 [i_0] [i_0];
                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)33)) + (((/* implicit */int) (short)-2827)))))));
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((int) ((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) var_13)) : (var_5)))))));
                var_20 = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]);
            }
            for (short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                var_21 = ((/* implicit */signed char) var_5);
                var_22 = ((/* implicit */signed char) (-((+(((/* implicit */int) (signed char)122))))));
            }
            for (int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                var_23 |= ((short) (signed char)-13);
                var_24 ^= ((/* implicit */short) min((((/* implicit */int) arr_3 [i_4] [i_0])), (var_8)));
                var_25 = ((/* implicit */int) (unsigned char)61);
            }
            var_26 = ((/* implicit */unsigned char) ((short) arr_3 [i_0] [i_0]));
        }
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            var_27 = (-((-(min((var_7), (var_8))))));
            arr_18 [i_0] [i_5] = var_3;
        }
    }
    var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((1109144557), (((/* implicit */int) (short)-6396))))) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (signed char)123)))) / (((((/* implicit */int) var_3)) - (((((/* implicit */int) var_1)) + (((/* implicit */int) (signed char)119))))))));
    var_29 *= ((/* implicit */signed char) min((var_5), (min((((/* implicit */int) max((var_11), (((/* implicit */short) var_1))))), (((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) var_0)) : (var_8)))))));
    var_30 = ((/* implicit */int) max((var_30), (((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (((((/* implicit */int) var_12)) >> (((var_8) + (1818195182)))))))) ? ((-(((/* implicit */int) (signed char)26)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-6407)))))))));
}
