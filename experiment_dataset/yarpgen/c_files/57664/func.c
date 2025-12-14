/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57664
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
    var_10 = ((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((((/* implicit */int) arr_5 [i_0])) - (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_3 [(unsigned short)0] [(unsigned short)0] [i_1])), (var_5))))))));
                var_11 ^= ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((var_7) + (2147483647))) >> (((((/* implicit */int) var_0)) - (40736))))))))), (((int) ((((/* implicit */_Bool) var_1)) ? (3503902371752100611ULL) : (((/* implicit */unsigned long long int) arr_0 [i_1] [i_0])))))));
            }
        } 
    } 
    var_12 = var_5;
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_3 [i_2] [9ULL] [i_2])), (((((/* implicit */_Bool) 12752619562695007514ULL)) ? (((/* implicit */int) var_1)) : (arr_1 [i_2] [i_2])))));
        arr_9 [i_2] = ((/* implicit */unsigned char) (-(min((((((/* implicit */int) var_8)) % (arr_0 [i_2] [i_2]))), (((/* implicit */int) var_6))))));
        var_14 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_1 [16ULL] [i_2])) ? (var_2) : (arr_8 [i_2]))));
    }
    for (int i_3 = 3; i_3 < 9; i_3 += 1) 
    {
        arr_12 [i_3] [(unsigned short)3] = (~((~(((/* implicit */int) arr_2 [i_3 - 2] [i_3 - 3])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            var_15 = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (1000798390) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) arr_14 [i_3 + 2] [i_3 + 2]))))));
                arr_18 [i_3] [i_4] [6ULL] [i_4] = arr_15 [i_3 + 3] [i_4 + 2] [i_4];
                /* LoopSeq 3 */
                for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_0)) - (40723)))));
                    var_18 = ((/* implicit */int) (unsigned short)29442);
                }
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    var_19 += ((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_16 [(short)11] [i_4] [i_4])) - (213))))) + (arr_20 [5])));
                    arr_24 [i_7] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_14 [i_5] [i_4])) : (((/* implicit */int) var_4))))));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_7 [(unsigned short)12]))));
                }
                for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    var_21 = var_2;
                    arr_28 [i_3] [i_8] [i_5] [i_5] [2] = ((/* implicit */unsigned short) var_2);
                    var_22 = ((/* implicit */signed char) arr_25 [i_8] [i_4] [i_4] [i_4] [i_4]);
                }
            }
            arr_29 [i_4] [i_4 - 1] = ((((/* implicit */_Bool) arr_17 [0] [i_3] [i_3 - 3] [i_3 + 1])) ? (((/* implicit */int) arr_17 [i_3 + 3] [i_3] [(short)4] [i_4])) : (((/* implicit */int) arr_17 [7] [i_4] [i_4] [i_4 + 1])));
        }
        var_23 = ((/* implicit */unsigned char) var_9);
    }
    for (int i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        arr_33 [i_9] [i_9] = (((!(((/* implicit */_Bool) arr_30 [i_9])))) ? ((+(((((/* implicit */_Bool) (unsigned char)178)) ? (arr_30 [i_9]) : (((/* implicit */int) arr_32 [i_9])))))) : (((((/* implicit */_Bool) arr_32 [i_9])) ? (max((arr_30 [i_9]), (((/* implicit */int) (short)9338)))) : (min((var_7), (((/* implicit */int) var_1)))))));
        var_24 = (+(var_7));
        var_25 += ((/* implicit */int) ((unsigned char) arr_30 [8]));
    }
    var_26 = ((/* implicit */int) var_8);
}
