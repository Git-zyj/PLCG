/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7557
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
    var_11 = ((/* implicit */_Bool) (signed char)118);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */short) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                                arr_14 [i_4] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((-(((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (signed char)117))))))) == (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-111))))));
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_12 [(unsigned char)1] [i_0] [i_3] [i_3] [i_0] [i_3])), ((short)8226)))) ? (((/* implicit */int) var_8)) : (((arr_5 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_2] [i_0]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 11; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_6] [i_0] [(_Bool)1] [i_1] [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned short)34396))))) == (((/* implicit */int) arr_16 [(signed char)8] [(signed char)8] [i_5 - 1] [i_5] [i_5 + 1]))))) < ((+(((/* implicit */int) arr_5 [i_5 - 1] [i_0]))))));
                                arr_22 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (short)8246);
                                arr_23 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */int) (signed char)-66)) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_5 + 1] [i_5] [i_0] [i_0])) < (((/* implicit */int) arr_6 [i_5 + 1] [i_5] [i_0] [i_5])))))));
                                var_13 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54785)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)51971))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) : (((/* implicit */int) (short)21309)))), ((+(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)-108))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 1; i_7 < 10; i_7 += 3) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) min((var_8), (((/* implicit */short) min((((_Bool) var_10)), ((_Bool)1))))));
                                var_15 = ((/* implicit */short) (unsigned short)51013);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */int) (short)-8214)) % ((+(((/* implicit */int) (signed char)14))))));
    var_17 = ((/* implicit */unsigned char) var_2);
}
