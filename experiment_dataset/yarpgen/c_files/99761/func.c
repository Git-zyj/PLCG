/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99761
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
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0 - 4] [i_0 - 4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_1 [24LL])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_1 [12ULL])))) : (((((/* implicit */_Bool) 2786388868886433320LL)) ? (((/* implicit */unsigned long long int) 3603691856U)) : (var_12)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))) : ((~((+(((/* implicit */int) (_Bool)1))))))));
        arr_3 [i_0 - 2] = 7594676606989963424LL;
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */signed char) ((unsigned char) (((!(((/* implicit */_Bool) var_1)))) ? (min((var_12), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_2] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 - 4] [i_1] [i_0 + 1]))))));
                        arr_10 [i_3] |= ((/* implicit */long long int) arr_8 [i_0 - 2] [i_3] [i_0 - 2] [i_3] [i_0 - 4]);
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 3; i_5 < 23; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 3) 
            {
                {
                    var_18 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (var_7) : ((~(((/* implicit */int) (_Bool)0)))))) % ((-(((/* implicit */int) (unsigned char)249))))));
                    arr_19 [i_6] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_16 [i_5 - 3] [i_5 - 3] [i_6])) ? (arr_16 [i_5 + 1] [i_5 + 1] [i_6]) : (arr_16 [i_5 + 1] [i_5 - 2] [i_6]))), (arr_16 [i_5 - 3] [i_5 - 1] [i_6])));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        var_19 = ((/* implicit */long long int) ((unsigned short) min((((((/* implicit */_Bool) arr_4 [i_5] [i_6 - 1] [3LL])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (arr_11 [i_5 - 3]))));
                        var_20 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)58)))) ? (((/* implicit */int) (signed char)127)) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)0))))))));
                        var_21 = ((/* implicit */unsigned char) arr_14 [i_7] [17ULL] [i_5]);
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((unsigned int) (-(-2716655098935589841LL)))))));
                    }
                    for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 2) 
                    {
                        arr_25 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2786388868886433321LL)) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)-27761), (((/* implicit */short) (unsigned char)255)))))) : (-4943743673139632959LL)));
                        var_23 = ((/* implicit */unsigned int) arr_4 [i_6] [i_6 + 1] [i_8]);
                    }
                    arr_26 [i_6] = (unsigned char)190;
                }
            } 
        } 
    } 
}
