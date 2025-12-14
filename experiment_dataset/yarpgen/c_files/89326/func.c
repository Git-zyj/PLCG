/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89326
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) (short)-25149)))), ((unsigned short)45484)))), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))), (var_9)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (arr_6 [i_1 + 2]) : (var_7))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) max(((unsigned char)241), (((/* implicit */unsigned char) (signed char)127))));
                                arr_14 [i_0] [i_2] [i_0] |= ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) arr_13 [i_1 + 1] [i_3 + 1] [i_3 - 3] [i_3 + 1] [i_3 - 4] [i_3 + 2])))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) (unsigned char)3);
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) (+(var_8)));
    }
    var_19 = (~(((/* implicit */int) ((unsigned short) var_7))));
}
