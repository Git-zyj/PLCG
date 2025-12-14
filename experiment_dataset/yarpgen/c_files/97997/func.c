/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97997
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
    var_11 += ((/* implicit */unsigned long long int) var_3);
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65526)) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) != (var_8))))) >= ((+(var_10)))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_4 [(_Bool)1] |= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (9223372036854775804LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))));
        var_13 = ((/* implicit */long long int) (unsigned short)9);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) ((unsigned long long int) (!(arr_1 [i_0]))));
            arr_7 [0U] [i_1] [i_1] = ((/* implicit */signed char) 3052383537838308919LL);
            arr_8 [4U] [i_0] [i_1] |= ((/* implicit */signed char) ((((unsigned long long int) min((8090403841794156846LL), (-9223372036854775805LL)))) ^ (((unsigned long long int) max((((/* implicit */unsigned int) arr_2 [i_0])), (381446050U))))));
        }
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (((-(((/* implicit */int) ((short) 11989937216726582915ULL))))) % (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) ((unsigned short) (unsigned short)9))) : (((/* implicit */int) arr_5 [(unsigned short)5] [i_2] [i_2])))))))));
        arr_12 [i_2] = ((/* implicit */unsigned char) arr_3 [i_2]);
        /* LoopSeq 3 */
        for (long long int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_9 [i_3])) << (((/* implicit */int) (_Bool)1))))));
            var_17 = ((/* implicit */unsigned long long int) ((signed char) arr_3 [i_2]));
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
        {
            arr_18 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) ((short) arr_14 [i_2])))));
            var_18 = ((/* implicit */long long int) ((int) (-(arr_0 [i_2] [i_2]))));
            var_19 = ((/* implicit */unsigned char) ((((long long int) (signed char)-8)) <= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2])))));
        }
        for (long long int i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
        {
            var_20 |= ((/* implicit */short) (!(((((arr_10 [i_2] [i_5]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61213))))) < (((/* implicit */long long int) min((0U), (((/* implicit */unsigned int) arr_9 [i_2])))))))));
            arr_23 [i_2] [i_2] [i_2] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 0)))));
        }
        var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_21 [i_2]))) >> (((min((arr_21 [i_2]), (arr_21 [i_2]))) - (3172869738633684127ULL)))));
    }
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        arr_28 [3ULL] [i_6] = (~((+(((/* implicit */int) (signed char)-8)))));
        var_22 = ((/* implicit */long long int) arr_25 [i_6] [i_6]);
        var_23 = ((/* implicit */long long int) arr_24 [i_6]);
        /* LoopSeq 4 */
        for (int i_7 = 1; i_7 < 17; i_7 += 3) 
        {
            arr_32 [i_6] [i_7] |= ((/* implicit */short) ((unsigned long long int) (unsigned short)65508));
            var_24 ^= ((/* implicit */unsigned short) ((unsigned int) arr_24 [i_6]));
        }
        for (int i_8 = 1; i_8 < 18; i_8 += 3) 
        {
            arr_35 [i_6] [i_6] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) (_Bool)1)) >> (max((13ULL), (((/* implicit */unsigned long long int) (unsigned short)8)))))));
            var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_26 [(short)15])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_27 [i_6] [i_8])))))), (((min((var_4), (((/* implicit */unsigned long long int) arr_34 [i_6] [i_8 - 1])))) << ((((~(5136319271531645217ULL))) - (13310424802177906339ULL)))))));
        }
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_30 [i_6])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))) / ((+(((((/* implicit */int) arr_25 [i_6] [i_6])) * (((/* implicit */int) arr_31 [i_6] [i_6] [i_6]))))))));
            arr_39 [i_9] = (+((+(min((var_6), (((/* implicit */int) (unsigned short)34)))))));
        }
        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                arr_46 [i_6] [i_6] [i_11] [i_11] = ((/* implicit */long long int) ((unsigned short) arr_26 [i_6]));
                arr_47 [i_11] [i_11] [i_11] [(unsigned char)9] = ((/* implicit */unsigned long long int) ((int) ((long long int) (unsigned short)65513)));
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) arr_29 [i_6] [i_10] [i_11]))));
            }
            var_28 = ((/* implicit */unsigned short) min((var_28), (var_5)));
            arr_48 [i_6] [(short)1] [i_6] = ((/* implicit */signed char) ((unsigned long long int) (short)-21230));
        }
        var_29 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))), (max((((/* implicit */unsigned long long int) (short)19917)), (var_7))));
    }
    for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
    {
        var_30 ^= ((/* implicit */signed char) (+(((((((/* implicit */_Bool) 2227859178U)) ? (9223372036854775805LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16))))) / (((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (arr_49 [i_12]))))))));
        arr_51 [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)20)))))));
    }
    var_31 = ((/* implicit */unsigned int) 18427301455259576059ULL);
}
