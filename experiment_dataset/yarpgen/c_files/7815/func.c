/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7815
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)51)), (4853043134165775153LL)))), (((((/* implicit */unsigned long long int) var_6)) / (var_11)))))));
    var_19 = ((/* implicit */long long int) var_7);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) arr_5 [i_0] [i_1] [(signed char)18])))) ? (((((/* implicit */_Bool) (unsigned short)63999)) ? (((arr_4 [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 5641315745170568998LL)) ? (49769104U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1920)))))))) : (((/* implicit */long long int) ((/* implicit */int) min((max(((unsigned short)65002), ((unsigned short)61547))), (((/* implicit */unsigned short) var_3)))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) (unsigned short)64430)) : (((/* implicit */int) (unsigned short)63616))));
                                var_22 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (var_10))), (((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1] [i_0])) ? (arr_6 [i_1 + 1] [i_1] [i_0]) : (arr_6 [i_1 - 1] [i_1] [i_2])))));
                            }
                        } 
                    } 
                    arr_10 [i_0] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((1491245951) < (((/* implicit */int) (signed char)114)))))) : (min((((/* implicit */long long int) (~(var_9)))), (-6962045092405836173LL)))));
                    arr_11 [9ULL] [i_1] [9ULL] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5)))));
                }
            } 
        } 
    } 
}
