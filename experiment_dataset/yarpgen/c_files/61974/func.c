/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61974
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
    var_20 = (((!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) % (((/* implicit */int) (unsigned short)6))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((var_12) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78)))))), (((unsigned char) (unsigned short)43317))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))));
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)11287)) ? (1408032902119570769LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43317))))), (((/* implicit */long long int) var_8)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */short) max(((-(((/* implicit */int) arr_3 [i_1] [i_1])))), (((/* implicit */int) max(((unsigned short)65529), (((/* implicit */unsigned short) arr_2 [i_0])))))));
                /* LoopSeq 2 */
                for (short i_2 = 3; i_2 < 8; i_2 += 2) 
                {
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((int) -241188332236510676LL)) / ((~(((/* implicit */int) arr_3 [(signed char)5] [i_0]))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)5314)) != (1524841797))))) : ((((+(((/* implicit */int) (unsigned short)6)))) | (((/* implicit */int) arr_6 [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 2])))))))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) -241188332236510680LL)))));
                }
                for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 2; i_4 < 9; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) arr_2 [i_3]);
                                arr_17 [i_3] = ((/* implicit */unsigned char) arr_16 [i_0] [(unsigned char)3] [i_3] [i_3] [i_5]);
                                var_25 += ((/* implicit */long long int) max((min((arr_6 [i_0] [i_1] [i_3] [i_4 - 1]), ((short)29745))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    var_26 -= ((/* implicit */unsigned short) 1524841797);
                }
                var_27 = ((/* implicit */signed char) (~(((int) -1))));
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) 1802109192))));
}
