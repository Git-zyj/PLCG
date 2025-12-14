/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94808
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57499))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [(unsigned char)5] [(unsigned char)3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_2] [i_3 + 4]))))), (((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_9 [i_0])))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_5 = 3; i_5 < 22; i_5 += 4) 
                {
                    arr_17 [2] [i_1 + 1] [i_1] [i_0 - 1] |= ((/* implicit */short) ((long long int) (+(var_12))));
                    var_14 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9262612517464546625ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)12531)) : ((((_Bool)1) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (unsigned short)24909)))))))));
                }
                for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    var_15 = ((/* implicit */unsigned char) var_6);
                    arr_20 [i_6] [i_6] [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (7220281835870502564LL)))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)61440)) : (((/* implicit */int) (signed char)83)))) : (((/* implicit */int) (short)-32513)))));
                }
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_16 [i_0] [i_1 - 3])) : (((/* implicit */int) var_5)))) >> (((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_0] [i_0 - 1] [i_0] [i_1 - 3])), (arr_4 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) % (((((/* implicit */_Bool) arr_0 [i_0] [(short)7])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))))) : ((~((~(var_2)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_7 = 1; i_7 < 23; i_7 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)17290), (((/* implicit */unsigned short) (short)-23451)))))) - (((unsigned long long int) arr_22 [i_7 + 1] [i_7 - 1]))));
        arr_23 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1791230941U)) ? (((((/* implicit */int) ((((/* implicit */int) (unsigned char)79)) >= (((/* implicit */int) (_Bool)1))))) | (((/* implicit */int) (signed char)-106)))) : (((((((/* implicit */_Bool) -889091928957576209LL)) ? (((/* implicit */int) (short)-3261)) : (((/* implicit */int) (unsigned short)13748)))) ^ (((/* implicit */int) (unsigned short)58658))))));
        var_18 = ((/* implicit */unsigned char) (((!((_Bool)1))) ? (min((((/* implicit */int) min((var_1), (((/* implicit */unsigned char) var_5))))), (((((/* implicit */int) arr_22 [i_7] [i_7])) / (((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) ((arr_21 [15U]) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? ((-(var_12))) : (((/* implicit */int) var_7))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_26 [2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) (unsigned short)26133)) : (((/* implicit */int) (unsigned short)15516))));
        var_19 = ((/* implicit */int) (+((-(((((/* implicit */_Bool) arr_10 [i_8] [i_8] [(_Bool)1] [22LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_24 [i_8])))))));
        arr_27 [i_8] [i_8] = var_6;
    }
}
