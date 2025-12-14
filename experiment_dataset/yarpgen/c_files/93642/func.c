/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93642
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-6615))) ^ (981971217U)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) ((((max((arr_3 [i_0]), (((/* implicit */unsigned long long int) (short)6617)))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)121)) + (((/* implicit */int) (short)-32489))))))) == (max((arr_3 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)23)) * (((/* implicit */int) (signed char)-1)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_6 [i_0] [i_0]))));
                    var_22 *= ((/* implicit */unsigned long long int) arr_6 [i_3 - 1] [i_1 + 1]);
                    arr_14 [i_0] = ((/* implicit */signed char) (unsigned char)131);
                    arr_15 [i_0] [i_1] [i_0] [i_1] [i_3] = arr_1 [15ULL] [i_0];
                }
                for (unsigned int i_4 = 3; i_4 < 16; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        var_23 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) & (arr_7 [i_1 + 1] [i_5] [i_1 + 1])));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [3ULL]))) | (-9223372036854775807LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)15699)))))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        arr_24 [i_0] [i_1] [i_0] [i_4] [i_0] = arr_0 [i_0];
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_6 - 1] [(_Bool)1] [(_Bool)1] [i_4 - 3] [i_0]))) % (-376698652006785400LL)));
                    }
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5)))) % (var_5)));
                }
                arr_25 [9LL] [i_0] = ((/* implicit */unsigned char) (((~(-9223372036854775807LL))) ^ (((/* implicit */long long int) arr_19 [i_0] [i_1 - 2]))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 3) 
            {
                for (unsigned int i_8 = 1; i_8 < 15; i_8 += 4) 
                {
                    {
                        var_27 = ((/* implicit */int) arr_31 [i_0]);
                        var_28 = ((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_1 - 2] [i_1] [i_7 - 3] [i_8]);
                        var_29 = ((/* implicit */int) ((((/* implicit */unsigned int) -1815653793)) & (((var_13) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                    }
                } 
            } 
            arr_32 [i_0] = ((((/* implicit */unsigned long long int) 1815653792)) & ((~(arr_2 [i_0]))));
        }
        for (long long int i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            var_30 &= ((/* implicit */unsigned int) min((0LL), (min((((/* implicit */long long int) (unsigned char)130)), (8669174455173448194LL)))));
            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) max((min(((-(var_8))), (((/* implicit */unsigned long long int) (short)6601)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)119))) - (var_5)))))))));
            var_32 = ((/* implicit */unsigned long long int) arr_0 [i_9]);
        }
        arr_37 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)99))));
    }
    var_33 = ((/* implicit */unsigned int) (unsigned char)52);
    var_34 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((-1556555684), (((((/* implicit */int) (unsigned char)121)) + (((/* implicit */int) (unsigned short)39740))))))), (10590571264459702160ULL)));
    var_35 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_18)) * (var_14)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_17))))));
}
