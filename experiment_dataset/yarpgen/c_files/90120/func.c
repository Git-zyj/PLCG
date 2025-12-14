/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90120
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
    for (int i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_19 = ((long long int) ((unsigned short) (_Bool)1));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 3; i_2 < 24; i_2 += 3) 
                {
                    var_20 ^= (_Bool)1;
                    arr_8 [i_2] = ((/* implicit */unsigned short) var_15);
                }
                /* vectorizable */
                for (long long int i_3 = 1; i_3 < 23; i_3 += 4) 
                {
                    var_21 = ((/* implicit */long long int) (~(((/* implicit */int) var_15))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((arr_9 [i_3 + 2] [i_0 - 1] [i_0 + 2] [i_0 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 - 1] [i_0 - 3] [i_0 - 4] [i_0 - 3]))) : (arr_7 [(_Bool)1]))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (signed char i_5 = 1; i_5 < 23; i_5 += 2) 
                        {
                            {
                                arr_16 [i_5] [i_3] [i_3] [i_3] [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned int) (_Bool)1);
                                var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(689440453)))) ? (((/* implicit */int) var_17)) : ((~(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_6 = 4; i_6 < 23; i_6 += 1) 
                {
                    var_24 = (!(((/* implicit */_Bool) ((((((/* implicit */int) var_12)) != (((/* implicit */int) arr_9 [i_6] [i_0] [i_0] [i_0])))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_11 [i_1] [i_1]))))));
                    var_25 ^= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) min((arr_15 [i_1] [i_1] [i_0] [i_6] [i_6] [(unsigned short)16]), (((/* implicit */unsigned short) arr_9 [i_0] [(signed char)5] [i_0] [i_0])))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_2)), (max((((((/* implicit */_Bool) arr_18 [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        var_27 += ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17))))), (arr_18 [i_6]))) - (((/* implicit */unsigned long long int) var_4))));
                        var_28 = ((/* implicit */int) (-(arr_14 [i_0] [(unsigned short)10] [i_6 - 3] [2ULL] [i_7] [i_1])));
                        var_29 ^= (signed char)-70;
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) ((unsigned char) -1120855942476197231LL))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-63)))))))))));
                    }
                }
                var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_20 [i_0] [i_1] [i_0] [i_0 - 1])))));
            }
        } 
    } 
    var_32 = ((/* implicit */long long int) min((var_32), (((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)4921), (((/* implicit */unsigned short) var_1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4996432016742709214ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) : (2049235157U)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) * ((~(var_8))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4930)))))));
}
