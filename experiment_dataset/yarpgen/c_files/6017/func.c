/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6017
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
    var_20 = ((/* implicit */unsigned int) 8813073103619115627LL);
    var_21 = ((/* implicit */signed char) var_17);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_22 = (+((-(((unsigned long long int) 1426132888776146894LL)))));
                var_23 = var_15;
                var_24 = ((/* implicit */unsigned int) arr_0 [i_0]);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) (+(9223372036854775805LL)));
                                arr_14 [i_3] [i_4 + 1] [i_3] [8U] [6U] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4 - 2]))) * (((unsigned int) 67553994410557440ULL)))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)65)) ? (8369493586774282285ULL) : (((/* implicit */unsigned long long int) 392949551)))))))))));
                                var_26 = ((/* implicit */unsigned int) (short)-27598);
                                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) 8593590965562514533LL))));
                            }
                        } 
                    } 
                } 
                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1426132888776146883LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)53))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((arr_3 [i_0 + 2] [i_0 + 3]), (arr_3 [i_0 + 2] [i_0 + 3]))))));
            }
        } 
    } 
}
