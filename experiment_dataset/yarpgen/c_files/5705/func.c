/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5705
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
    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) var_0)))) > (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) ((unsigned char) var_17))))))));
    var_20 = max((((((/* implicit */_Bool) max((var_11), (18133875003563628645ULL)))) ? (((((/* implicit */_Bool) var_1)) ? (var_6) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 312869070145922970ULL)))))), (((/* implicit */unsigned long long int) ((short) var_10))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_2]))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_21 = var_16;
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_9 [i_1] [i_1]))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_4 = 1; i_4 < 13; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_13 [(signed char)2]))) ? (((/* implicit */int) ((short) 312869070145922970ULL))) : ((+(((/* implicit */int) (unsigned char)182))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)34502)) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) (unsigned char)246)))));
                        }
                        var_24 = ((/* implicit */unsigned long long int) arr_4 [i_4]);
                        var_25 = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)17205)) / (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))));
                        arr_16 [i_4] [i_2] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 312869070145922970ULL))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 13; i_6 += 4) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] [12ULL] [i_0] = ((/* implicit */signed char) (+(1428420033)));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            var_26 = ((/* implicit */int) ((signed char) ((unsigned short) ((((arr_0 [i_0]) + (2147483647))) << (((((/* implicit */int) var_8)) - (1176)))))));
                            arr_22 [i_0] [i_6 + 4] [i_6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_1 [i_6 + 2])))));
                            var_27 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_6 + 4] [i_2]))) != (((unsigned long long int) arr_21 [i_7] [i_1]))));
                            arr_23 [i_7] [(short)2] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) max((max((var_6), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_6 + 1])))), (((/* implicit */unsigned long long int) arr_14 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_15)), (arr_7 [i_7] [i_6] [i_0] [(short)14] [i_0])))) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) ((unsigned short) var_11)))))) : (min((max((18133875003563628656ULL), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) ((((-2147483616) + (2147483647))) >> (((/* implicit */int) (unsigned char)1))))))));
                        }
                    }
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        var_28 -= ((/* implicit */unsigned char) var_3);
                        var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) (unsigned char)207)))));
                        arr_26 [(short)15] [i_2] [i_1] = max((((max((arr_11 [i_8] [i_2] [i_1]), (((/* implicit */long long int) (signed char)(-127 - 1))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [7ULL] [i_0])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3)))))))), (((/* implicit */long long int) ((signed char) var_0))));
                        var_30 = (unsigned char)246;
                    }
                    var_31 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)38))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_25 [i_2] [i_2] [i_1] [i_1] [i_0] [i_0])) : (arr_1 [i_0]))) : (min((arr_12 [i_1] [i_2] [i_2] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_18 [3U])))))));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned int) max((((int) ((((/* implicit */int) (unsigned char)10)) | (((/* implicit */int) (unsigned char)31))))), (max((((/* implicit */int) ((unsigned short) var_7))), (min((var_14), (((/* implicit */int) var_17))))))));
}
