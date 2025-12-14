/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71594
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
    var_12 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(-879025788))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_14 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))) * (arr_1 [i_4]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))))))));
                                var_15 = ((/* implicit */long long int) arr_6 [i_1] [i_2] [i_3] [(unsigned short)7]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) -719395309)), (((((/* implicit */_Bool) arr_5 [i_6] [i_5] [i_2])) ? (arr_13 [i_0] [i_5] [i_2] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_1])))))))) ? (max((arr_1 [i_2 + 1]), (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9995)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65167))) : (arr_1 [i_0])))) ? (max((12839432937742524687ULL), (var_10))) : (((/* implicit */unsigned long long int) var_1))))));
                                arr_17 [i_0] [i_1] [8ULL] [i_6] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) arr_6 [i_1] [i_0] [i_2 + 1] [i_6 - 1])), (var_0))), (((/* implicit */unsigned int) (signed char)31))));
                                var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1] [i_2 - 2] [i_6 - 1])) ? (((((/* implicit */_Bool) 7775398337266368871LL)) ? (arr_9 [i_0] [i_1] [(unsigned short)6]) : (var_3))) : (var_8)));
                                var_18 ^= ((/* implicit */unsigned short) (short)16971);
                            }
                        } 
                    } 
                    arr_18 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_1])))) % (((var_11) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-69))) : (arr_13 [i_0] [i_0] [i_0] [i_1] [i_2 - 2]))))) == (((/* implicit */long long int) (~((+(((/* implicit */int) arr_12 [i_2] [i_1] [i_1] [i_0])))))))));
                    var_19 = ((/* implicit */unsigned int) var_8);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_1);
}
