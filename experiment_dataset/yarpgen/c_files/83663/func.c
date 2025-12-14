/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83663
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
    var_17 = ((/* implicit */unsigned int) min((var_17), (3179426755U)));
    var_18 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) ((short) (+(((/* implicit */int) var_10)))));
                var_19 = ((/* implicit */unsigned char) ((signed char) ((((long long int) 3179426755U)) % (((/* implicit */long long int) ((int) arr_4 [i_0] [i_0] [i_0]))))));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) (+(((/* implicit */int) ((((var_15) / (((/* implicit */long long int) 1676989529U)))) > (((/* implicit */long long int) ((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_2 - 1]))))))));
                                arr_12 [8ULL] [8ULL] [8ULL] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_6 [i_2 - 1]), (arr_6 [i_2 + 1])))) || (((/* implicit */_Bool) ((short) arr_6 [i_2 + 1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 12; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            for (long long int i_7 = 3; i_7 < 12; i_7 += 2) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned long long int) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) arr_13 [6LL] [i_7 - 3])) : (var_7)))))))));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) 4659181234019807646LL)) ? (12532937112312493821ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_15 [i_7 + 1])) ? (((/* implicit */int) ((9881091103802069719ULL) != (((/* implicit */unsigned long long int) 28))))) : (((/* implicit */int) ((arr_14 [i_9]) > (((/* implicit */unsigned int) var_12))))))));
                                var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-96)), (max((336742590473850241LL), (((/* implicit */long long int) -715336074))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
