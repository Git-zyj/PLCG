/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68525
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))) : (var_17))))))));
                                var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((-2147483638) / (((/* implicit */int) var_10))))), (max((((var_4) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -8902837060498450509LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10)))))))));
                                var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (((_Bool)0) ? (1318153926) : (((/* implicit */int) (_Bool)1))))) ^ (4137941465U)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) (-(-2147483630)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 157025833U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))) : (((((/* implicit */unsigned int) -2147483632)) * (157025833U)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_8))));
                                var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))) / ((~(((/* implicit */int) var_14))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */int) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))), (((1433278292U) - (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                arr_25 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_17)))) ? (((/* implicit */int) ((-2147483636) <= (((/* implicit */int) var_15))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7778)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_8 = 1; i_8 < 17; i_8 += 2) 
    {
        for (unsigned int i_9 = 3; i_9 < 19; i_9 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 4) 
                {
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        {
                            arr_38 [i_8 + 3] [i_9 + 1] [i_10] = ((/* implicit */unsigned short) (~(((2251799813619712LL) - (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-18776)) ? (((/* implicit */int) (_Bool)1)) : (-900556895))))))));
                            var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)167))) : (var_3))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_8))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */int) var_3);
            }
        } 
    } 
}
