/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65673
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_9))) ? (-13LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-5LL)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) var_13);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            arr_5 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775780LL)) ? (-18LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_6))))) : ((~(var_10))));
            arr_6 [i_0 - 3] [i_1] = ((/* implicit */unsigned long long int) ((int) arr_1 [i_0 - 4] [i_0 + 1]));
            /* LoopSeq 1 */
            for (int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                var_20 = min(((+(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-25484)) ? (((/* implicit */int) min((((/* implicit */short) var_13)), ((short)25469)))) : (((((/* implicit */_Bool) -18LL)) ? (((/* implicit */int) arr_0 [i_2] [(_Bool)1])) : (((/* implicit */int) var_7))))))));
                arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_0 - 3] [i_1] [i_2 + 2] [i_2]))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (var_16))))) | (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */unsigned char) var_1))))))));
            }
            var_21 = ((-13LL) == (max((((((/* implicit */_Bool) (unsigned short)7931)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8138))) : (-1LL))), (arr_7 [i_1]))));
            var_22 = min((((/* implicit */long long int) (short)-30875)), (13LL));
        }
        var_23 += ((/* implicit */signed char) (~(((/* implicit */int) (short)11443))));
        var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned char) var_9)), (min(((unsigned char)210), (((/* implicit */unsigned char) var_1))))));
    }
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) ((((long long int) (short)4490)) <= (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3])))));
        arr_13 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 0LL))) ? (((/* implicit */int) (short)-25483)) : (((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_4 = 1; i_4 < 9; i_4 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                var_25 = ((/* implicit */long long int) arr_8 [i_4] [11LL] [i_5] [i_6]);
                arr_22 [i_4 - 1] [i_5] [i_4 - 1] [i_4] = min((var_2), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_4 - 1] [i_4] [i_4] [i_4 + 1])) || (((/* implicit */_Bool) arr_21 [i_4 + 1] [i_4] [i_4] [i_4 + 1]))))));
            }
            for (unsigned char i_7 = 2; i_7 < 6; i_7 += 4) 
            {
                arr_26 [i_4] [i_5] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) (short)-11422)) : (((/* implicit */int) (_Bool)1))));
                var_26 *= ((/* implicit */signed char) (-((-(((/* implicit */int) arr_15 [i_7]))))));
            }
            arr_27 [i_4] [i_4] [i_4] = max((((long long int) (~(((/* implicit */int) arr_0 [2U] [i_5]))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_4] [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [i_4])))) % (((/* implicit */int) var_1))))));
            var_27 &= ((/* implicit */signed char) ((unsigned long long int) (+(arr_23 [i_5] [i_5] [i_5] [i_4 - 1]))));
            arr_28 [i_4 - 1] [i_4] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) (+(arr_2 [i_4])))) : (((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_4 [2ULL] [2ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4] [i_4 - 1])))))))) ? ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_10 [i_4 + 1])) : (((/* implicit */int) (_Bool)0)))))) : (min((((/* implicit */int) arr_17 [i_4 + 1] [i_5])), (((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */int) arr_16 [i_4] [i_4])) : (((/* implicit */int) arr_15 [i_4])))))));
        }
        for (long long int i_8 = 4; i_8 < 9; i_8 += 4) 
        {
            var_28 += ((/* implicit */_Bool) ((((arr_25 [i_4] [(unsigned char)6]) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (((((/* implicit */_Bool) (short)-25493)) ? (((/* implicit */int) (short)25484)) : (((/* implicit */int) (unsigned char)5)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_17 [i_4] [i_8])), (var_17))))));
            arr_31 [i_4] [i_4] [i_4] = ((/* implicit */short) (!((((+(var_14))) == (max((2090939751U), (((/* implicit */unsigned int) (unsigned char)230))))))));
            arr_32 [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                var_29 = ((/* implicit */unsigned short) ((var_13) ? (((((/* implicit */_Bool) (short)-10654)) ? ((~(((/* implicit */int) (short)-25495)))) : ((-(((/* implicit */int) (short)-11422)))))) : (((/* implicit */int) var_17))));
                arr_37 [i_4] [i_9] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_4 - 1] [i_4 + 1] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))) : (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) min((max((((/* implicit */unsigned short) var_5)), (arr_24 [i_4 - 1] [i_4] [i_4]))), (((/* implicit */unsigned short) (_Bool)0)))))) : ((-(var_10))));
                arr_38 [i_4] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) ((-1600714750869942727LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)146)))))) * (((arr_16 [i_4] [i_4 + 1]) ? (((/* implicit */int) arr_16 [i_4] [i_4 + 1])) : (((/* implicit */int) var_3))))));
                var_30 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2947362648965445721LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (0)))), (max((((/* implicit */unsigned long long int) (short)-20196)), (max((((/* implicit */unsigned long long int) (unsigned char)116)), (18446744073709551615ULL)))))));
            }
            for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                arr_41 [i_4] [i_9] [i_9] [i_4] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)48))) : (var_0));
                /* LoopSeq 3 */
                for (long long int i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    var_31 ^= min(((short)-30601), (((/* implicit */short) (_Bool)1)));
                    arr_44 [i_4] [i_11] [i_11] [i_11] [i_4] [i_4] = ((/* implicit */long long int) var_4);
                }
                for (unsigned char i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    arr_49 [i_4] = ((/* implicit */signed char) max(((-(9223301668110598144LL))), ((((_Bool)1) ? (4823802944220117012LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27771)))))));
                    arr_50 [i_4] [i_11] [i_11] [i_11] = ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)37765))))) % (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_4])) && (((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) (unsigned char)233)) ? (4611686018425290752LL) : (-1LL))))));
                    var_32 = ((/* implicit */short) ((-7524210764173635844LL) | (((/* implicit */long long int) (~(((/* implicit */int) ((arr_47 [i_4 - 1] [(_Bool)1] [i_11] [1LL]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))))));
                }
                for (long long int i_14 = 0; i_14 < 10; i_14 += 1) 
                {
                    var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) arr_34 [2LL] [i_9] [i_11]))));
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)251)) / (((/* implicit */int) (_Bool)1))));
                }
                arr_54 [i_4] [i_4] [i_4] = ((/* implicit */signed char) (!(((var_2) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_12))))))));
            }
            arr_55 [i_4] = ((/* implicit */long long int) max((((/* implicit */int) min((arr_15 [i_4]), (arr_16 [i_4] [i_9])))), (min((-517132712), (((/* implicit */int) ((((/* implicit */_Bool) (short)30601)) && (((/* implicit */_Bool) (unsigned char)12)))))))));
        }
        var_35 = var_8;
        arr_56 [i_4] = ((/* implicit */short) max((arr_4 [i_4 - 1] [i_4 - 1]), (var_8)));
    }
}
