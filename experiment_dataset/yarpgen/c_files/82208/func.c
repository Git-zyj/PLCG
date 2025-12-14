/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82208
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
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1 - 1] = ((/* implicit */int) ((2096951493424674998ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_2 [i_0] [i_1 - 1] [i_0])))))));
                var_20 = ((/* implicit */signed char) ((unsigned int) ((unsigned int) arr_1 [i_0])));
                var_21 = ((/* implicit */_Bool) arr_1 [i_1 + 1]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_3))));
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (unsigned int i_4 = 2; i_4 < 23; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_18 [i_2] [i_2] [i_3] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (((((/* implicit */_Bool) 16349792580284876628ULL)) ? (2250559649U) : (((/* implicit */unsigned int) -241305432))))))) : ((~(((unsigned long long int) arr_11 [i_6] [i_5] [i_2]))))));
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) -241305442)), (var_11)))) ? ((-(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))))))));
                                var_24 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((unsigned int) arr_11 [i_3] [i_4] [i_5]))) ? (max((((/* implicit */unsigned long long int) var_13)), (2096951493424674974ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [(_Bool)1] [i_4 - 1])) ? (((/* implicit */int) (short)-20722)) : (((/* implicit */int) arr_13 [i_2] [i_2])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 4; i_7 < 21; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            {
                                var_25 = ((((max((var_2), (((/* implicit */long long int) var_15)))) + (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2] [i_4 - 2] [i_4 - 2] [i_7 - 3]))))) - (((/* implicit */long long int) (((_Bool)0) ? ((-(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_3] [i_4 - 1])))))));
                                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? ((((_Bool)1) ? ((+(var_12))) : (((/* implicit */unsigned long long int) (+(-2865660371941904392LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) || ((!(((/* implicit */_Bool) var_11)))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) var_15);
}
