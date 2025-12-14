/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89293
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [(_Bool)1])) ? (((/* implicit */int) var_18)) : ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))), (min((((/* implicit */long long int) (-(((/* implicit */int) var_0))))), (((long long int) (short)26340))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))) + (var_5))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) (short)3595)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-3595)))) : (((/* implicit */int) (_Bool)1)))))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (int i_3 = 2; i_3 < 18; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 15; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            {
                                arr_16 [i_4] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_1] [i_4] [i_1] [i_1] [i_1])) - (((/* implicit */int) (unsigned char)46))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_10))))) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_1)) + (((((/* implicit */int) (unsigned char)3)) * (((/* implicit */int) (unsigned char)0))))))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)-1624))))))))));
                            }
                        } 
                    } 
                    arr_17 [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) ((signed char) arr_12 [(signed char)15] [i_3 - 2] [i_3]));
                    arr_18 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_11 [i_3 - 1] [i_3 - 1]);
                }
            } 
        } 
        var_22 |= ((/* implicit */_Bool) var_11);
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-9175))))))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)104)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [(unsigned char)7])) && (((/* implicit */_Bool) (unsigned short)33634)))))))))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_21 [i_6] [i_6] |= ((/* implicit */short) 2145440581U);
        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-34))));
    }
    var_25 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_15)) ? (((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((unsigned int) var_11))))));
    var_26 |= ((/* implicit */unsigned short) var_8);
}
