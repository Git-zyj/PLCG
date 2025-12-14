/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68934
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
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)98)), (14175475731947893842ULL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)90))) : (var_16))))) >= (((long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_5)))))));
    var_21 = ((/* implicit */unsigned char) var_18);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((((12476789428438448434ULL) ^ (((/* implicit */unsigned long long int) ((long long int) arr_5 [i_1] [i_2]))))), (((/* implicit */unsigned long long int) arr_5 [i_0] [(_Bool)1])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_11 [i_1] [i_1] [i_1 - 2] [i_0] [i_1] = ((/* implicit */signed char) (!(arr_0 [i_1])));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) arr_3 [i_4 - 2])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)250)), (arr_10 [i_4] [i_3] [i_2] [i_1] [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_3] [i_2] [(_Bool)1])))));
                            }
                        } 
                    } 
                    arr_12 [i_1] [i_1 + 2] [i_2] [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_1] [i_0]);
                    var_24 -= ((/* implicit */_Bool) (-2147483647 - 1));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_5 = 2; i_5 < 9; i_5 += 4) 
        {
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) >> (((((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_13 [i_0] [i_0] [i_5 - 1]))) - (51ULL))))))));
            var_26 -= ((unsigned long long int) arr_5 [i_5 + 2] [i_5 - 1]);
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_16)))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5] [7] [i_0]))) : (arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_5] [i_5])) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
            arr_15 [i_0] [i_5 + 1] [i_5 + 1] = ((unsigned char) ((long long int) arr_6 [i_5] [i_5] [i_0]));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_20 [i_0] [i_0] [(unsigned char)6] = ((/* implicit */unsigned short) (+(((((((/* implicit */int) arr_16 [(_Bool)1] [i_6] [i_6])) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)3)) >= (((/* implicit */int) (unsigned char)247)))))) : (144115170895986688LL)))));
            arr_21 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), (((unsigned long long int) (~(arr_9 [i_6] [i_6] [7LL] [i_6] [i_6]))))));
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((_Bool) ((_Bool) arr_18 [i_0] [i_0] [i_6])))) : ((+((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_6] [i_6] [i_6]))))))));
            arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)6));
            arr_23 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((long long int) (unsigned short)54185)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (+(var_3)))))) : (arr_18 [9U] [i_6] [(unsigned char)0])));
        }
        var_29 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)214))))));
    }
    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        var_30 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) * (min((2147483647ULL), (((/* implicit */unsigned long long int) var_5))))))));
        arr_27 [i_7] = ((/* implicit */int) arr_26 [i_7]);
    }
    var_31 = ((/* implicit */signed char) var_4);
    var_32 = ((/* implicit */int) ((unsigned char) var_16));
}
