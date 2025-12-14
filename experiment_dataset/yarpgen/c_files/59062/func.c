/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59062
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
    var_10 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)46758)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)46758))))) : (18170720130840603651ULL)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned char)177)), (((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_2])) * (((long long int) arr_5 [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_1);
                        arr_12 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)18773)) ? ((~(((/* implicit */int) arr_10 [i_1] [i_2] [i_1] [i_1])))) : ((~(((/* implicit */int) var_2)))))), (-2147483623)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_12 += ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_0 [i_3])) : (((((/* implicit */int) arr_1 [(unsigned short)1])) << (((((/* implicit */int) var_7)) - (45936))))));
                            var_13 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1 - 1] [i_0] [i_3 + 2])) ? (arr_14 [i_1] [i_1] [i_1 - 2] [i_1] [i_3 + 1]) : (arr_14 [(short)15] [i_0] [i_1 + 1] [i_1 + 1] [i_3 - 1])));
                            var_14 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_14 [i_0] [(unsigned char)12] [i_2] [(unsigned char)12] [i_4]))))));
                        }
                        var_15 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_14 [i_3] [i_3 - 2] [i_1 - 2] [i_1 - 3] [i_1 - 2])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)158)), (var_7)))) : (((((/* implicit */int) var_1)) - (131040)))))));
                        arr_15 [i_0] [i_2] [i_2] |= ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) 145046699U)) ? (((/* implicit */int) var_3)) : (-208672886))));
                        arr_20 [13] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_1 - 2])) : ((~(arr_8 [i_1])))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        arr_24 [i_1] [i_1 + 2] [2] [(_Bool)1] = ((/* implicit */unsigned short) arr_7 [i_6] [i_1] [i_2] [i_1] [i_2]);
                        arr_25 [i_0] [i_1] [i_6] [9U] [i_0] [i_1] = ((/* implicit */short) max((max((((((/* implicit */_Bool) (short)16)) ? (arr_13 [2] [(_Bool)1] [(_Bool)1] [i_6] [(_Bool)1]) : (((/* implicit */unsigned int) -4)))), (((/* implicit */unsigned int) (short)2)))), (((/* implicit */unsigned int) var_7))));
                        var_16 ^= ((/* implicit */signed char) (~(-461137437)));
                        arr_26 [i_1] = ((/* implicit */unsigned long long int) (_Bool)0);
                        arr_27 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) 8U);
                    }
                }
            } 
        } 
    } 
}
