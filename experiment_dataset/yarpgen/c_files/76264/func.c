/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76264
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 1) 
            {
                {
                    arr_10 [6] [i_2] [i_1] = ((/* implicit */short) (-(var_7)));
                    var_18 *= ((/* implicit */unsigned int) arr_3 [i_0 - 1]);
                    arr_11 [i_0] [(short)4] [i_2] |= ((/* implicit */unsigned short) ((((int) var_16)) < (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)11594)))))))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_8 [(signed char)10] [i_0] [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_8 [0LL] [i_0 + 2] [(short)0] [10U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : (arr_4 [i_0 + 1]))) : (((/* implicit */unsigned long long int) (~(-8076911001716324817LL))))))) && (((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (unsigned short)65535)), (arr_4 [i_0]))))))));
    }
    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 2) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_14 [i_3])), (-4843117731112952371LL))), (((/* implicit */long long int) arr_15 [i_3 - 1]))))) / (var_13)));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)12)) ? (2499013704U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_17 [i_3 - 2] [i_4 + 2] [i_5])) : (((/* implicit */int) arr_17 [i_3] [i_4 - 1] [i_5])))))));
                        /* LoopSeq 3 */
                        for (short i_7 = 2; i_7 < 19; i_7 += 1) 
                        {
                            arr_30 [i_3] [i_4] [i_5] [i_4] [i_6] [(short)6] [i_7] = ((/* implicit */unsigned int) var_8);
                            var_20 |= ((/* implicit */short) (-((~(((((/* implicit */int) (short)11594)) / (((/* implicit */int) (unsigned char)63))))))));
                        }
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) (((~(((/* implicit */int) (short)11594)))) < (((/* implicit */int) (signed char)-43))));
                            arr_33 [i_3] [i_4] [i_5] [20LL] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)11607)) : (((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_8]))));
                        }
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */signed char) arr_25 [(signed char)5] [i_5] [i_5] [i_5] [i_4] [i_5]);
                            var_23 *= ((/* implicit */unsigned short) (unsigned char)247);
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) 0U))));
                        }
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_20 [i_3]))));
                        var_26 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((18U) / (((/* implicit */unsigned int) 2019604427))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 13377740384271006088ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11596))) : (arr_22 [i_3 - 2] [i_4 + 2] [i_5]))))))) < (min((((/* implicit */int) (short)-11595)), (((int) var_0))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_3] [i_3 - 2] [i_3])) ? (((/* implicit */int) arr_18 [i_3] [i_3 - 2] [i_3])) : (var_17)))) : (762131382696089532ULL))))));
    }
    var_28 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned short) ((18446744073709551613ULL) * (var_13))))), (((((/* implicit */_Bool) ((unsigned long long int) (short)-11594))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_12))) : (((4503599358935040ULL) / (((/* implicit */unsigned long long int) var_17))))))));
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 3672663175U)) : (min((((/* implicit */unsigned long long int) var_9)), (18446744073709551615ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_15), (((/* implicit */short) (unsigned char)9)))))) : ((-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_17)) : (var_14)))))));
    /* LoopSeq 2 */
    for (signed char i_10 = 2; i_10 < 11; i_10 += 4) 
    {
        arr_38 [i_10 - 2] [i_10 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_18 [i_10] [i_10] [i_10])) / (((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) 134737713)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (short)11594)))) : (((/* implicit */int) (signed char)-43))));
        arr_39 [i_10 - 2] = ((/* implicit */unsigned short) var_2);
    }
    for (unsigned int i_11 = 3; i_11 < 11; i_11 += 2) 
    {
        arr_43 [i_11] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_14 [i_11 - 1])) ? (((/* implicit */int) ((((/* implicit */int) (short)-26995)) < (((/* implicit */int) (short)0))))) : ((+(((/* implicit */int) (unsigned char)32)))))));
        arr_44 [i_11] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (short)0)) < (((/* implicit */int) (short)14)))))));
    }
}
