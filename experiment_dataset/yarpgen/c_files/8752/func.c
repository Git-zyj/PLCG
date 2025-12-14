/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8752
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_15 |= var_1;
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 4; i_3 < 10; i_3 += 2) 
                    {
                        var_16 &= ((/* implicit */unsigned char) max((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0])), (min((-782723084), ((-(((/* implicit */int) var_8))))))));
                        arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = min((((/* implicit */int) var_7)), (min((((/* implicit */int) (unsigned char)170)), (var_0))));
                    }
                    var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))) : (((/* implicit */int) (unsigned char)102))));
                    var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -968377004)) ? (((/* implicit */int) (unsigned short)38348)) : (((/* implicit */int) (unsigned char)159)))), (((/* implicit */int) ((arr_6 [i_1]) <= (((/* implicit */int) var_7)))))))) ? (((/* implicit */int) (((~(((/* implicit */int) (unsigned char)181)))) <= ((~(-968377004)))))) : (((((/* implicit */int) min((var_6), (arr_8 [i_0] [i_0] [i_1] [i_0])))) & (((25165824) / (((/* implicit */int) var_1))))))));
                    var_19 -= ((/* implicit */short) ((((/* implicit */int) min((arr_11 [i_0] [i_0] [i_1] [i_0]), (((/* implicit */short) ((((/* implicit */int) (unsigned char)153)) <= (((/* implicit */int) arr_8 [(short)0] [(short)0] [i_2] [i_2])))))))) << (((((int) arr_8 [i_0] [i_0] [i_0] [i_0])) - (27547)))));
                }
            } 
        } 
    }
    for (unsigned short i_4 = 1; i_4 < 13; i_4 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) var_6);
        arr_18 [i_4 + 1] = ((/* implicit */unsigned short) min((((min((((/* implicit */int) arr_16 [i_4])), (var_2))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4]))))))), ((~(var_2)))));
        var_21 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned char)10)) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) arr_17 [i_4])) <= (((/* implicit */int) arr_14 [i_4] [i_4 + 1]))))))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_4 + 2])), (arr_14 [i_4 + 2] [i_4 + 1]))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)4095)) ^ (((((/* implicit */int) arr_14 [i_4 + 2] [i_4 + 2])) % (((/* implicit */int) arr_16 [i_4]))))))) ? (((((/* implicit */int) arr_17 [i_4])) / (((((/* implicit */int) (short)8191)) * (((/* implicit */int) (unsigned short)38321)))))) : (((/* implicit */int) arr_15 [i_4 + 1])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
        {
            var_23 |= var_11;
            arr_21 [i_5] [i_4 + 2] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_19 [i_4 + 1] [i_4 + 1] [i_4])) : (((/* implicit */int) (short)14091)))) : (((/* implicit */int) (unsigned short)27215))));
            arr_22 [i_4] [i_4 + 1] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_4 + 1] [i_4 + 1] [i_5])) || (((/* implicit */_Bool) arr_19 [i_4 + 1] [i_4 + 1] [i_4]))));
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((int) ((((/* implicit */int) var_4)) - (((/* implicit */int) (unsigned char)225))))))));
        }
        for (int i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_7 = 1; i_7 < 14; i_7 += 3) /* same iter space */
            {
                arr_29 [i_4] [i_4 + 2] [i_4 + 2] [i_4] = ((/* implicit */unsigned char) ((short) var_6));
                var_25 = ((/* implicit */int) ((unsigned char) (unsigned short)38323));
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)97)))))));
                            arr_36 [i_4 + 2] [i_4] [i_4] [i_4 - 1] [i_4] [i_4] = ((((/* implicit */_Bool) (unsigned char)36)) ? (-371894235) : (((/* implicit */int) arr_26 [i_4] [i_4] [i_4 + 1] [i_7 - 1])));
                            arr_37 [i_4] [i_4] |= ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned char)78))))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */int) arr_17 [i_4 - 1])) : (((/* implicit */int) arr_19 [i_4] [i_4 - 1] [i_4 - 1])))))));
                        }
                    } 
                } 
            }
            for (short i_10 = 1; i_10 < 14; i_10 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_19 [i_4] [i_6] [i_10 - 1])))) + (2147483647))) >> ((((+(((/* implicit */int) (unsigned char)79)))) - (79)))));
                arr_40 [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_33 [i_4] [i_4 + 1] [i_4] [i_4 + 2] [i_4 - 1] [i_10] [i_10 + 1])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)27234)))) % (((((/* implicit */_Bool) arr_33 [i_4] [i_4 - 1] [i_4] [i_4 + 2] [i_4] [i_4] [i_10 - 1])) ? (((/* implicit */int) arr_33 [i_4 + 2] [i_4 - 1] [i_4] [i_4 + 2] [i_6] [i_4] [i_10 + 1])) : (400222483)))));
            }
            var_29 = (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)37841)) : (var_0)))) && (((/* implicit */_Bool) min((var_2), (((/* implicit */int) var_13)))))))));
        }
    }
    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        arr_43 [i_11] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */short) var_5))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)38348))) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) min((370498791), (370498791)))) ? (((/* implicit */int) ((((/* implicit */int) arr_41 [i_11] [i_11])) <= (((/* implicit */int) arr_42 [i_11]))))) : (((/* implicit */int) ((short) (short)-12142))))) : ((~(((((/* implicit */int) var_5)) * (((/* implicit */int) (short)-8191)))))));
        arr_44 [i_11] = ((/* implicit */int) (((+((+(371894234))))) != (((((/* implicit */_Bool) -968377004)) ? (-2147483636) : (((/* implicit */int) (short)-8178))))));
    }
    var_30 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_12)) ? (max((var_2), (((/* implicit */int) (short)-11774)))) : (((/* implicit */int) ((unsigned short) var_4)))))));
    var_31 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) min(((unsigned char)255), ((unsigned char)203)))) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (unsigned char)30)) : (min((((/* implicit */int) (!(((/* implicit */_Bool) -1368652507))))), (-807825523))));
    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (short)11774)))), (((((/* implicit */_Bool) var_6)) ? (-370498788) : (((/* implicit */int) (unsigned char)100))))))) ? (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)21261)) : (((/* implicit */int) var_13)))), (min((-2130540619), (((/* implicit */int) var_5)))))) : (((/* implicit */int) (short)8203)))))));
}
