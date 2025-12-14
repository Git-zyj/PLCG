/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60187
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_6 [(unsigned short)7] [i_1 + 2] [3ULL]), (arr_6 [i_0] [i_1 + 2] [i_2])))) ? (((((/* implicit */_Bool) arr_6 [i_4] [i_1 + 1] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) 144115188075331584LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))))));
                                arr_17 [i_0] |= ((/* implicit */short) -144115188075331585LL);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) var_13);
                    /* LoopNest 2 */
                    for (signed char i_5 = 4; i_5 < 8; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 6; i_6 += 2) 
                        {
                            {
                                arr_26 [i_0] [i_1] [i_2] [i_5 + 2] [6ULL] [i_6] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (144115188075331584LL))))) : (((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (13610437802817274418ULL)))))));
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) min((arr_21 [i_0] [i_1] [i_2] [i_0] [i_0]), (var_13))))))) ? ((((!(((/* implicit */_Bool) arr_25 [i_0])))) ? (arr_5 [i_5 + 1] [i_5] [i_5 + 2]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_1 + 1] [i_1] [i_1 + 3] [i_1 + 2])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (+((((_Bool)1) ? (var_0) : (((/* implicit */unsigned long long int) var_5))))));
                                var_17 = ((/* implicit */unsigned short) (_Bool)1);
                                var_18 = ((/* implicit */unsigned long long int) arr_30 [i_0] [i_0] [i_8] [i_1 + 2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) ((int) var_1))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (((signed char) var_13))))) ? (((int) ((((/* implicit */_Bool) (short)674)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)109))))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) && (var_11)))), (var_7))))));
}
