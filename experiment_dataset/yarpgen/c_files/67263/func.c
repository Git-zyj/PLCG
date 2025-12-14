/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67263
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)14388)) + (((/* implicit */int) (signed char)-115)))))) : ((-(((/* implicit */int) var_10))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)1)))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                arr_9 [1LL] [i_0] [1LL] = ((/* implicit */int) (unsigned short)8);
                arr_10 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_0])))) ? (1713922379) : (((/* implicit */int) ((signed char) var_2)))));
                arr_11 [i_0] [i_1] [i_0] [i_0] = ((long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))));
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((arr_1 [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
            }
            var_23 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) var_16))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))));
        }
        for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            arr_14 [10] [i_3] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)8))));
            var_24 ^= ((/* implicit */signed char) ((arr_2 [i_3 - 1] [i_3 + 1]) >= (((int) (_Bool)0))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    {
                        var_25 *= ((/* implicit */unsigned long long int) ((1713922379) / (((/* implicit */int) (unsigned short)18))));
                        var_26 = ((/* implicit */unsigned int) ((arr_2 [i_0] [i_0]) >= (arr_2 [i_0] [i_6])));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65528)))))));
            arr_23 [i_0] [i_4] [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_16 [i_0] [i_4])) == (((/* implicit */int) (unsigned short)21)))));
        }
        var_28 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)25)) ? (1713922370) : (((/* implicit */int) (short)-4120)))) / (-1713922390)));
        arr_24 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-4951805374784936470LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 2; i_7 < 18; i_7 += 2) 
    {
        arr_28 [i_7] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_7])) >> (((((/* implicit */int) arr_7 [i_7 - 2] [i_7 - 1] [i_7 + 1])) - (156)))));
        arr_29 [i_7] = ((/* implicit */_Bool) (((~(arr_13 [i_7]))) | (((((/* implicit */_Bool) var_7)) ? (4294967276U) : (3153577908U)))));
    }
    var_29 = ((/* implicit */_Bool) var_12);
}
