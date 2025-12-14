/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70674
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
    for (short i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) (~(((arr_7 [i_0] [i_0 + 1] [i_2 - 1] [i_0]) ? (2147483647) : (((/* implicit */int) arr_2 [i_0 - 3]))))));
                            arr_10 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_3);
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_8 [i_0] [17LL] [17LL] [i_1]), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_3] [i_2 - 2])) <= (((/* implicit */int) (unsigned short)23424)))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (arr_3 [i_0])))))))));
                            arr_11 [i_0 + 1] [i_2 + 3] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_16);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 17; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        {
                            arr_18 [i_0] [(_Bool)1] [i_4 - 1] [i_4 - 1] [i_5] [i_4 - 1] = ((min((min((311460274), (-311460291))), (((/* implicit */int) var_9)))) & (((((/* implicit */_Bool) (unsigned char)242)) ? (min((1576826602), (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) (signed char)-9)))));
                            var_19 = ((/* implicit */int) arr_13 [i_1] [i_4]);
                        }
                    } 
                } 
                arr_19 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) >> (((((/* implicit */int) (unsigned char)247)) - (220)))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (arr_16 [i_0] [i_0] [i_0] [i_1] [i_1] [8U]))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0 + 2])), (var_16))))))) ? ((-(-311460298))) : ((((((-(((/* implicit */int) (short)17791)))) + (2147483647))) >> (((max((((/* implicit */int) arr_14 [(_Bool)1] [i_1] [15] [15])), (arr_15 [i_0 + 3] [i_0] [i_0] [i_1]))) - (956322989)))))));
                arr_20 [(unsigned char)3] = ((/* implicit */short) 311460297);
                arr_21 [i_0] [i_1] = ((((long long int) (short)17811)) <= (((/* implicit */long long int) ((/* implicit */int) var_16))));
            }
        } 
    } 
    var_20 = max((((((/* implicit */_Bool) min((-363443252), (((/* implicit */int) (short)28888))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1)))), ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)28888)))))));
}
