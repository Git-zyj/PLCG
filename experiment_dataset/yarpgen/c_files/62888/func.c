/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62888
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)50))) & (893216530112673202LL)));
    var_16 = ((/* implicit */signed char) var_14);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_4 [i_2 - 1] [i_2 - 2]), (((/* implicit */long long int) arr_6 [i_1] [i_1] [i_0]))))) ? ((~(((((/* implicit */_Bool) -1057421088)) ? (((/* implicit */unsigned long long int) var_13)) : (var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7406705273105517460LL)) ? (1073741823U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)86)))))) ? (((5822685984165578092LL) >> (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 4139534907U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-107))) : (var_12))))))));
                                var_18 = ((/* implicit */signed char) max((var_18), ((signed char)-1)));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) max((var_19), (((signed char) (+(((((/* implicit */_Bool) 6155153420440660545LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-84))) : (4655354089039187755LL))))))));
                    var_20 -= (unsigned char)64;
                }
            } 
        } 
    } 
    var_21 = ((((long long int) var_9)) == (((/* implicit */long long int) ((/* implicit */int) ((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
}
