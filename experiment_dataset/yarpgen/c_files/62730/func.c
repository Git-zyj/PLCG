/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62730
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_4)) ^ (arr_4 [i_0])))) ? (((/* implicit */unsigned long long int) var_1)) : (arr_4 [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)-21316), (((/* implicit */short) arr_5 [i_1] [i_1] [i_0]))))) ? ((-(arr_0 [i_0]))) : (((((/* implicit */_Bool) var_15)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))))));
                var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((unsigned int) 3616427371717537677LL))))) ? (((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (5179754981139059158ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((-2) >= (-13)))), ((-(((/* implicit */int) (unsigned char)26)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 23; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                var_17 *= (!(((/* implicit */_Bool) (((+(((/* implicit */int) var_12)))) + (((/* implicit */int) var_11))))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_3]))) % (11324144782450039944ULL)))) ? (-2) : (((/* implicit */int) ((var_3) || (((/* implicit */_Bool) var_1)))))))) ? (max((min((((/* implicit */unsigned long long int) var_4)), (7755533500861460268ULL))), (((/* implicit */unsigned long long int) (signed char)-30)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                                arr_19 [i_2] [i_2] [i_3] [i_4] [i_4] [i_5] [i_5] |= ((/* implicit */short) ((var_8) != (arr_14 [i_2] [i_2] [i_4] [i_6])));
                                var_19 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [i_3 + 1] [i_5 - 1])))) <= ((+(((/* implicit */int) arr_9 [i_3 + 1] [i_5 + 1]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_20 |= (((!(((/* implicit */_Bool) (signed char)-59)))) ? (((((arr_23 [i_2] [i_3] [i_4] [i_7]) || (((/* implicit */_Bool) -6554630317808209103LL)))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7326))) : (1108307720798208ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (10746117095677838862ULL)))) ? (((((/* implicit */_Bool) arr_10 [i_7] [i_4] [i_2])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_17 [i_2] [i_3 - 1] [i_3 + 1] [i_3] [i_4] [i_7] [i_7]))) : (arr_12 [i_7]))));
                        arr_24 [i_2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) / (-2280475205477897462LL))), (((/* implicit */long long int) (-(185317670U))))))) ? (((/* implicit */int) ((signed char) (signed char)-11))) : ((+(min((-1001662281), (arr_16 [i_7] [i_7] [i_4] [i_4] [i_3] [i_3 + 1] [i_2])))))));
                        arr_25 [i_3 - 1] [i_7] [i_2] [i_2] [i_3 - 1] [i_2] = arr_17 [i_2] [i_2] [i_3] [i_2] [i_2] [i_4] [i_7];
                        var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) var_13)) ? (var_8) : (var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), (arr_9 [i_2] [i_4]))))) : ((~(arr_8 [i_2])))));
                    }
                    var_22 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) (signed char)-41)) + (2147483647))) >> (((/* implicit */int) var_3))))));
                }
            } 
        } 
    } 
}
