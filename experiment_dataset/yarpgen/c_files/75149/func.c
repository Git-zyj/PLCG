/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75149
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_20 = ((((/* implicit */_Bool) arr_1 [16ULL] [i_0])) ? (20) : (((/* implicit */int) (unsigned char)130)));
        var_21 = ((/* implicit */int) (unsigned char)0);
        var_22 &= ((/* implicit */int) arr_0 [(_Bool)0]);
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)248)) * (((/* implicit */int) arr_0 [(short)15]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0 + 3]))))) : (((unsigned long long int) arr_0 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1 - 1]))));
        arr_4 [i_1] [(_Bool)1] &= min((((((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1])) < (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1])))), (((var_12) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (~(4907897805911264259LL)));
    }
    for (int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        var_25 = ((/* implicit */_Bool) -7);
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_2) == (((/* implicit */long long int) 23)))))));
            arr_11 [15LL] [(_Bool)1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && ((!(((/* implicit */_Bool) 18446744073709551614ULL))))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
        {
            var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775794LL)) ? (var_14) : (((/* implicit */unsigned long long int) arr_13 [i_2] [i_4]))))) ? ((-(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) arr_7 [i_4 + 2] [i_4 - 1])))) < (min((((/* implicit */unsigned long long int) (-(966468286U)))), (var_11)))));
            /* LoopSeq 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_19 [i_2] [i_4] [i_4] [i_2] = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) 1577145681)) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))))), (((/* implicit */unsigned long long int) min((1959508887), (((/* implicit */int) var_17))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_4 + 2] [i_4 - 1])))))));
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_28 ^= 1;
                    var_29 = ((/* implicit */unsigned int) ((11669658862666406178ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        arr_24 [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_2] [i_2])), (((11669658862666406178ULL) / (((/* implicit */unsigned long long int) arr_9 [i_2]))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) (short)1298)))))) : ((~(((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) (short)3)))))))));
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_4] [i_2])) && (((/* implicit */_Bool) 3ULL))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        arr_27 [i_2] [i_4] [i_2] [i_4] [i_2] [i_2] = ((((/* implicit */_Bool) arr_18 [i_6] [i_4 - 1] [13] [i_4])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
                        arr_28 [i_2] [i_4] [i_5] [i_4] [i_6] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1277)) ? (var_16) : (((/* implicit */unsigned long long int) -1959508887))));
                        arr_29 [i_2] [i_2] [i_2] [i_2] [i_4] [(_Bool)1] [i_2] = ((/* implicit */int) 15ULL);
                    }
                    var_31 = (~(((/* implicit */int) ((arr_12 [i_4 + 2] [i_4 - 1]) == (0ULL)))));
                }
                for (long long int i_9 = 2; i_9 < 19; i_9 += 2) 
                {
                    var_32 = min((((min((1373707852), (((/* implicit */int) (unsigned char)17)))) >> (((/* implicit */int) (_Bool)1)))), (((arr_31 [i_2] [i_2] [i_2] [0U] [i_2]) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (var_12)))))));
                    var_33 = ((/* implicit */unsigned long long int) arr_9 [(unsigned char)15]);
                    arr_32 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((-2147483647), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) 253949309)) ? (((/* implicit */int) arr_0 [13ULL])) : (arr_26 [i_2] [i_4] [i_4] [i_9 - 2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */long long int) 82950545)) / (-5421346146617902590LL))) != (((/* implicit */long long int) 1373707852)))))) : (((((/* implicit */_Bool) var_12)) ? (3506291302U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239)))))));
                    var_34 = ((/* implicit */_Bool) ((long long int) (-(arr_13 [i_4 - 1] [i_9 - 2]))));
                }
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                var_35 = arr_17 [i_4 + 1] [i_4 + 1];
                arr_35 [i_4] [i_4] [0] = (+(15620021567837493717ULL));
                arr_36 [i_2] [i_2] [2U] [i_4] = ((/* implicit */_Bool) ((arr_17 [3U] [i_4 + 1]) | (arr_17 [i_4] [i_4 + 1])));
            }
            for (int i_11 = 4; i_11 < 16; i_11 += 2) 
            {
                arr_41 [i_2] [i_4] = ((/* implicit */short) 3070870168163017143LL);
                arr_42 [i_4] [i_4] [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_39 [i_4] [i_4])) - (var_5))))))), ((~((~(arr_18 [i_2] [i_4 + 1] [i_11 - 1] [i_4])))))));
            }
        }
        for (short i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            arr_45 [i_2] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 3973937651943838741LL)), (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 82950545)) != (-4154417540424516149LL))))) : (min((2432728673094975825ULL), (((/* implicit */unsigned long long int) arr_23 [i_2] [i_2] [(_Bool)1] [i_12] [i_12] [i_12])))));
            var_36 = ((((arr_30 [i_2] [i_12] [i_2] [6] [i_12] [i_12]) < (((/* implicit */unsigned long long int) 425932522)))) ? (arr_30 [i_12] [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_30 [i_12] [i_2] [i_2] [(_Bool)1] [i_12] [i_12]) > (arr_30 [i_2] [i_2] [i_12] [i_2] [i_2] [i_2]))))));
            var_37 = ((/* implicit */int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) <= (((((/* implicit */int) arr_0 [i_12])) + (((/* implicit */int) var_18)))))) || (((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_2] [(short)2]))));
        }
        for (int i_13 = 3; i_13 < 18; i_13 += 1) 
        {
            var_38 = ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3973937651943838742LL)))) ? (min((((/* implicit */long long int) arr_13 [14U] [i_13])), (arr_33 [i_2] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1298))) == (5U))))))) - (min((arr_33 [7ULL] [16ULL]), (((/* implicit */long long int) arr_23 [i_13] [i_2] [i_2] [i_2] [19ULL] [i_2])))));
            arr_48 [i_2] [i_13] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_15 [(short)5] [14] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_13]))))))))), (var_10)));
            arr_49 [i_13] = ((/* implicit */_Bool) min((min((min((((/* implicit */unsigned long long int) arr_22 [i_2] [i_2] [i_2] [i_13] [i_2] [i_13] [i_2])), (arr_12 [i_2] [i_13 - 3]))), ((-(arr_18 [i_2] [i_2] [16ULL] [i_13]))))), (2ULL)));
        }
    }
    var_39 = (!(((/* implicit */_Bool) 4294967295U)));
}
