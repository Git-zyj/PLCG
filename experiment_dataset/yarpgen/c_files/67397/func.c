/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67397
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (short)-9319)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)32736))))) : ((~(var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((15433503293811340504ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59539)))))) ? ((+(((/* implicit */int) (unsigned short)5997)))) : (((/* implicit */int) (short)9319)))))));
                var_16 = ((/* implicit */short) (~((~(arr_1 [i_1])))));
                arr_5 [i_1] [14LL] [i_1] = ((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0 - 2]))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_17 += ((/* implicit */short) ((((((/* implicit */_Bool) ((short) (unsigned char)32))) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)-9319))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9319)) ? (((/* implicit */int) (unsigned short)5997)) : (((/* implicit */int) (unsigned short)0)))))))) : (((/* implicit */int) ((short) ((((-4809929576793075878LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)255)) - (223)))))))));
                            arr_12 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((short) (-(3013240779898211111ULL))));
                            var_18 = ((/* implicit */int) min((((/* implicit */long long int) (+(((/* implicit */int) (short)-1))))), (((((/* implicit */_Bool) 13133109525850207973ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_3 [i_0] [i_0 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        arr_16 [i_4] = min((((/* implicit */int) ((unsigned char) arr_7 [i_4] [i_4]))), ((+(((/* implicit */int) arr_7 [i_4] [i_4])))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((signed char) min((((/* implicit */int) arr_0 [i_4])), ((~(((/* implicit */int) (unsigned char)101))))))))));
        var_20 &= ((/* implicit */int) ((min(((~(3013240779898211112ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)175))))))) & (((unsigned long long int) ((((/* implicit */int) (short)7)) >> (((arr_1 [i_4]) - (6021678507339668683LL))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)3623)) | (arr_14 [i_5] [i_5])));
        arr_20 [i_5] [i_5] = (~(((7431720547528887165ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9318))))));
        arr_21 [i_5] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [10ULL] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (-3364661353365667776LL))) % (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5] [i_5])))));
    }
    /* vectorizable */
    for (short i_6 = 2; i_6 < 10; i_6 += 1) 
    {
        arr_25 [(short)10] [i_6 + 1] &= ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned short)0))))));
        arr_26 [i_6] = ((/* implicit */long long int) ((unsigned int) (unsigned char)71));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        arr_29 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_7])) ? ((-(((/* implicit */int) arr_27 [i_7] [i_7])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 15419586763041227378ULL)))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)19663)) : (((/* implicit */int) arr_27 [i_7] [i_7]))))) ? (((((/* implicit */int) (unsigned char)236)) * (((/* implicit */int) (unsigned char)136)))) : (((/* implicit */int) (unsigned char)156))));
        var_23 = ((/* implicit */signed char) arr_27 [i_7] [i_7]);
        /* LoopSeq 3 */
        for (unsigned short i_8 = 2; i_8 < 23; i_8 += 4) 
        {
            var_24 -= ((/* implicit */unsigned char) (unsigned short)14714);
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)181))))))))));
        }
        for (short i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            var_26 = ((/* implicit */signed char) ((short) arr_32 [i_7]));
            arr_35 [i_7] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-7641)) ? (((/* implicit */int) (unsigned short)59539)) : (((/* implicit */int) arr_27 [i_7] [i_9]))));
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_9])) ? (11015023526180664450ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [(short)10] [i_9])))));
        }
        for (signed char i_10 = 3; i_10 < 22; i_10 += 2) 
        {
            arr_40 [i_7] [i_10 + 1] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) 7431720547528887165ULL)))));
            var_28 ^= ((/* implicit */unsigned char) ((short) (short)-7638));
            var_29 -= ((/* implicit */short) (~(((/* implicit */int) arr_37 [i_10 + 3] [i_10 + 1]))));
            var_30 = ((/* implicit */short) ((signed char) 2550359718U));
        }
    }
}
