/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55315
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
    var_16 = var_7;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_17 &= ((/* implicit */signed char) (((((~(((/* implicit */int) (short)2383)))) + (2147483647))) << (((((((arr_2 [i_0] [14LL] [14LL]) | (arr_2 [i_1] [(_Bool)1] [i_0]))) + (272867955))) - (30)))));
            arr_5 [i_1] [i_1] [i_1] = ((/* implicit */short) (~(((unsigned long long int) arr_4 [i_0] [i_1] [i_0]))));
            var_18 = ((/* implicit */unsigned short) (_Bool)1);
        }
        var_19 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)53), (((/* implicit */unsigned char) arr_0 [i_0])))))) - (var_11))), (((/* implicit */unsigned long long int) ((short) var_2)))));
        arr_6 [i_0] = ((/* implicit */unsigned short) (((~((~(((/* implicit */int) (unsigned char)47)))))) > (((/* implicit */int) (unsigned char)59))));
        var_20 *= ((/* implicit */signed char) var_12);
    }
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 22; i_4 += 1) 
            {
                for (signed char i_5 = 3; i_5 < 22; i_5 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) max((var_21), (arr_13 [i_4 - 1] [i_4 - 1])));
                        var_22 = ((/* implicit */unsigned int) ((((1014068334340390927LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202))))) == (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))));
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-13246)))))) : (var_10)));
                            var_24 = ((/* implicit */unsigned long long int) var_1);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_25 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_10 [i_5 - 1])))) ^ (((/* implicit */int) ((signed char) arr_10 [i_5 - 1])))));
                            var_26 ^= ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) arr_10 [i_4 + 1])))));
                            var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)78)));
                            var_28 -= ((/* implicit */short) -1014068334340390928LL);
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            arr_26 [i_4] = ((/* implicit */short) var_12);
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_8])) ? (((/* implicit */unsigned long long int) ((8234952988758765426LL) / (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2] [i_4] [i_4] [i_8])))))) : (arr_20 [i_8] [i_3] [i_2] [i_3] [i_2])));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)53)) == (((/* implicit */int) (unsigned char)159))));
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((_Bool) 2450835620003645809LL)))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 4; i_9 < 21; i_9 += 2) 
        {
            for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                {
                    var_32 = ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) arr_22 [i_9 + 1] [i_9 - 1] [i_10] [i_10] [i_9])))));
                    var_33 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned long long int) -1014068334340390927LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_10]))) <= (var_14)))))) != (((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) var_3))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_11 = 1; i_11 < 21; i_11 += 4) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_34 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_38 [i_11] [i_11 + 1] [i_11 + 1])))) ? (((((/* implicit */int) (unsigned char)202)) >> (((/* implicit */int) (unsigned char)2)))) : (((/* implicit */int) max((arr_8 [i_11] [i_11]), (((/* implicit */unsigned char) (_Bool)0)))))));
                    arr_40 [i_12] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -148641577060033028LL)) || (((max((((/* implicit */long long int) (_Bool)1)), (-148641577060033033LL))) >= (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_2] [i_11 + 1])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_35 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (unsigned char)190))) < ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_2] [i_2]))) != (-148641577060033028LL))))))));
                                arr_46 [i_14] [i_14] [i_12] [i_11] [i_14] [i_2] = ((/* implicit */long long int) var_5);
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */int) min(((+((~(var_11))))), (var_11)));
                }
            } 
        } 
    }
    var_37 = ((/* implicit */unsigned int) ((((var_4) + (2147483647))) >> (((/* implicit */int) var_3))));
    var_38 = ((/* implicit */long long int) ((((-1014068334340390945LL) == (8248220090003646298LL))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */int) (short)-23411))))), (((((/* implicit */_Bool) -7610563366393263019LL)) ? (((/* implicit */unsigned long long int) 536739840)) : (5799852671531386860ULL))))) : (((/* implicit */unsigned long long int) ((((var_15) + (9223372036854775807LL))) << (((3607849440U) - (3607849440U))))))));
    var_39 = ((/* implicit */long long int) var_2);
}
