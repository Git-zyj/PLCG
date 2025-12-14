/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76788
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned short) (((-(arr_6 [(short)10] [i_1] [i_1]))) + (((/* implicit */unsigned long long int) ((arr_7 [i_2 + 1] [i_2 + 1] [i_1]) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_5 [i_2] [i_2 + 1] [i_1] [i_2 - 1])))))));
                    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (7LL) : (((/* implicit */long long int) ((/* implicit */int) (short)19564)))));
                    /* LoopSeq 2 */
                    for (short i_3 = 4; i_3 < 15; i_3 += 4) 
                    {
                        arr_12 [i_1] [i_1] = ((/* implicit */short) 7LL);
                        arr_13 [i_0] [3LL] [i_0] [i_0] [i_1] [i_0] = var_10;
                        var_20 = ((/* implicit */signed char) var_2);
                        var_21 |= ((/* implicit */short) ((max((((/* implicit */int) max(((short)19564), ((short)19553)))), (min((-1), (((/* implicit */int) var_16)))))) % (((/* implicit */int) arr_10 [i_3 - 2] [i_3] [i_3] [i_3 - 1]))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */int) -20LL);
                        arr_17 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */short) (+(max((min((var_0), (((/* implicit */unsigned long long int) arr_15 [i_4] [i_2])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1] [i_1])))))))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))))))));
                    var_24 = ((/* implicit */unsigned short) var_16);
                }
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    var_25 ^= ((/* implicit */int) max((((/* implicit */long long int) arr_0 [i_1] [(unsigned char)11])), (-17LL)));
                    arr_21 [i_0] [i_1] [(short)8] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)12);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        var_26 -= ((/* implicit */long long int) (signed char)0);
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((((/* implicit */_Bool) max(((short)2786), (((/* implicit */short) arr_3 [i_0] [(unsigned char)3]))))) ? (min((-2830372832981078881LL), (-6695338170069665192LL))) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))))))) ^ (((long long int) max((((/* implicit */short) arr_1 [i_0] [i_0])), (var_3)))))))));
                        var_28 = ((/* implicit */unsigned char) max((18446744073709551607ULL), (((/* implicit */unsigned long long int) (short)-7606))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    arr_26 [i_1] [i_1] [i_1] = ((var_6) >> (((((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_0] [i_0] [i_1] [i_0]))) ? (arr_25 [i_0] [i_1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_0] [(unsigned char)14])), ((unsigned char)179))))))) - (1618253439U))));
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)6426)))), (min((((/* implicit */long long int) (signed char)-4)), (var_9)))))) ? (min((-17LL), (((/* implicit */long long int) (short)28017)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((unsigned char) arr_22 [i_1] [i_1])))))));
                }
            }
        } 
    } 
    var_30 &= ((/* implicit */long long int) max((((unsigned long long int) max((((/* implicit */short) (signed char)47)), (var_12)))), ((~((-(var_8)))))));
    var_31 = ((/* implicit */signed char) min((((/* implicit */long long int) var_17)), (var_2)));
    /* LoopSeq 1 */
    for (int i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        arr_29 [9ULL] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((min((134301556U), (134301556U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8] [i_8] [i_8] [i_8]))) > (var_0)))))))) % ((-(12ULL)))));
        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) min((arr_24 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */short) (signed char)21))))), (((((/* implicit */_Bool) arr_24 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_2 [11LL] [i_8]))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8] [(short)4] [i_8] [i_8]))) : (-4359172196970976782LL))) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_8] [i_8])))))))))));
    }
}
