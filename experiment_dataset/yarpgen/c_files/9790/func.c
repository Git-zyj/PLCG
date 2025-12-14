/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9790
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
    var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((((signed char) (unsigned short)20910)), (((/* implicit */signed char) (_Bool)1))))) : (var_0)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5620985124210490913LL)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))))) : (min((max((((/* implicit */unsigned long long int) var_6)), (var_9))), (((/* implicit */unsigned long long int) max(((unsigned short)20910), ((unsigned short)44626)))))));
        var_15 = min((((/* implicit */unsigned int) max((arr_2 [i_0]), (((/* implicit */int) var_6))))), ((-(((((/* implicit */_Bool) arr_2 [8U])) ? (3307341792U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_16 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)44619)), (arr_2 [2U])))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_17 ^= ((/* implicit */short) ((((/* implicit */int) (short)-16324)) < (max((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (var_0)))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_18 = ((/* implicit */int) var_9);
        /* LoopSeq 3 */
        for (short i_2 = 3; i_2 < 7; i_2 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        arr_17 [i_1] [i_1] [(_Bool)1] [(unsigned char)2] &= ((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 + 1]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            var_19 = ((/* implicit */short) var_6);
                            arr_20 [i_5] [i_4] [i_3] [i_2] [i_1] = ((/* implicit */short) ((unsigned short) arr_12 [i_1] [i_2] [i_2 - 1]));
                        }
                        arr_21 [(unsigned short)6] [i_3] [i_3] [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_2 + 3])) ? (arr_11 [i_2 + 3]) : (((/* implicit */unsigned long long int) arr_9 [i_1] [i_2 - 3]))))) ? (((arr_5 [i_3]) >> (((((arr_11 [0ULL]) >> (((((/* implicit */int) (signed char)127)) - (71))))) - (83ULL))))) : (((arr_8 [i_2 + 3] [9LL] [i_2 + 1]) ^ (arr_8 [i_2 + 3] [(unsigned short)7] [i_2 - 1])))));
                    }
                } 
            } 
            var_20 = ((/* implicit */long long int) max(((+((~(var_0))))), (((arr_5 [1U]) | (((((/* implicit */int) (short)16337)) >> (((arr_19 [(signed char)7] [(signed char)7] [(signed char)7] [(short)4] [i_2 + 3] [i_2] [i_2]) - (8377554778524839862ULL)))))))));
        }
        for (short i_6 = 3; i_6 < 7; i_6 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)34))) : (-1LL))))));
            var_22 -= ((/* implicit */short) min(((-(((/* implicit */int) var_7)))), ((+((+(((/* implicit */int) (short)-32750))))))));
        }
        for (unsigned short i_7 = 1; i_7 < 9; i_7 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
            arr_29 [i_1] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_3)), (min((arr_12 [i_7 + 1] [i_7] [i_7 - 1]), (((/* implicit */long long int) max((arr_5 [i_1]), (((/* implicit */int) var_1)))))))));
        }
        var_24 = ((/* implicit */short) arr_0 [i_1]);
    }
    var_25 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (-1202875156)))) ? (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)44619)))))))));
    var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)44619)) & (((/* implicit */int) (unsigned short)44618))));
}
