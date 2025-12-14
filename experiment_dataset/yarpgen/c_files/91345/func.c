/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91345
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
    var_10 *= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_1)), (min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-87)) / (((/* implicit */int) (unsigned short)38843)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_0 [i_0])) + (max((((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_1 + 1])), (arr_4 [i_1 + 1] [i_1] [i_1 - 1])))));
                var_12 = ((/* implicit */int) arr_3 [i_1] [i_1]);
                arr_5 [i_1] = ((/* implicit */int) -9223372036854775801LL);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
    {
        arr_10 [6U] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_2])) / (((/* implicit */int) (short)32369))))) * (((((/* implicit */_Bool) ((4294967295U) | (((/* implicit */unsigned int) -860809281))))) ? (((/* implicit */unsigned long long int) ((arr_9 [i_2]) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)23)))))) : (((((/* implicit */_Bool) 4294967295U)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_8 [i_2]))))))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2])) + (((/* implicit */int) arr_7 [i_2]))))) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) min((arr_7 [i_2]), (arr_7 [i_2]))))));
        var_14 = ((/* implicit */unsigned int) ((-921694156) | (((/* implicit */int) (unsigned char)255))));
        arr_11 [i_2] [i_2] = ((4294967295U) + (min((((/* implicit */unsigned int) arr_6 [i_2] [i_2])), (arr_9 [i_2]))));
    }
    for (int i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
    {
        var_15 = ((((/* implicit */_Bool) ((-7141842731392987513LL) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3])))))) && (((((/* implicit */_Bool) arr_8 [i_3])) && (((/* implicit */_Bool) arr_12 [i_3])))));
        arr_14 [i_3] = ((/* implicit */_Bool) (unsigned char)183);
    }
    for (int i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_4])) ? (((3223236337U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-27242))))) : (((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_4]))) : (arr_9 [i_4]))))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            for (short i_6 = 2; i_6 < 20; i_6 += 4) 
            {
                {
                    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_6 - 1])) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)17)) || (((/* implicit */_Bool) 2233905697U)))))));
                    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)32369)) ? (((/* implicit */int) arr_19 [i_4] [i_4] [i_6 - 1])) : (((/* implicit */int) (short)-24853)))) % (((((/* implicit */int) (unsigned char)179)) % (((/* implicit */int) (short)-27242))))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-28899)) && (((/* implicit */_Bool) arr_7 [i_5])))))) % (arr_21 [i_5]))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32396)) / (((/* implicit */int) (signed char)-67))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)17)) * (((/* implicit */int) (signed char)-69))));
                }
            } 
        } 
        var_22 = ((((((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_4])) || (((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_4]))))) + (((/* implicit */int) (unsigned short)36028)))) * (((((/* implicit */int) arr_20 [i_4] [i_4] [i_4])) % (((/* implicit */int) ((((/* implicit */_Bool) (short)28898)) || (((/* implicit */_Bool) arr_15 [i_4] [i_4]))))))));
        var_23 = ((/* implicit */int) arr_21 [i_4]);
    }
    var_24 = ((/* implicit */long long int) var_7);
}
