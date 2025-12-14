/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96478
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
    var_19 = var_11;
    var_20 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 6; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            arr_13 [i_2] [i_1] [i_2] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) min((max((15005009802359078814ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)223))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_3])))))));
                            var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] [i_4])) : (((/* implicit */int) (unsigned char)223))))) ? (((((/* implicit */_Bool) (unsigned short)48805)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))), ((+(((/* implicit */int) min(((short)23918), (arr_7 [i_1]))))))));
                            var_22 = 18446744073709551606ULL;
                        }
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((short) 6ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45633))))) : (((/* implicit */int) (short)(-32767 - 1))))) | ((-(((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? (((/* implicit */int) (unsigned short)3182)) : (((/* implicit */int) var_12)))))))))));
                        arr_14 [i_0] [i_2] [i_0] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_11 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_0 + 1] [i_1 + 1]), (arr_11 [i_0] [i_0 + 1] [i_0] [i_1] [i_1] [i_3 + 1] [i_3]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            arr_17 [i_1] [i_2] [i_3] [i_2] [i_2] [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551609ULL))));
                            arr_18 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((long long int) arr_8 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]));
                        }
                        arr_19 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32763))))) < (max((((/* implicit */unsigned long long int) 9187343239835811840LL)), (0ULL)))));
                    }
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (9001582581493298063ULL) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */long long int) ((/* implicit */int) (short)31068))) : (arr_10 [i_1] [i_1] [i_0] [i_1] [i_0]))) % (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_1]), ((short)30334))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_6 = 4; i_6 < 9; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-2311755556835358884LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)143)))));
                        var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)200))));
                    }
                    for (long long int i_7 = 4; i_7 < 7; i_7 += 2) 
                    {
                        arr_24 [i_1] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) -9187343239835811841LL)), (5587934058825861572ULL))), (((/* implicit */unsigned long long int) ((unsigned char) arr_15 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1])))));
                        arr_25 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5414)))))) ? (-3665533741305897908LL) : (arr_15 [i_0] [i_0] [i_2] [i_7 + 3] [i_7 + 3])));
                    }
                }
            } 
        } 
    } 
}
