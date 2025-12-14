/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99857
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_18 -= ((((/* implicit */int) ((((/* implicit */_Bool) ((2347431936U) + (arr_0 [(_Bool)1])))) && (((/* implicit */_Bool) ((var_10) - (((/* implicit */long long int) ((/* implicit */int) var_12))))))))) + (((/* implicit */int) ((((/* implicit */_Bool) 923481677U)) && (((/* implicit */_Bool) (unsigned char)222))))));
                arr_5 [i_0] [3ULL] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((1991879009U) & (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((arr_4 [i_0]) - (2493444779U))))))))) & (((((/* implicit */int) ((((/* implicit */_Bool) 1947535379U)) || (((/* implicit */_Bool) var_6))))) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_1 [(unsigned short)24] [i_1 + 3])))))))))) : (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((1991879009U) & (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((arr_4 [i_0]) - (2493444779U))) - (627181383U))))))))) & (((((/* implicit */int) ((((/* implicit */_Bool) 1947535379U)) || (((/* implicit */_Bool) var_6))))) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_1 [(unsigned short)24] [i_1 + 3]))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) ((var_14) == (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) >> (((((((/* implicit */int) var_1)) - (((/* implicit */int) var_12)))) - (40)))))) ^ (((((((/* implicit */long long int) ((/* implicit */int) var_9))) % (1651287109241935123LL))) >> (((((var_0) & (((/* implicit */long long int) ((/* implicit */int) var_6))))) - (16532LL)))))));
    /* LoopNest 3 */
    for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (long long int i_4 = 3; i_4 < 15; i_4 += 2) 
            {
                {
                    arr_13 [0U] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) * (0LL)))) && (((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) * (arr_0 [20U]))) != (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_8)))))))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */_Bool) ((((16666740425927944139ULL) / (arr_10 [i_2] [i_3] [i_4]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_8 [i_2]))))))))) || (((((var_17) << (((arr_12 [i_2] [i_2 - 1] [i_2] [i_2 + 1]) - (4955843243896682457LL))))) <= (((((/* implicit */long long int) ((/* implicit */int) (signed char)112))) / (var_11)))))))));
                    arr_14 [i_2] [(short)4] [i_3] [i_4] = ((/* implicit */unsigned int) ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)42052))) ^ (1651287109241935116LL))) & (((/* implicit */long long int) ((((/* implicit */int) arr_9 [(unsigned short)8] [5LL])) + (((/* implicit */int) arr_8 [(unsigned short)3]))))))) >= (((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) - (-25LL)))));
                }
            } 
        } 
    } 
}
