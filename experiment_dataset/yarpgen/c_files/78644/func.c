/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78644
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] [i_3] [i_2] [i_4] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_1)) - (57)))))) ? (min((((/* implicit */unsigned int) arr_11 [i_1 - 1] [i_1 - 1] [i_2] [i_3] [3])), (3976083307U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((unsigned int) arr_1 [i_1])))))));
                                var_17 = ((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [i_3]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (unsigned char)75))));
                        var_19 = arr_4 [i_5];
                        var_20 = (~(((/* implicit */int) arr_4 [i_1 - 1])));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_8 [i_1 - 1] [i_2] [i_1 + 1] [i_2] [i_0]))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */short) (+(max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_2] [(unsigned char)8]))))), ((-(var_12)))))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            var_23 &= ((/* implicit */unsigned char) 3976083307U);
                            var_24 = ((/* implicit */unsigned short) ((((((_Bool) (unsigned char)119)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (18446744073709551615ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)31649)) - (((/* implicit */int) (short)29040)))))));
                            var_25 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0] [i_0])) ? (max((((/* implicit */int) var_13)), (-583459407))) : (((/* implicit */int) arr_6 [i_1] [i_1 - 1] [i_1 + 1]))))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (unsigned short)0))));
                        }
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */_Bool) var_13);
    var_28 = ((/* implicit */signed char) var_8);
}
