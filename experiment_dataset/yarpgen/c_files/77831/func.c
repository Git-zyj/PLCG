/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77831
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 3])) > (((/* implicit */int) var_10))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)60)))))));
        arr_4 [i_0] = ((/* implicit */signed char) min((3225953181U), (((/* implicit */unsigned int) (signed char)44))));
        arr_5 [i_0 + 2] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
        arr_6 [i_0] [i_0] = (signed char)-45;
        arr_7 [i_0] [i_0] = ((signed char) (_Bool)1);
    }
    for (signed char i_1 = 3; i_1 < 19; i_1 += 4) 
    {
        arr_11 [(signed char)14] = ((/* implicit */signed char) (-((+(((/* implicit */int) (signed char)-47))))));
        var_12 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [(signed char)3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_10 [i_1])))), (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((((/* implicit */int) var_1)) << (((((/* implicit */int) var_2)) - (68))))) < (((/* implicit */int) (signed char)-64))))) : (((/* implicit */int) ((signed char) arr_9 [i_1 - 1])))));
    }
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                arr_16 [(signed char)8] [19U] = ((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3]);
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 22; i_4 += 1) 
                {
                    for (signed char i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        {
                            arr_22 [(signed char)9] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) arr_21 [i_4 + 2] [i_4 + 2] [i_4] [i_4] [i_4] [i_4 + 2]);
                            arr_23 [i_2] = arr_19 [i_2];
                            var_13 = ((/* implicit */signed char) max((4294967295U), (((/* implicit */unsigned int) (signed char)6))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (arr_20 [i_2] [i_2] [i_2] [i_2])));
                arr_24 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((unsigned int) (signed char)126)) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47)))))) ? (((/* implicit */int) (signed char)-85)) : ((-(((/* implicit */int) (signed char)-86))))));
            }
        } 
    } 
    var_15 = (signed char)127;
    var_16 = ((/* implicit */signed char) ((var_7) ? (((/* implicit */int) var_4)) : (min((((((/* implicit */int) (signed char)85)) * (((/* implicit */int) (signed char)(-127 - 1))))), ((-(((/* implicit */int) (signed char)-126))))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)51))))) ? (((min((var_11), (var_7))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))) : ((+(((/* implicit */int) var_2))))));
}
