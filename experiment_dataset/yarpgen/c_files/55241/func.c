/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55241
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
    var_19 = ((/* implicit */int) (unsigned char)70);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_20 = (!(((((/* implicit */_Bool) -4113382164836935198LL)) && (arr_10 [i_1 + 1] [i_1 + 2] [i_1 + 1]))));
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) -4961305300483038734LL))))), ((-(((/* implicit */int) var_11)))))))));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1] [i_1])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_18)) * ((-(((/* implicit */int) var_12))))))) : (((arr_7 [i_1] [i_1 - 1] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205))))))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) min((var_23), ((!(((/* implicit */_Bool) (unsigned char)205))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_13 [i_0] [i_2] [i_4]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 973234393)) ? (((/* implicit */int) arr_10 [i_2] [i_4] [i_2])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] [i_4])))))))) ? (((/* implicit */int) ((((((/* implicit */int) var_12)) << (((/* implicit */int) arr_2 [i_0])))) != (((/* implicit */int) (unsigned char)186))))) : ((((~(((/* implicit */int) (unsigned short)42690)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)190)))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 3; i_5 < 15; i_5 += 2) 
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)222)) & (((/* implicit */int) arr_2 [i_5 + 3]))));
                        var_26 = ((/* implicit */unsigned int) (_Bool)0);
                        var_27 += ((/* implicit */unsigned char) (signed char)31);
                        var_28 -= arr_6 [i_1 + 2] [i_5 - 2];
                    }
                    var_29 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) (unsigned char)162)));
                    arr_18 [i_0] = ((/* implicit */_Bool) (unsigned char)186);
                    arr_19 [i_1 + 1] [i_2] [i_2] [i_0] = ((/* implicit */short) var_11);
                    var_30 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)24866))))) ? ((-(((/* implicit */int) ((short) arr_3 [i_0] [i_1] [i_2]))))) : (((/* implicit */int) arr_2 [i_0])));
                }
            } 
        } 
    } 
}
