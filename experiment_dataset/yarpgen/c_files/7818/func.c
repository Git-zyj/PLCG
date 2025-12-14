/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7818
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -268435456)) ? (8128107847685393221ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113)))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) (((+(((((/* implicit */_Bool) 3497351478U)) ? (((/* implicit */int) (signed char)-113)) : (1956511421))))) >= (((/* implicit */int) (!(((((/* implicit */_Bool) 4143895136222459970ULL)) || (((/* implicit */_Bool) arr_0 [i_0])))))))));
        var_20 = ((/* implicit */long long int) var_6);
    }
    for (signed char i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        var_21 &= ((/* implicit */_Bool) (+((~((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (arr_3 [i_1 + 1])))))));
        arr_6 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 + 2])) * (((/* implicit */int) max((arr_5 [i_1]), (((/* implicit */unsigned char) (signed char)112)))))))) ? (((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-112)), (var_0)))))) : (((/* implicit */unsigned long long int) min((max((9223372036854775807LL), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1])))))))));
    }
    for (unsigned short i_2 = 3; i_2 < 15; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) 82647075)), (18446744073709551612ULL)));
        var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [8LL])), (((((/* implicit */_Bool) arr_7 [i_2 - 3] [(unsigned short)2])) ? (((/* implicit */unsigned long long int) -1LL)) : (0ULL)))));
    }
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 4) 
    {
        for (signed char i_4 = 3; i_4 < 11; i_4 += 1) 
        {
            {
                var_23 = ((/* implicit */short) (signed char)-71);
                var_24 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_3] [i_4])), (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78))) : ((-(arr_12 [i_3 - 1])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_23 [i_4] [i_3 + 1] [i_4] [i_3 - 1] [i_3 - 1] [i_3] = ((/* implicit */unsigned long long int) (unsigned char)128);
                            arr_24 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_4 [i_3])) * (16LL)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)0)), (var_12)))) ? (((((/* implicit */_Bool) (unsigned char)116)) ? (var_4) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((((/* implicit */_Bool) var_12)) ? (min((var_1), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) max(((~(((/* implicit */int) (short)-2048)))), (((/* implicit */int) var_9)))))));
    var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) min((var_5), (var_14))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_15) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54431)))))) ? (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)132)))) : (((/* implicit */int) var_2))))) : (((var_5) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (var_1))) : (((/* implicit */unsigned int) (+(var_13))))))));
}
