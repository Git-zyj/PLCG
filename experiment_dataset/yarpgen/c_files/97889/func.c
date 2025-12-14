/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97889
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (unsigned char)8))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned int) arr_1 [i_2] [i_2]);
                        var_16 = (~(0U));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))) > (-2383256161620406137LL)))) : (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_1 [i_1] [i_1])))), ((!(((/* implicit */_Bool) var_9)))))))));
                        var_18 *= ((/* implicit */_Bool) ((unsigned char) ((_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_1] [(_Bool)1]))))));
                        arr_10 [i_2] [i_3] [i_2] [(short)6] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))))) ? ((~(((((/* implicit */long long int) ((/* implicit */int) var_13))) + (6LL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) : (((/* implicit */int) (signed char)122))))) ? (((((/* implicit */_Bool) var_0)) ? (2383256161620406158LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))))));
                    }
                    for (short i_4 = 2; i_4 < 14; i_4 += 2) 
                    {
                        arr_13 [i_1] [(signed char)13] [i_2] = ((signed char) min(((signed char)-1), ((signed char)1)));
                        var_19 = ((/* implicit */long long int) arr_3 [i_0] [i_1] [i_2]);
                    }
                    arr_14 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) var_7);
                    /* LoopNest 2 */
                    for (short i_5 = 4; i_5 < 15; i_5 += 3) 
                    {
                        for (long long int i_6 = 1; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (_Bool)1);
                                var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) arr_16 [i_6] [i_5 + 2] [i_1] [i_1] [i_1] [i_0])) > (((/* implicit */int) var_2))))) : (((((/* implicit */int) arr_16 [(_Bool)1] [i_1] [i_2] [i_1] [i_5 - 1] [i_6 + 1])) % ((-(((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_2] [i_5 - 4] [i_1]))))))));
                                var_22 = ((/* implicit */long long int) ((unsigned int) (signed char)(-127 - 1)));
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */long long int) ((signed char) min((((/* implicit */int) arr_1 [i_0] [i_2])), ((~(((/* implicit */int) arr_1 [i_0] [(signed char)16])))))));
                }
            } 
        } 
    } 
}
