/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56834
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) | (arr_3 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) max((arr_2 [i_0]), (((/* implicit */unsigned int) min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */short) var_18)))))))) : (arr_0 [8U])));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((arr_1 [(_Bool)1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_2])))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_4 [i_3] [i_1] [i_0]), (arr_4 [i_1] [i_3] [i_0])))) ? (((/* implicit */int) (signed char)79)) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_4] [i_4] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))))));
                                var_23 = ((((/* implicit */_Bool) min((arr_9 [i_4] [i_4] [i_4] [i_4] [i_0]), (arr_9 [11U] [11U] [i_4] [i_4 - 3] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [11ULL] [i_1]))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8968860899931074025LL)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)9))))) : ((~(2329597250U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        var_24 = ((/* implicit */signed char) ((arr_13 [i_5] [i_5]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5])))));
        var_25 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-23)), (arr_14 [i_5])))) || (((/* implicit */_Bool) min((2329597234U), (3919276115U)))))))));
    }
    var_26 = ((/* implicit */signed char) min((var_26), (var_0)));
}
