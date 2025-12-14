/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69782
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
    var_16 = ((/* implicit */int) var_1);
    var_17 = ((((/* implicit */_Bool) 281520847)) ? (281520847) : (((/* implicit */int) ((((/* implicit */_Bool) ((-281520839) % (434536351)))) || (((/* implicit */_Bool) 3))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (arr_1 [i_0 - 1]) : (((/* implicit */int) (signed char)116))))) ? (((/* implicit */int) min((var_7), (var_5)))) : (281520861)))) ? ((-(((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */int) (signed char)-1)) : (arr_2 [i_2] [(signed char)1])))) ? (min((0), (arr_1 [i_2]))) : (min((955442186), (((/* implicit */int) arr_4 [i_0 + 3] [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(-1823810686)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (var_13))) : (((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0 + 3] [i_0 + 1]) : (((/* implicit */int) var_7)))))) != (((/* implicit */int) ((((((/* implicit */int) var_9)) != (arr_1 [i_2]))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-24)) % (arr_7 [i_4] [i_3 + 2] [6] [4] [i_0 + 1])))))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -24)) ? (760612849) : (-1073741824)))) ? (((/* implicit */int) ((max((arr_9 [i_3]), (-281520838))) < (((((/* implicit */_Bool) var_1)) ? (arr_9 [i_3]) : (1890335995)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-2))))) ? (((/* implicit */int) ((434536351) == (-1073741824)))) : ((+(-1894709297)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (int i_6 = 2; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3)) ? (((/* implicit */int) arr_10 [i_5] [i_1] [(signed char)10] [i_5] [i_6])) : (arr_6 [i_0] [i_1] [(signed char)8])))))) ? (((((/* implicit */int) arr_14 [i_6] [i_6 - 2] [i_0 + 4] [i_0 + 3])) % (((/* implicit */int) var_8)))) : (((max((((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_5] [i_6])), (var_13))) % (min((((/* implicit */int) var_11)), (var_6)))))))));
                                arr_21 [6] [i_1] [i_2] [i_5] [i_6 + 1] = ((((/* implicit */_Bool) -106320222)) ? (((/* implicit */int) (signed char)-16)) : (-127490376));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = var_3;
}
