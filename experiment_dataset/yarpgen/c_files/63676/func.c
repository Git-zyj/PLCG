/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63676
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))) : (var_17)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned short) var_16)), (var_9))))) : (var_16)));
    var_21 = ((/* implicit */int) (+(((((/* implicit */_Bool) max((var_0), (var_10)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (var_6)))) : (((var_17) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_15))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) - (var_17))) : (((/* implicit */unsigned long long int) ((var_6) << (((((/* implicit */int) var_10)) + (125))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [(_Bool)0] [i_3] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) - (((/* implicit */int) max((((/* implicit */unsigned short) var_18)), (var_9))))));
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */unsigned short) ((signed char) max((((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */unsigned int) var_17);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 4; i_5 < 23; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_25 [i_6] = min((((/* implicit */unsigned int) min((((/* implicit */short) var_10)), (var_13)))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (0U))));
                    arr_26 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */signed char) ((((((/* implicit */int) var_9)) % (((/* implicit */int) var_8)))) | (((/* implicit */int) ((((((/* implicit */int) var_2)) - (((/* implicit */int) var_3)))) == ((-(((/* implicit */int) (signed char)72)))))))));
                    arr_27 [(unsigned char)21] [i_6] [i_6] [i_7] |= ((/* implicit */unsigned long long int) max((((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) ^ (((/* implicit */int) var_14)))), (((int) var_19))));
                    arr_28 [i_5] [i_5] [i_7] [i_7] = (-(((((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_14))))) ? (max((((/* implicit */unsigned int) var_3)), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_3)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : ((+(min((((/* implicit */unsigned int) var_15)), (var_6)))))));
}
