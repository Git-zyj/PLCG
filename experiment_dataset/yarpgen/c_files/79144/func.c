/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79144
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) ((((var_4) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned char)3)))) ^ ((+(((/* implicit */int) (_Bool)1))))));
        arr_3 [i_0] = ((_Bool) (-(((/* implicit */int) arr_1 [i_0 + 3]))));
        arr_4 [i_0 - 2] [i_0] = ((/* implicit */_Bool) (~((+(((/* implicit */int) max((((/* implicit */unsigned char) var_7)), ((unsigned char)181))))))));
    }
    var_13 &= ((/* implicit */signed char) (((!(var_1))) ? (((((/* implicit */int) (unsigned char)123)) / (((/* implicit */int) (unsigned char)164)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-78)) % (((/* implicit */int) (unsigned char)120))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)21)))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((_Bool) (_Bool)0)))) * (((/* implicit */int) ((_Bool) (-(((/* implicit */int) (unsigned char)255))))))));
    /* LoopNest 2 */
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) var_1))), (((((/* implicit */int) arr_17 [i_3 - 1] [i_2 + 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1])) * (((/* implicit */int) arr_17 [i_3 - 1] [i_2 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1]))))));
                                arr_19 [i_3] = ((_Bool) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (_Bool)1))));
                                arr_20 [i_1] [i_3] [i_1 - 1] [i_3] [i_3] = ((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)236))))), (arr_17 [i_5 - 1] [i_3 - 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2])));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (~((+(((/* implicit */int) ((((/* implicit */int) (signed char)-1)) < (((/* implicit */int) var_11))))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((((((/* implicit */int) var_7)) >> (((/* implicit */int) var_3)))) % (((/* implicit */int) (signed char)-30))));
}
