/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65999
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
    var_20 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))), (((((/* implicit */_Bool) ((int) var_11))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)255)))))) : (((((/* implicit */_Bool) var_8)) ? (-1LL) : (-19LL)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(var_19)))) + (min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65535))))), (min((18LL), (5151782684214037828LL)))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_1] &= ((/* implicit */unsigned short) ((max((max((((/* implicit */long long int) -1723188401)), (18LL))), (((/* implicit */long long int) ((unsigned short) -25LL))))) / (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) (short)10277)))))));
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_11)) | (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */short) -19LL);
                var_22 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1] [i_0] [i_1]))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))))) : (arr_0 [i_0])))));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (signed char)9))) && (((/* implicit */_Bool) (unsigned short)28160))));
            }
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                var_24 = ((/* implicit */signed char) ((short) ((((/* implicit */int) var_10)) == (((/* implicit */int) arr_4 [i_0] [i_1] [9U])))));
                arr_13 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -25LL)) ? (arr_11 [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)165)))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_3] [i_3] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1] [i_4 + 1] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [i_4 - 1] [i_4] [i_4 - 1]))) : (-1LL)));
                            var_25 ^= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_8))))));
                            var_26 = (+(((-16LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))))));
                        }
                    } 
                } 
            }
        }
        for (long long int i_6 = 2; i_6 < 20; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    {
                        var_27 = ((/* implicit */signed char) (((((-(((var_13) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) var_0)))))) + (2147483647))) >> (((/* implicit */int) ((short) (signed char)9)))));
                        var_28 &= ((/* implicit */short) min(((unsigned char)89), ((unsigned char)129)));
                        arr_30 [i_6] [i_6] [i_7] [i_8] [i_6] [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned short) max((arr_6 [i_8] [(unsigned short)10] [i_6] [i_0]), ((short)-1)))), ((unsigned short)19621))))));
                    }
                } 
            } 
            arr_31 [i_0] = ((/* implicit */unsigned short) arr_18 [i_0] [i_0]);
        }
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            var_29 = ((/* implicit */short) ((((/* implicit */int) var_3)) + (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
            arr_35 [i_0] [i_0] = var_11;
            /* LoopNest 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) arr_26 [i_9] [i_9] [i_9] [i_12]);
                            var_31 += ((/* implicit */unsigned int) var_13);
                            arr_43 [i_12] [i_10] [6ULL] [i_10] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_0] [i_9] [i_10] [i_11] [i_12])) >> (((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])) - (20)))));
                        }
                    } 
                } 
            } 
            arr_44 [i_0] [i_0] [i_9] &= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)89))));
            arr_45 [i_0] = (~(((/* implicit */int) arr_12 [i_0] [i_0])));
        }
    }
    for (long long int i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_14 = 0; i_14 < 18; i_14 += 3) 
        {
            var_32 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_13])) ? (((/* implicit */int) arr_3 [i_13])) : (((/* implicit */int) arr_3 [i_13]))))), (((((/* implicit */_Bool) arr_3 [i_13])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_13])))))));
            arr_50 [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((unsigned short) arr_14 [i_13] [i_13] [(unsigned short)10] [i_14] [i_14] [i_14]))) == (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_28 [i_13] [i_13] [i_13] [10])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) max((((((/* implicit */_Bool) 4037669845533789598ULL)) && (((/* implicit */_Bool) (unsigned short)61932)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_14] [i_14] [i_13] [(unsigned short)20]))) >= (arr_34 [(_Bool)1]))))))));
        }
        var_33 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned char)129)))), ((-(((/* implicit */int) arr_17 [i_13] [i_13] [i_13] [i_13]))))));
    }
    for (long long int i_15 = 0; i_15 < 18; i_15 += 2) /* same iter space */
    {
        var_34 *= ((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned char)110)))), (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)31))))) % (((((/* implicit */int) arr_1 [i_15])) & (var_19)))))));
        var_35 ^= (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_33 [i_15]))))), (((((/* implicit */_Bool) arr_16 [i_15] [i_15] [(unsigned short)6] [i_15] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_15]))) : (arr_0 [i_15])))))));
    }
    var_36 = ((/* implicit */short) var_3);
    var_37 = var_5;
    var_38 = ((/* implicit */unsigned long long int) min((max(((+(-1LL))), (((/* implicit */long long int) max((1905113190), (((/* implicit */int) var_16))))))), (((/* implicit */long long int) (+(((/* implicit */int) max((var_10), (((/* implicit */signed char) (_Bool)1))))))))));
}
