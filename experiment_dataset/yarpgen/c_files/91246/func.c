/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91246
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
    for (short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) ((unsigned long long int) (+(2139410839))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0])) - (((((/* implicit */_Bool) (-(2147483647)))) ? ((+(var_9))) : ((-(((/* implicit */int) arr_0 [i_0]))))))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((+(1867338454844723353ULL))) < (((/* implicit */unsigned long long int) ((var_1) | (var_9))))))), (((unsigned long long int) arr_1 [(_Bool)0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)7680)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)4355))))) : (16579405618864828289ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)4380))) ^ (917471913U)))) ^ (((arr_5 [i_1]) | (((/* implicit */long long int) 12)))))))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_19 += ((/* implicit */short) ((((((/* implicit */_Bool) ((short) 5ULL))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [i_1] [i_2])), (var_5)))) : (((((/* implicit */int) var_13)) << (((((/* implicit */int) var_5)) - (222))))))) ^ (((/* implicit */int) min(((unsigned char)27), (((/* implicit */unsigned char) (_Bool)1)))))));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1] [i_1] [i_1])) << (15U)));
            var_21 = ((/* implicit */long long int) arr_7 [i_1] [i_2] [i_1]);
        }
        for (signed char i_3 = 2; i_3 < 18; i_3 += 1) /* same iter space */
        {
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-1173261090) : (((/* implicit */int) (short)-10950))))) ? ((~(((/* implicit */int) var_8)))) : (-1684205951)))));
            var_22 = ((((/* implicit */int) (unsigned char)217)) ^ (67043328));
        }
        for (signed char i_4 = 2; i_4 < 18; i_4 += 1) /* same iter space */
        {
            arr_14 [(_Bool)1] &= ((/* implicit */unsigned long long int) arr_10 [i_1] [i_4 + 3]);
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_15)) ? (arr_6 [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_4]))))))) && (((/* implicit */_Bool) var_6))));
            var_24 = ((/* implicit */short) (~(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_10 [i_1] [i_4])) : (arr_12 [(_Bool)1]))) | ((~(((/* implicit */int) (unsigned char)143))))))));
            var_25 = var_9;
        }
    }
    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1082522789U))));
}
