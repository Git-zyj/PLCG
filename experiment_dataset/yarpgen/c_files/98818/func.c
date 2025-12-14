/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98818
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (unsigned short)54536)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))))))))));
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) || (((/* implicit */_Bool) (unsigned char)26))))) : (((-1465492825) & (((/* implicit */int) (unsigned char)220))))))) ? (min((((/* implicit */unsigned int) (unsigned char)36)), (511U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -1465492847)))))))));
                    var_16 += ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_2]))));
                }
            } 
        } 
        var_17 = max((((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_10))) == (((((/* implicit */_Bool) (unsigned char)12)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)145)))))))), (((unsigned char) max(((unsigned char)26), (((/* implicit */unsigned char) (_Bool)1))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_0 [i_4])) ? (2163173777487576958LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))))))) ? (((((/* implicit */_Bool) (unsigned short)11002)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-69))) : (-5939103798242919859LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0])))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */int) arr_0 [i_0]))))) ? (arr_3 [i_0]) : (((/* implicit */long long int) min((((/* implicit */unsigned int) ((669703059) / (((/* implicit */int) (unsigned short)14982))))), (((unsigned int) (unsigned char)215)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 10; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                for (unsigned char i_7 = 3; i_7 < 9; i_7 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) (unsigned short)11005)) : (((/* implicit */int) (short)6221))))));
                        var_21 = ((/* implicit */_Bool) ((int) (signed char)57));
                        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_10 [i_7 + 4] [i_7 + 4] [i_7 + 2]))))) | ((+(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)85))))))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5 + 3] [i_7 + 4])) ? (((/* implicit */int) arr_10 [i_5 + 3] [i_7 + 4] [i_7 + 1])) : (((/* implicit */int) arr_10 [i_5 + 3] [i_7 + 4] [i_7 + 1]))))) ? (((((/* implicit */_Bool) arr_10 [i_5 + 3] [i_7 + 4] [i_7 + 1])) ? (((/* implicit */int) arr_10 [i_5 + 3] [i_7 + 4] [i_7 + 1])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (signed char)67)))))));
                        var_24 ^= ((/* implicit */_Bool) (unsigned char)39);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
    {
        var_25 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_20 [i_8])) ? (arr_20 [i_8]) : (((/* implicit */long long int) -1)))));
        var_26 &= ((/* implicit */signed char) var_9);
        var_27 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1239163930991157687LL)));
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) arr_20 [i_8]))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 1) 
    {
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9])) ? (((/* implicit */long long int) arr_22 [(_Bool)1])) : (arr_19 [i_9])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)57))) : (arr_19 [i_9]))) : (708900459019697839LL)));
        var_30 = ((/* implicit */unsigned int) ((arr_22 [i_9]) <= (-467029308)));
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            for (int i_11 = 1; i_11 < 14; i_11 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 1; i_12 < 16; i_12 += 2) 
                    {
                        var_31 ^= ((/* implicit */int) ((arr_30 [i_11 - 1] [i_11 - 1] [i_11 + 2] [2] [i_12 + 1] [i_12 + 1]) >= (arr_30 [i_11 - 1] [i_11 - 1] [i_11 + 2] [(unsigned char)12] [i_12 + 1] [i_12 + 1])));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_19 [i_11 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65507)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))));
                    }
                    var_33 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_20 [i_9]) : (((/* implicit */long long int) arr_22 [i_9]))));
                    var_34 &= ((/* implicit */_Bool) -642314847);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_13 = 1; i_13 < 16; i_13 += 2) 
        {
            var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) var_5))));
            var_36 = var_11;
            var_37 = ((/* implicit */signed char) arr_33 [i_13]);
        }
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (signed char)-69))));
            var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_23 [i_14 - 1])) : (((/* implicit */int) var_7))));
            var_40 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)67))));
        }
        for (int i_15 = 1; i_15 < 14; i_15 += 1) 
        {
            var_41 = ((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_15 - 1]))));
            /* LoopSeq 1 */
            for (unsigned int i_16 = 2; i_16 < 16; i_16 += 1) 
            {
                var_42 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 271453832399278780LL)) ? (arr_19 [i_15 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53215)))));
                var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) arr_36 [i_9] [i_15 + 2] [(unsigned short)16])) : ((((_Bool)1) ? (-2124436630) : (((/* implicit */int) var_2)))))))));
                var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_9] [(_Bool)1] [i_16] [i_16]))) : (6252887065046194269LL)))) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) ((0LL) > (((/* implicit */long long int) arr_27 [i_9] [i_9])))))));
            }
        }
    }
    var_45 = ((/* implicit */long long int) max((var_45), (max((var_10), (((/* implicit */long long int) 9))))));
}
