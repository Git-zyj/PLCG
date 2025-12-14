/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65335
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
    var_13 = ((/* implicit */signed char) var_6);
    var_14 = ((/* implicit */unsigned int) max((var_14), (min((((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_0)) ? (var_9) : (var_10))) : (var_9))), (((/* implicit */unsigned int) (short)6847))))));
    var_15 = ((/* implicit */_Bool) var_11);
    var_16 ^= ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) (unsigned char)87);
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    var_18 = ((/* implicit */signed char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)169))))))) == (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? ((+(((/* implicit */int) (unsigned char)169)))) : (((/* implicit */int) max(((unsigned short)26257), ((unsigned short)26257))))))));
                    var_19 = ((/* implicit */short) max((max((arr_3 [i_1 - 1] [i_2 + 1]), (arr_4 [i_1 - 2] [(signed char)10]))), (((/* implicit */unsigned short) var_6))));
                    arr_6 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))), (min((((arr_0 [i_0] [i_1]) >> (((((/* implicit */int) arr_3 [2LL] [i_1])) - (9221))))), (((/* implicit */unsigned int) arr_4 [i_0] [i_1]))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_20 ^= ((short) 18446744073709551615ULL);
                    arr_9 [i_3] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_3))));
                    arr_10 [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) ((unsigned short) var_8))) : (((int) (unsigned char)7))))) - (var_7)));
                    var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19358)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)9] [i_1 - 2])))))) : ((+(arr_5 [i_0] [i_1 - 1] [i_1 + 1] [i_3])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1 - 2]))) | (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49262)))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)7)), (arr_3 [i_1 - 2] [i_1 - 1])))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_23 ^= ((/* implicit */int) arr_14 [i_5]);
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && ((!((_Bool)1)))))) : (((/* implicit */int) ((unsigned char) (short)-5625)))));
                        var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (short)-5625)), (3166208010530164890ULL))), (((((/* implicit */_Bool) arr_4 [i_4] [i_5])) ? (var_4) : (((/* implicit */unsigned long long int) var_1)))))))));
                    }
                    var_26 = ((/* implicit */signed char) var_6);
                }
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) min((((/* implicit */short) (unsigned char)0)), (arr_1 [i_1])))))), (((((/* implicit */_Bool) (~(0ULL)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)10084))))));
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */short) var_10);
            }
        } 
    } 
}
