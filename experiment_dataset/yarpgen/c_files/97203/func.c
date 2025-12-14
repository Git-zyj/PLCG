/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97203
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        arr_3 [(short)2] |= ((/* implicit */unsigned short) (+((~(((((/* implicit */int) var_8)) & (((/* implicit */int) var_2))))))));
        var_16 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((arr_1 [(short)10] [(short)10]), (((/* implicit */short) arr_2 [i_0 + 1] [i_0 + 2]))))), (2828652129U)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [(_Bool)1] [i_2 + 3] |= (signed char)-52;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_17 |= ((/* implicit */short) ((9361456916128746039ULL) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned short)52195), (((/* implicit */unsigned short) (signed char)-73))))))))));
                                var_18 |= ((/* implicit */short) ((signed char) 13510798882111488ULL));
                                var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_14 [(unsigned short)14] [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1] [i_4 - 1] [i_4 - 1]), (arr_14 [i_4 - 1] [i_4 + 1] [i_4 - 1] [(_Bool)1] [i_4 + 1] [i_4 - 1] [i_4 - 1])))) ? (((/* implicit */unsigned long long int) 2828652129U)) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21500)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (66493290341899552LL)))) - (((((/* implicit */_Bool) 3582317973U)) ? (var_9) : (((/* implicit */unsigned long long int) 2613983701U))))))));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_1 [(short)2] [(unsigned short)6]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) max((var_10), (((/* implicit */signed char) arr_2 [i_0 - 1] [i_0 + 2]))))) ? (min((((/* implicit */int) arr_2 [(unsigned short)1] [i_0 + 1])), (var_7))) : (((arr_2 [i_0] [i_0 - 1]) ? (((/* implicit */int) (short)4543)) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 2]))))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                {
                    arr_21 [i_5] |= ((/* implicit */short) (signed char)4);
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((long long int) arr_0 [15U])) & (((/* implicit */long long int) ((((/* implicit */_Bool) max((4366819164070224025ULL), (((/* implicit */unsigned long long int) 7969232568687927534LL))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)24216))))))))));
                                var_23 |= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) arr_7 [(short)2] [(short)19] [i_7])) ? (9085287157580805577ULL) : (19ULL))) : (((/* implicit */unsigned long long int) var_0)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        arr_29 [(unsigned short)22] |= ((/* implicit */_Bool) (+(((arr_28 [i_9] [i_9]) & (((/* implicit */unsigned long long int) var_0))))));
        var_24 |= ((/* implicit */int) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (arr_28 [i_9] [i_9]))), (((/* implicit */unsigned long long int) arr_27 [(unsigned short)17])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_26 [i_9]), (arr_26 [i_9]))))) & (((long long int) 14641615517490600135ULL)))))));
    }
    var_25 |= ((/* implicit */_Bool) var_12);
}
