/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89991
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
    var_12 = ((((/* implicit */_Bool) max((max((3898103572U), (3898103599U))), (((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))))) ? (min((((3898103555U) - (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))));
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (1315137017U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4178)))))))) || (((/* implicit */_Bool) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) var_8))))))))))));
    var_14 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) > (1315137017U)));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [11LL] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)1303))));
                            arr_13 [i_0] [i_1 - 2] [i_1] [i_3] = ((/* implicit */signed char) max(((((~(((/* implicit */int) var_5)))) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)15)))))), (max((((/* implicit */int) ((short) (short)-1))), (((((/* implicit */int) var_3)) % (((/* implicit */int) var_6))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
