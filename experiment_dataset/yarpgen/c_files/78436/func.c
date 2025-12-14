/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78436
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)169))))) ? (((/* implicit */int) max((var_5), (arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) (~(2335792436U)))) : (18446744073709551615ULL)));
        var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [8U] [8U] = ((/* implicit */signed char) ((short) (unsigned char)201));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_2))))))) << (((/* implicit */int) (!(((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) var_13))))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned char) (short)32692))), (arr_6 [i_1])));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            arr_10 [i_1] = ((/* implicit */unsigned int) (+(((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15202))) * (var_16))) / (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)104)), (513207230U))))))));
            arr_11 [i_1] = ((/* implicit */int) arr_1 [i_1]);
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            var_22 -= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_12 [i_1] [i_1] [i_1]))))));
            arr_15 [i_1] [i_3 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3 + 1] [i_3 - 2])) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_3 + 2])) >= (((/* implicit */int) (short)748))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -931625757)))))));
            arr_16 [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15778005472063137664ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [1] [i_1] [i_3 - 2]))) : (((unsigned long long int) var_1))));
            var_23 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-23173)) + (2147483647))) << (((/* implicit */int) arr_13 [i_3 - 1] [i_3 - 1] [(unsigned char)9]))));
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    {
                        var_24 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) - (var_14))))));
                        arr_22 [i_1] [i_1] [i_1] [i_1] [i_4] = (short)32767;
                    }
                } 
            } 
        }
    }
    /* LoopNest 3 */
    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        for (short i_7 = 1; i_7 < 9; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 2; i_8 < 7; i_8 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((arr_13 [i_7] [i_8] [i_7 - 1]) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) arr_13 [i_6] [i_6] [i_7 - 1])))) == (((/* implicit */int) ((arr_13 [i_6] [0] [i_7 + 1]) && (arr_13 [i_8 + 2] [(short)2] [i_7 + 1]))))));
                    arr_30 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)12602)) ? (((/* implicit */int) arr_13 [i_6] [(unsigned short)3] [i_8 + 2])) : (((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) max((((/* implicit */short) var_6)), (var_11)))) ? (((((/* implicit */_Bool) arr_5 [i_6])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)68)) : (2147483647)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                }
            } 
        } 
    } 
    var_26 = (unsigned char)85;
}
