/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85937
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) max((((/* implicit */long long int) var_7)), (var_1))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned char) ((unsigned short) arr_2 [i_0] [(short)0]));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_1 [i_0] [i_1])))) ? (arr_4 [i_0 - 2]) : (arr_3 [i_0 + 1] [i_0 - 1])));
            arr_7 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) var_7)))));
        }
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                var_14 = ((/* implicit */signed char) (unsigned short)39921);
                var_15 -= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)30948))));
                var_16 = var_2;
            }
            var_17 = ((/* implicit */long long int) arr_3 [i_0] [i_2]);
        }
        var_18 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-10732)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4232396031U)) ? (4232396031U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10753))))))));
        var_19 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
        var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) arr_9 [0LL] [i_0 - 1]))));
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) (short)-10756);
    }
    /* vectorizable */
    for (unsigned short i_4 = 3; i_4 < 20; i_4 += 4) 
    {
        var_21 -= ((/* implicit */unsigned short) (signed char)112);
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned short) (((((_Bool)1) ? (3914523456U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10721))))) & (((/* implicit */unsigned int) ((/* implicit */int) (short)20690)))));
        arr_18 [i_4] = ((unsigned short) (short)10740);
    }
    for (short i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
    {
        var_22 &= ((/* implicit */unsigned char) var_1);
        var_23 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_5]))) < ((+(2088881928U)))));
        var_24 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_6)))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_3 [i_5] [i_5])))) ? (var_4) : (arr_3 [i_5] [i_5])))));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5])) ? (35329977U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_5])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_9 [i_5] [i_5])))) : (((((/* implicit */_Bool) (unsigned char)171)) ? (4259637318U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4232396033U)) && (((/* implicit */_Bool) (signed char)-31))))))))));
    }
    for (short i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)26154))));
        arr_25 [i_6] [i_6] = ((/* implicit */long long int) var_11);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_7 = 4; i_7 < 22; i_7 += 1) 
        {
            arr_29 [i_7] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))));
            arr_30 [i_7] [i_7 - 1] = ((/* implicit */unsigned short) arr_20 [i_6] [i_6]);
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_9 = 4; i_9 < 18; i_9 += 3) 
        {
            var_27 = ((/* implicit */short) arr_8 [8U] [i_9 - 2]);
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4432103921857974795ULL)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) (short)-10755))));
            var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_9] [i_9 - 2] [i_8] [i_9]))));
            var_30 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-93))) < (1160267593U)));
        }
        var_31 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_8] [i_8] [i_8])) ? (((((/* implicit */int) var_2)) | (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_0 [i_8]))));
        var_32 += ((/* implicit */unsigned char) ((short) ((_Bool) -6275470600444694572LL)));
    }
}
