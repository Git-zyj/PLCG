/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70228
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-37)) : (((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_2] [i_2] [i_0 + 4])) ? (((/* implicit */int) (signed char)-88)) : ((+(((/* implicit */int) (signed char)0))))))));
                        var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_6)) : (arr_0 [i_0 + 2]))))));
                        arr_12 [i_0] [i_0] [i_2] = ((/* implicit */long long int) var_2);
                    }
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_11 = ((/* implicit */short) min(((+(((/* implicit */int) ((_Bool) (_Bool)1))))), ((+((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))))));
                        arr_15 [(unsigned short)13] [i_0 + 3] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33))) < (var_5)))), ((+(((/* implicit */int) var_2))))))));
                        var_12 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((var_6) >> (((((/* implicit */int) (signed char)-118)) + (119))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_0])))) : (arr_2 [i_1 + 1] [i_1 + 1])));
                        var_13 &= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_9 [i_4] [i_1 + 2] [i_4] [i_4])) <= (((/* implicit */int) var_2)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-92))));
                            var_15 = ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) var_2)))));
                        }
                    }
                    var_16 = ((/* implicit */unsigned char) min((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (arr_6 [i_1 - 1] [i_1 + 2] [i_2] [i_1 - 2])))), ((signed char)51)));
                    var_17 &= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [2LL] [i_0] [i_0 + 4] [i_0] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))) % (min((((/* implicit */long long int) var_6)), (arr_8 [0LL] [i_0] [i_0] [i_0] [i_0 + 4] [i_0 - 1])))));
                    arr_18 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_1);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_9);
}
