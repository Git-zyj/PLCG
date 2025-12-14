/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72406
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)-105))));
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) & (((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) (signed char)125))))) ? (var_5) : (((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */signed char) (unsigned char)255);
                    var_13 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) var_9))))) ? (arr_8 [i_0] [i_0 - 1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))), (((/* implicit */int) var_2)))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_14 [i_0 + 1] [i_0] [i_0] [(unsigned char)15] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) (signed char)7)) / (((/* implicit */int) var_4)))), ((-(((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_3]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((signed char) var_0))) == (((/* implicit */int) var_4)))))) : (((unsigned int) arr_11 [i_0 + 2] [i_0 - 1]))));
                        var_14 = ((/* implicit */_Bool) arr_6 [14] [i_1] [i_1]);
                        arr_15 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) min((arr_9 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12072535053591788336ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))) : ((+(196608U))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */signed char) (+(arr_18 [i_0 + 2] [i_0])));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) max(((_Bool)0), ((_Bool)1)))), (((int) -1976533988))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-121))));
                        arr_20 [i_0] [i_0] [i_0] = (((((~(((/* implicit */int) arr_11 [i_1] [i_1])))) >= (((/* implicit */int) var_3)))) ? (((((_Bool) arr_6 [i_0] [(unsigned char)7] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4)))) : (arr_8 [i_0] [i_0 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1658187539)) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0] [i_0 + 1])) : (((/* implicit */int) (signed char)121))))) == (arr_19 [i_0 + 1] [i_0]))))));
                        arr_21 [i_0] = ((/* implicit */unsigned long long int) ((max((arr_17 [i_0] [i_0]), (((/* implicit */unsigned int) var_4)))) >> (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) 6374209020117763280ULL)) ? (arr_8 [i_0] [i_2]) : (((/* implicit */unsigned int) -1976533988))))))));
                    }
                    arr_22 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0 - 2] [i_0 - 2]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) var_0);
}
