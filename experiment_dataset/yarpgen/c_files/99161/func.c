/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99161
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
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned char) (_Bool)1));
        arr_3 [i_0] [i_0 - 2] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (3322070038581923786ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 3])))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 544918549007993571ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15)))))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_8 [i_0 - 3] [i_0 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)122)) ^ (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_3 = 4; i_3 < 16; i_3 += 3) /* same iter space */
                {
                    var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) (signed char)-123)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -633959920)) ? (14011037342466696399ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((int) var_8)) : (((/* implicit */int) arr_0 [i_0]))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_3 - 4] [i_0 - 3]))) ? (arr_14 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                }
                for (short i_4 = 4; i_4 < 16; i_4 += 3) /* same iter space */
                {
                    arr_17 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_4] [i_0] [i_4]))) / (arr_14 [i_0 + 2] [i_0] [i_0 - 1])))));
                    var_21 = ((/* implicit */unsigned char) var_11);
                    var_22 = ((/* implicit */long long int) (~(((/* implicit */int) var_13))));
                    var_23 ^= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (short)29751)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (short)-14068)))));
                }
                arr_18 [i_0] [i_0] [(short)14] [i_1] = ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 3]);
                var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (7236223381169212718ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1]))))) - (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_6 [i_0 - 3])) + (2147483647))) >> (((arr_5 [i_0 - 1]) - (4177454553U))))))));
            }
            /* vectorizable */
            for (signed char i_5 = 1; i_5 < 14; i_5 += 1) 
            {
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) 2801023878377061402ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)69)))))));
                arr_22 [i_5] [i_5] [i_1] = ((/* implicit */_Bool) arr_1 [i_0] [i_1]);
                var_26 = ((/* implicit */_Bool) max((var_26), (arr_16 [i_0 - 1] [i_1] [6U] [i_5])));
                var_27 *= ((/* implicit */short) ((1776736065851356271LL) << (((202683418U) - (202683416U)))));
                arr_23 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) ((short) var_14))) + (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))));
            }
            for (signed char i_6 = 1; i_6 < 14; i_6 += 4) 
            {
                var_28 = ((/* implicit */short) var_7);
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)126)), (1613188015))))));
                arr_28 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) var_17);
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_26 [i_0 + 2] [i_0 - 3] [i_0] [15])) ? (((/* implicit */int) arr_6 [i_6 + 1])) : (((/* implicit */int) (short)14062)))) : (((((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_6] [i_6])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [(signed char)2])))) << (((((((/* implicit */int) arr_1 [i_0] [i_1])) % (((/* implicit */int) arr_0 [i_6])))) - (26276)))))));
            }
            arr_29 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) var_16);
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                var_31 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)246)), ((short)-29751)))) << (((/* implicit */int) ((((/* implicit */int) (signed char)52)) > (-2098938242))))));
                arr_32 [i_0 - 3] [i_0] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2594372560U)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)220))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) (short)29751))))) : (2161727821137838080LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (unsigned short)0)) : (398573466))))));
                arr_33 [4ULL] [i_1] [i_0 - 3] = ((/* implicit */_Bool) ((((/* implicit */long long int) 117440512)) / (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)153))) - (arr_4 [i_0 + 1] [i_0 + 2])))));
                var_32 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_26 [(unsigned short)10] [i_7] [i_1] [i_0 - 2])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)14067))) / (127U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((3336183668U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)31244)))))))))));
            }
            var_33 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_31 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-14068))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3270))) / (arr_20 [i_0 + 1])))));
        }
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            arr_38 [i_0] [i_8] [i_8] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_15 [i_8] [i_8] [i_8] [i_8] [i_8] [i_0])))) + (2147483647))) << (((((((/* implicit */_Bool) 1099478073344LL)) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0 - 3] [i_0 - 1] [i_0 - 2] [i_0])))) - (1)))));
            var_34 = max((var_12), (((/* implicit */unsigned long long int) -480096462)));
            var_35 = ((/* implicit */unsigned int) (unsigned char)117);
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_41 [i_9] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0]);
            var_36 *= arr_24 [i_9] [i_9] [i_0 - 1];
        }
        for (long long int i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            arr_46 [(signed char)15] [i_10] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) < (1860882312627224182LL)));
            var_37 = ((((/* implicit */_Bool) max(((unsigned char)45), (((/* implicit */unsigned char) ((5880290532158447144ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18396))))))))) ? (((/* implicit */int) ((unsigned short) 3615985413U))) : (((/* implicit */int) var_16)));
            arr_47 [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_40 [i_0 + 1])) - (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)23918))))));
            var_38 = ((/* implicit */unsigned int) max((var_38), (min((((/* implicit */unsigned int) (short)31)), (958783628U)))));
        }
    }
    for (int i_11 = 1; i_11 < 21; i_11 += 3) 
    {
        var_39 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 1339994183U)) ? (3210787295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))))));
        var_40 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)0))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_12 = 0; i_12 < 22; i_12 += 2) 
        {
            var_41 = ((/* implicit */unsigned long long int) var_11);
            arr_52 [(unsigned char)4] [i_11] [i_12] = ((/* implicit */int) ((18446744073709551597ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 22; i_13 += 4) 
        {
            arr_55 [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) var_15);
            var_42 = ((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_13])) ? (((/* implicit */unsigned long long int) arr_49 [i_13])) : (arr_53 [i_11 - 1] [i_11 - 1])));
            arr_56 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_50 [i_11 - 1] [i_11])) * (((/* implicit */int) arr_50 [i_11 + 1] [i_11 + 1]))));
        }
        for (signed char i_14 = 0; i_14 < 22; i_14 += 1) /* same iter space */
        {
            var_43 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)383)) || (((/* implicit */_Bool) (short)-31242))))), (((31U) / (26U))))) * (((/* implicit */unsigned int) (~(arr_59 [i_11 - 1] [i_11]))))));
            var_44 = ((/* implicit */unsigned short) max((((((/* implicit */int) ((((/* implicit */int) (unsigned char)57)) > (((/* implicit */int) var_11))))) << ((((~(3615636119711025120LL))) + (3615636119711025123LL))))), (((/* implicit */int) max((((/* implicit */short) arr_50 [i_11] [i_11 - 1])), ((short)-5))))));
        }
        for (signed char i_15 = 0; i_15 < 22; i_15 += 1) /* same iter space */
        {
            var_45 -= ((/* implicit */unsigned int) ((max((arr_61 [i_11 - 1] [i_11 - 1]), (arr_61 [i_11 - 1] [i_15]))) % (min((arr_61 [i_11 + 1] [i_15]), (arr_61 [i_11 + 1] [3U])))));
            var_46 = ((/* implicit */_Bool) 12350750911458905174ULL);
        }
        var_47 -= ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)42771)), (3336183671U)));
    }
    var_48 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1088808548U)) ? ((~(var_9))) : (((/* implicit */int) (signed char)-71))))) ? ((-(1987926709U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
}
