/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83485
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
    var_20 += (signed char)22;
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) ((4ULL) < (((/* implicit */unsigned long long int) 12))))) : (((/* implicit */int) var_3))));
        arr_5 [i_0] = ((/* implicit */signed char) 4ULL);
    }
    for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            arr_10 [i_1] [i_2] = ((max((((((/* implicit */_Bool) -1)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)120)) & (((/* implicit */int) (unsigned char)195))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (3ULL)))) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) max((arr_7 [i_1 + 1] [i_1 + 1]), ((signed char)60))))))));
            var_21 = ((/* implicit */unsigned long long int) arr_9 [i_2]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 4) 
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) && (((/* implicit */_Bool) arr_0 [i_1 + 1]))));
                arr_13 [i_1 + 1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 497043551U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126))) : (1997345781U)));
                arr_14 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) (unsigned char)2);
            }
            arr_15 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) (signed char)-66));
        }
        arr_16 [i_1] [i_1 + 1] = max((((/* implicit */unsigned char) (signed char)-112)), ((unsigned char)36));
    }
    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned int) var_16);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (unsigned char)61))));
                            arr_31 [i_4] [i_4] [i_5] [i_5] [i_4] &= ((/* implicit */unsigned int) ((signed char) 1155694617));
                            arr_32 [i_8] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) (~(((-1) | (((/* implicit */int) (signed char)56))))));
                        }
                    } 
                } 
            } 
            arr_33 [i_4] [i_5] [i_4] = (signed char)108;
        }
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
        {
            arr_38 [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-54))) ^ (((((/* implicit */_Bool) arr_37 [i_4] [i_9])) ? (((/* implicit */unsigned long long int) 1155694615)) : (18446744073709551599ULL)))));
            arr_39 [i_4] [i_9] [i_4] = ((/* implicit */signed char) 18441140641276903145ULL);
            arr_40 [i_4] = ((/* implicit */signed char) var_12);
            var_24 -= (signed char)-121;
            var_25 *= ((/* implicit */unsigned long long int) ((17179869183ULL) < (((/* implicit */unsigned long long int) -621828281))));
        }
        arr_41 [i_4] = arr_6 [i_4];
    }
}
