/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6291
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0 - 1] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -6318400147645912766LL)) ? (var_11) : (((/* implicit */int) var_6)))), (((((/* implicit */int) (unsigned short)62331)) - (((/* implicit */int) (unsigned char)255))))))) ? (max((-1917495250464673444LL), (((/* implicit */long long int) (_Bool)1)))) : ((-(6318400147645912766LL)))));
        var_14 = ((/* implicit */short) (((+(-1917495250464673444LL))) > (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))));
    }
    for (unsigned char i_1 = 3; i_1 < 20; i_1 += 4) 
    {
        arr_7 [18] [i_1 - 2] |= ((/* implicit */short) ((signed char) ((max((((/* implicit */long long int) (_Bool)1)), (-1917495250464673445LL))) % (((/* implicit */long long int) ((/* implicit */int) ((short) var_11)))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((((/* implicit */_Bool) 1917495250464673420LL)) || (((/* implicit */_Bool) var_4)))), (((((/* implicit */_Bool) 5970316962152973546LL)) && (((/* implicit */_Bool) -1917495250464673420LL))))))) >= (((/* implicit */int) (!((!(((/* implicit */_Bool) -2886951635250226165LL)))))))));
        var_15 = ((/* implicit */unsigned short) ((-2029195126330264090LL) - (((/* implicit */long long int) ((int) 70368475742208LL)))));
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 15; i_2 += 3) 
    {
        for (long long int i_3 = 2; i_3 < 15; i_3 += 1) 
        {
            {
                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)15)), (-1725863053564636091LL)))) ? (1725863053564636090LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)));
                /* LoopSeq 4 */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    arr_16 [i_2 - 1] [i_2 - 1] [i_3] [i_4] = ((/* implicit */int) (unsigned char)0);
                    arr_17 [i_2 - 1] [i_4] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (((((/* implicit */_Bool) 4095)) ? (-1917495250464673462LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64142)))))));
                    var_17 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-2)))))));
                    arr_18 [i_3] = ((/* implicit */long long int) ((signed char) max((-6318400147645912766LL), (-1106143525744319264LL))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_18 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
                        arr_22 [i_5] [i_5] [i_3] [i_4] [i_5] = ((/* implicit */short) ((unsigned char) ((((/* implicit */long long int) -800512645)) / ((-9223372036854775807LL - 1LL)))));
                    }
                    for (int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) >= (6318400147645912765LL))))));
                        arr_25 [i_2 - 1] [i_3] [i_4] [i_6] [i_6] = ((/* implicit */signed char) ((_Bool) (_Bool)1));
                    }
                }
                for (int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) max((((int) var_5)), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)0)), (var_6))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((max((((/* implicit */long long int) var_13)), (8796092989440LL))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21799)))))) >> (((((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)1933)))) - (20)))));
                }
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_22 -= ((/* implicit */short) (unsigned short)0);
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5)) ? (((long long int) var_12)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)51)) < (((/* implicit */int) var_4))))))));
                        var_24 = ((/* implicit */int) ((unsigned short) var_10));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_36 [i_2] [i_8] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) var_8)) : (1852031248)));
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_40 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2 - 1] = ((((/* implicit */int) (signed char)0)) & (((/* implicit */int) (unsigned char)129)));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (+(((/* implicit */int) var_8)))))));
                            var_26 = ((/* implicit */signed char) (_Bool)0);
                        }
                    }
                    for (long long int i_12 = 1; i_12 < 15; i_12 += 4) 
                    {
                        var_27 |= ((/* implicit */signed char) ((((int) var_9)) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)63374)) : (((/* implicit */int) (unsigned short)65535))))));
                        var_28 = ((/* implicit */int) ((205796615) > ((-(((/* implicit */int) var_0))))));
                        arr_43 [i_12] [i_3] = ((/* implicit */unsigned char) ((-2085273411121817819LL) >= (2029195126330264089LL)));
                        var_29 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (short)-2300)))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)11905))) >= (964062817526480616LL))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_47 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) -1398889159)) ? (((/* implicit */int) (unsigned short)36153)) : (((/* implicit */int) (unsigned short)36153))));
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_8)) : (var_3)))))))));
                    }
                    for (short i_14 = 2; i_14 < 13; i_14 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((var_9) != (((/* implicit */int) var_0))))) : ((-(((/* implicit */int) (short)-11896))))));
                        var_32 = ((/* implicit */signed char) ((unsigned short) (unsigned short)36322));
                    }
                    for (unsigned short i_15 = 3; i_15 < 15; i_15 += 3) 
                    {
                        var_33 = ((/* implicit */signed char) ((int) ((unsigned short) var_13)));
                        var_34 = ((/* implicit */_Bool) -7190162165798017109LL);
                        var_35 ^= (-(0));
                    }
                    arr_54 [i_2] [i_3 + 1] [i_8] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)29208)) + (((var_9) + (((/* implicit */int) var_4))))));
                    var_36 = ((/* implicit */long long int) ((unsigned short) 283622301));
                }
                /* vectorizable */
                for (signed char i_16 = 4; i_16 < 13; i_16 += 4) 
                {
                    var_37 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) (signed char)32)))));
                    arr_57 [(short)12] [i_3 - 2] [i_16] = var_11;
                }
                /* LoopSeq 1 */
                for (unsigned short i_17 = 1; i_17 < 15; i_17 += 3) 
                {
                    var_38 = ((/* implicit */long long int) ((((/* implicit */int) (short)11905)) / (((/* implicit */int) max(((short)0), (((short) (_Bool)1)))))));
                    arr_60 [i_2] [(short)4] [i_17 + 1] = ((/* implicit */short) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)23998))) * (((-7699418734399812632LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                    arr_61 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (short)-27073)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_6)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)11928)))))) >> (((/* implicit */int) min((((short) var_6)), (((/* implicit */short) ((((/* implicit */int) (signed char)24)) > (((/* implicit */int) (unsigned short)29213))))))))));
                }
                arr_62 [i_3] [i_3] [i_3 - 2] = ((/* implicit */unsigned char) 6287193167713191929LL);
            }
        } 
    } 
    var_39 -= ((/* implicit */long long int) (+(var_9)));
    var_40 = max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)62))))) ? (((/* implicit */int) ((-1513662413) <= (((/* implicit */int) (unsigned short)7083))))) : (((((/* implicit */int) (unsigned short)59573)) / (((/* implicit */int) (signed char)112)))))), (min((var_13), (((int) var_13)))));
}
