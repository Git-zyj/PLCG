/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91023
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_10 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 137422176256ULL)) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) : (((unsigned int) arr_2 [i_1]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_0 [i_0]))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_1]))) : (arr_2 [i_1]))))));
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (arr_3 [i_0] [i_1] [i_1])));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 *= var_7;
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [i_3] [i_0] [i_1] [i_0])), (arr_5 [i_2])))) ? (arr_5 [i_2]) : (((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_5 [i_0]) : (arr_5 [i_0])))));
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)58)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_3] [i_2] [i_2] [i_1] [i_1] [i_0])), (arr_8 [4ULL] [i_2] [4ULL] [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)198)) ? (arr_5 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18)))))))) ? (min((((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775801LL)) ? (-8857271931716109909LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91)))))) >= ((-(7010307527835132202ULL)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (int i_5 = 1; i_5 < 11; i_5 += 3) 
        {
            {
                var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) * (805079472U)));
                var_16 += ((/* implicit */_Bool) (((!(arr_16 [i_5 + 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22207))) : ((((_Bool)1) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5 + 1])))))));
                arr_18 [i_4] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_4])) - (((((/* implicit */_Bool) ((int) (short)-8069))) ? (var_3) : (var_3)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (_Bool)0))));
                    arr_27 [i_7] [i_7] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((int) (_Bool)1)) % (((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) arr_25 [i_6] [i_6] [i_6]))))));
                    arr_28 [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_24 [i_6])) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)198)) : (arr_22 [i_7])))) : (((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (9223372036854775795LL) : (((/* implicit */long long int) arr_22 [i_7])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_7] [i_7] [i_8])) && ((!(((/* implicit */_Bool) arr_21 [i_7] [14LL] [i_7])))))))));
                }
            } 
        } 
    } 
}
