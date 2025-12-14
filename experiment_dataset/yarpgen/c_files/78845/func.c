/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78845
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((int) var_12)) ^ (((/* implicit */int) max((((/* implicit */signed char) arr_4 [i_1] [i_0])), ((signed char)108))))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((/* implicit */short) arr_4 [i_0] [i_0])), ((short)26105))))));
                var_21 = ((/* implicit */_Bool) ((((arr_0 [i_0]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (-4918986219514756143LL) : (((/* implicit */long long int) arr_3 [i_1] [i_0]))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (var_5)))) ? (((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) (short)-11))))) : (((((/* implicit */_Bool) arr_0 [14U])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */int) arr_4 [i_1] [i_1])))))))));
                arr_5 [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [(signed char)20] [i_1])) : ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((short) max((116020162676450710LL), (((/* implicit */long long int) (short)-20)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3799548345U)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 13; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    var_22 = ((/* implicit */int) ((unsigned int) arr_6 [i_2 - 1]));
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 11; i_5 += 4) 
                    {
                        for (int i_6 = 1; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)8469)))) < (((((/* implicit */int) (short)26095)) * (((/* implicit */int) (unsigned short)65535))))));
                                var_24 &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_6 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6 + 2] [i_2 + 1]))) : (14533022734450376440ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_5] [i_6 + 2] [i_2 - 1] [i_3])) > (max((arr_16 [i_3] [i_3]), (((/* implicit */int) (short)-11)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1189)) ? (((/* implicit */int) (short)255)) : (-399954689)));
    var_26 = ((/* implicit */int) (~(3068593999U)));
    var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) % (var_10)))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8466))) >= (var_16))))))));
}
