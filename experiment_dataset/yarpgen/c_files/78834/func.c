/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78834
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
    var_19 |= ((((/* implicit */unsigned long long int) (+((+(var_16)))))) * (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_0)), (var_12)))), (((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((_Bool) ((_Bool) var_17)));
        var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) max((((var_2) - (((/* implicit */int) var_7)))), (((/* implicit */int) var_6))))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) var_18))))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) min(((unsigned short)20383), (((/* implicit */unsigned short) var_0))))), (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
        var_22 = ((/* implicit */_Bool) var_18);
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            arr_11 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_18))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20411)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)45127))))) ? (((/* implicit */int) max((var_14), (var_14)))) : (((/* implicit */int) ((signed char) var_14))))) : (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */int) var_1))))));
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */long long int) var_2))))) : (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_6))))))))));
            arr_12 [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_16))))));
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                arr_15 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_18)) >= ((~(((/* implicit */int) var_14)))))))) == (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) - (((unsigned long long int) (short)13))))));
                arr_16 [i_1] [i_1] [12] &= ((/* implicit */long long int) (+(((/* implicit */int) max((min(((unsigned short)45157), (var_18))), ((unsigned short)20388))))));
            }
            /* vectorizable */
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                arr_19 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45116)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (_Bool)1))));
                arr_20 [i_1] = ((/* implicit */unsigned int) var_10);
            }
            for (unsigned short i_5 = 3; i_5 < 22; i_5 += 4) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_6 = 1; i_6 < 22; i_6 += 4) 
                {
                    arr_26 [i_1] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) (unsigned short)45142)))));
                    var_25 -= ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (var_2));
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) var_1)))) <= (((/* implicit */int) var_7))));
                        arr_29 [i_1] [i_2] [i_2] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) (unsigned char)234)) ? (var_3) : (((/* implicit */int) var_17)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_13))))));
                    }
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) var_0)))))));
                    arr_30 [(unsigned char)16] [i_2] [i_2] &= ((/* implicit */_Bool) ((long long int) ((unsigned char) (unsigned short)20426)));
                }
                /* vectorizable */
                for (unsigned char i_8 = 3; i_8 < 20; i_8 += 4) 
                {
                    arr_33 [i_1] [i_1] [i_1] [i_1] [22U] [i_1] |= ((/* implicit */short) ((unsigned short) var_15));
                    arr_34 [i_1] [i_5] [i_5] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_1))));
                    var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (950290066) : (((/* implicit */int) (unsigned char)92)))))));
                    var_29 -= ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_5)) != (var_15))))) : (((unsigned int) var_15))));
                }
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_8))) : (((unsigned long long int) var_16))));
            }
            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (var_9))))) % ((+(((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))))));
        }
        arr_35 [(_Bool)1] |= ((/* implicit */unsigned int) (-(((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) != (var_4)))) % (((((/* implicit */_Bool) (unsigned short)45126)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
    {
        var_32 += ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_16))));
        /* LoopSeq 2 */
        for (int i_10 = 0; i_10 < 22; i_10 += 3) 
        {
            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-63))))) <= (var_15))))));
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_3)) : (var_4)))) ? (((((/* implicit */int) (unsigned char)6)) / (var_3))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (var_3)))));
            var_35 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_16)));
            arr_40 [i_10] [i_9] [i_9] = ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_1)));
        }
        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-21))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((unsigned int) var_6))));
            var_37 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
            /* LoopSeq 1 */
            for (long long int i_12 = 4; i_12 < 19; i_12 += 1) 
            {
                var_38 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (var_4) : (var_10))));
                arr_46 [i_11] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((843149360U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)108))))))) : (((17ULL) - (((/* implicit */unsigned long long int) var_3))))));
                arr_47 [i_9] [i_11] [i_11] [i_12] = ((/* implicit */long long int) (-(((/* implicit */int) var_1))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                var_39 |= ((/* implicit */_Bool) (-(var_4)));
                var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((int) ((var_5) / (((/* implicit */int) var_14))))))));
                var_41 = ((/* implicit */unsigned int) max((var_41), (((((/* implicit */_Bool) 1872515809)) ? (843149353U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)138)))))));
            }
        }
        var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) var_13))));
    }
    var_43 &= ((/* implicit */unsigned long long int) var_17);
}
