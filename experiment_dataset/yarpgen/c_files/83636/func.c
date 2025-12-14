/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83636
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
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = 18446744073709551615ULL;
                arr_6 [i_0] [i_1] = ((/* implicit */int) var_5);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_17 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (_Bool)1))))))) * (((unsigned long long int) var_11)));
                    var_18 -= ((/* implicit */long long int) var_0);
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1 - 3])) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1 - 2])) > (((/* implicit */int) arr_7 [i_1 - 2]))))) : (((/* implicit */int) min((arr_7 [i_1 - 1]), (arr_7 [i_1 - 1])))))))));
                    var_20 = ((/* implicit */_Bool) var_13);
                }
                for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    var_21 = ((min((((/* implicit */unsigned int) var_12)), (arr_1 [i_1 - 2]))) < (arr_1 [i_1 - 1]));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_1 - 2]))))) ? ((+(((/* implicit */int) arr_4 [i_0] [i_1 - 3])))) : (((((/* implicit */int) arr_4 [i_3] [i_1 - 3])) * (((/* implicit */int) arr_4 [(_Bool)1] [i_1 - 2]))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_4 = 1; i_4 < 17; i_4 += 3) 
                {
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_4 - 1] [i_4])) | (arr_12 [i_0] [i_1 + 1] [i_4])))) ? (arr_11 [i_0] [i_1] [i_1 - 3] [i_4 - 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_0]))))))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))))))));
                    var_24 = ((/* implicit */int) min((var_24), (min((((/* implicit */int) max((arr_9 [(unsigned short)15] [i_1 - 2] [(unsigned short)15]), (arr_9 [i_0] [15U] [i_4 + 1])))), ((~(((/* implicit */int) var_7))))))));
                    arr_14 [(_Bool)1] [i_4] [i_4] [(_Bool)1] = ((/* implicit */int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) & (((/* implicit */int) ((var_10) > (((/* implicit */int) var_2))))))) == (((/* implicit */int) ((signed char) max((((/* implicit */signed char) var_0)), ((signed char)-57)))))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_4);
}
