/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81955
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_3))) ? (((((((/* implicit */_Bool) (unsigned char)102)) && (((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) (unsigned char)240)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)48))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_8)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */_Bool) arr_3 [(unsigned char)8]);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_0] [i_3]))))))));
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */int) (unsigned short)65525);
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                            {
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)19864)) - (-328817058))))));
                                var_21 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_3] [11LL] [(short)15] [i_0])) != (((/* implicit */int) arr_12 [i_0] [(unsigned short)2] [i_3] [(short)4]))))) <= (((/* implicit */int) (unsigned short)11))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) 16368U))))) ? (((/* implicit */int) ((short) arr_15 [i_0] [i_0] [i_0] [i_0]))) : (((974424903) - (((/* implicit */int) (unsigned char)255)))))) <= (((/* implicit */int) arr_4 [i_3]))));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (_Bool)1))));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_12))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_17 [i_5] [i_0] [(unsigned char)17] [i_0] [i_0])) : (((arr_15 [i_0] [i_0] [i_2] [i_2]) & (((/* implicit */int) (unsigned char)251))))));
                            }
                            /* vectorizable */
                            for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                            {
                                arr_23 [i_0] [14] [i_0] = ((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0]);
                                arr_24 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((short) var_5));
                                arr_25 [i_0] [i_0] [i_0] [i_3] [i_0] [i_6] &= ((/* implicit */int) ((17) > (arr_22 [i_0] [i_0] [i_0] [(_Bool)1] [i_3] [i_6] [i_6])));
                            }
                        }
                    } 
                } 
                arr_26 [i_0] = ((/* implicit */_Bool) ((unsigned char) 3110210572889971098LL));
                var_25 -= ((/* implicit */_Bool) max(((short)32767), (((/* implicit */short) (unsigned char)16))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) < (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)102))) : (-3589525953072401415LL)))))) + (((((/* implicit */int) ((signed char) (short)-19963))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22467))) <= (var_6))))))));
    /* LoopSeq 3 */
    for (long long int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 4; i_8 < 15; i_8 += 3) 
        {
            for (unsigned int i_9 = 3; i_9 < 14; i_9 += 2) 
            {
                {
                    var_27 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4462))) + (((min((((/* implicit */long long int) (unsigned short)65519)), (3110210572889971098LL))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5))))))));
                    var_28 = ((/* implicit */unsigned int) 0LL);
                }
            } 
        } 
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((max((arr_10 [i_7] [i_7] [i_7] [i_7]), (((/* implicit */long long int) -974424899)))) != (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_4 [i_7])), ((short)26)))))))), (((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)240)), ((short)4095)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (max((((/* implicit */unsigned int) (unsigned char)186)), (3505553809U))))))))));
        arr_33 [i_7] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7] [i_7] [i_7])) && (((/* implicit */_Bool) (unsigned short)65535))))) : (arr_8 [i_7] [i_7] [i_7])))) <= (((((/* implicit */_Bool) arr_28 [i_7])) ? (arr_29 [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)44)))))));
        var_30 -= ((long long int) ((signed char) arr_28 [i_7]));
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) min((((/* implicit */int) max((arr_28 [i_7]), (arr_28 [i_7])))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)32768))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1)))))))))));
    }
    for (long long int i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((short) 4LL)))));
        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((67108608) >> (((3110210572889971100LL) - (3110210572889971089LL))))) >= ((~(((/* implicit */int) var_2)))))))) % (max((max((var_1), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) (unsigned short)65535)))))))));
        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) 1413662895))));
        /* LoopSeq 2 */
        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            arr_40 [i_10] [i_11] [i_10] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (unsigned short)4304)) / (max((((/* implicit */int) arr_1 [i_11])), (var_11))))));
            arr_41 [i_10] = ((/* implicit */short) ((((long long int) ((int) var_13))) >> (((/* implicit */int) (short)1))));
        }
        /* vectorizable */
        for (unsigned short i_12 = 0; i_12 < 16; i_12 += 3) 
        {
            var_35 ^= ((/* implicit */_Bool) ((unsigned short) arr_9 [i_10]));
            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 3505553818U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (974345760U))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        }
        arr_44 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_35 [i_10]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (arr_8 [i_10] [i_10] [i_10]))) : (((((/* implicit */int) (short)-32758)) * (((/* implicit */int) (unsigned char)96))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_10] [i_10] [8LL])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 10U)) ? (3505553814U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17284))))))))) : (arr_8 [i_10] [i_10] [i_10])));
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 3) 
    {
        var_37 = ((/* implicit */unsigned short) (~(-6495773662240065976LL)));
        arr_49 [i_13] = ((/* implicit */int) ((_Bool) arr_42 [i_13] [i_13] [i_13]));
    }
}
