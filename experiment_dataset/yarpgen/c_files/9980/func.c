/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9980
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
    var_20 = ((/* implicit */_Bool) (signed char)-1);
    var_21 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) ((_Bool) (_Bool)1)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_16)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (var_17)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_3))));
        var_23 = ((((/* implicit */unsigned long long int) var_2)) - (arr_1 [i_0]));
        arr_2 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (2347229572890228718ULL) : (2347229572890228730ULL));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)19509);
        var_24 += ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (signed char)7))) & (((/* implicit */int) ((signed char) -2893857392529226105LL)))));
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (signed char)-22))));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) arr_1 [i_1]));
    }
    for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        var_26 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_2)), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))), (arr_9 [i_2 + 4])))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_2 + 2] [i_2 + 4] [i_2 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (max((arr_1 [2]), (arr_1 [8ULL]))) : (((/* implicit */unsigned long long int) max((((int) (signed char)68)), (((/* implicit */int) (short)3584)))))));
            arr_13 [i_2] [(unsigned char)16] [i_2] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 1303675402840393679LL)) ? (9223372036854775808ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3584))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                var_27 = arr_1 [i_4];
                /* LoopNest 2 */
                for (unsigned char i_5 = 2; i_5 < 17; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        {
                            arr_22 [i_2 + 1] [i_2 + 1] [i_5] [i_2 + 1] [18ULL] [(_Bool)1] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) 18389055546637837996ULL)) ? (3850766325U) : (((/* implicit */unsigned int) -2089606568))));
                            var_28 = ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [17] [17] [i_5] [0U])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_7 = 2; i_7 < 16; i_7 += 3) 
                {
                    for (int i_8 = 2; i_8 < 15; i_8 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) var_15))));
                            var_30 -= ((/* implicit */int) (unsigned short)17702);
                            arr_29 [i_8 - 1] [i_8] = ((/* implicit */unsigned char) (~(2089606567)));
                            arr_30 [4] [(_Bool)1] [14LL] [4] [i_8] = ((/* implicit */unsigned char) var_16);
                            arr_31 [i_2] [i_2] [i_2] [i_2 - 1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14568)) && (((/* implicit */_Bool) (signed char)-68))));
                        }
                    } 
                } 
                arr_32 [15ULL] [15ULL] [i_4] [16] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -751661836)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (signed char)6)))) * (((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4] [i_4] [(unsigned char)16]))));
            }
            for (unsigned int i_9 = 1; i_9 < 15; i_9 += 2) 
            {
                arr_37 [i_2 + 1] = (~(((/* implicit */int) ((unsigned short) (short)8191))));
                var_31 -= ((/* implicit */short) arr_16 [2ULL] [i_3] [(unsigned char)0] [i_2 + 2]);
            }
            var_32 = ((/* implicit */signed char) min((max((-1303675402840393679LL), (((/* implicit */long long int) (unsigned short)50968)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_33 [i_2 + 2] [16] [i_2 + 3])))))));
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_11 = 1; i_11 < 17; i_11 += 4) 
            {
                arr_42 [i_2 + 2] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) -808099707)) ? (((long long int) var_2)) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-4)))))));
                var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14564))) % (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) : (9223372036854775808ULL)))));
                arr_43 [i_10] [i_11] = ((((/* implicit */_Bool) (signed char)-82)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 16366502228919749382ULL)) ? (((/* implicit */int) (signed char)-6)) : (1095998899)))));
            }
            arr_44 [i_10] [i_2 - 1] = (((!(((/* implicit */_Bool) var_19)))) ? (((((/* implicit */_Bool) 273804165120ULL)) ? (144115170895986688ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (arr_39 [i_2 + 1]));
            var_34 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)31081)) || (((/* implicit */_Bool) 9223372036854775802ULL))));
        }
        for (unsigned short i_12 = 0; i_12 < 19; i_12 += 2) /* same iter space */
        {
            var_35 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_35 [i_2 - 1])) ? (((/* implicit */unsigned long long int) arr_35 [i_12])) : (15806479466402218493ULL))), (((/* implicit */unsigned long long int) arr_35 [i_12]))));
            var_36 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (8935141660703064064LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
        }
        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 2) /* same iter space */
        {
            var_37 -= ((/* implicit */signed char) var_0);
            var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_1)))) ? (min((((/* implicit */unsigned long long int) var_19)), (arr_1 [i_13]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16599)) ? (var_0) : (((/* implicit */long long int) arr_33 [1LL] [i_2 - 1] [i_2 + 2]))))));
            var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((var_11) + (2147483647))) >> (((var_15) - (850104342)))))), ((+(24ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((1303675402840393684LL) >> (((((/* implicit */int) (short)-3584)) + (3638)))))) && (((/* implicit */_Bool) min((((/* implicit */int) var_4)), (var_9)))))))))))));
            arr_52 [i_2 + 1] [i_13] [i_13] &= ((/* implicit */unsigned short) max((var_7), (((/* implicit */unsigned long long int) ((int) arr_8 [i_2 + 1])))));
        }
        for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) 
        {
            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_54 [i_14])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_54 [i_14])) : (((/* implicit */int) arr_54 [i_14])))) : (((((/* implicit */_Bool) arr_54 [i_14])) ? (((/* implicit */int) arr_54 [i_14])) : (((/* implicit */int) (unsigned char)91))))));
            var_41 ^= ((/* implicit */_Bool) (unsigned char)252);
            var_42 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (short)-19243)), (9223372036854775808ULL))), (((/* implicit */unsigned long long int) (short)18665))))) ? (min((((/* implicit */int) min((((/* implicit */short) (signed char)-64)), ((short)22286)))), (var_11))) : (((/* implicit */int) (unsigned char)19))));
            var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)3561)) >> (((/* implicit */int) ((((/* implicit */int) (short)3584)) < (((/* implicit */int) var_3)))))))), (524280U))))));
        }
    }
}
