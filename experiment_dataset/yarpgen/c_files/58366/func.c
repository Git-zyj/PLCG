/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58366
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
    var_12 -= ((/* implicit */unsigned int) ((int) ((int) ((((/* implicit */_Bool) 2917044946U)) ? (var_10) : (((/* implicit */unsigned long long int) -1537632795))))));
    var_13 = ((/* implicit */unsigned char) (+(((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-22307))) > (1636695976961447096LL)))) << ((((+(((/* implicit */int) var_3)))) - (63646)))))));
    var_14 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) (short)22324);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_8))));
                            arr_11 [i_4] [i_3] [i_2 + 1] [i_1] [i_4] = ((/* implicit */int) min(((short)22306), (((/* implicit */short) (unsigned char)16))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_5 [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 1]), (((/* implicit */unsigned int) 503316480))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)79)) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) == (18U))))))) : (arr_5 [i_4] [i_3] [i_2] [i_1 - 1])));
                        }
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            arr_15 [i_0] [14] [i_0] [3U] [14] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [14LL] [8ULL] [i_2] [i_5] [i_5])) & (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_1] [i_3 - 2] [i_5]))))) >= (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (arr_10 [i_0] [5ULL] [(unsigned short)3] [i_3] [i_5] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))))) & (arr_0 [i_0]));
                            arr_16 [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) arr_8 [i_1 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_3 - 2]);
                            var_18 = ((/* implicit */unsigned long long int) 3070281165U);
                        }
                        arr_17 [i_0] [i_0] [i_0] [(unsigned char)8] [i_0] [i_0] = ((/* implicit */int) ((((arr_4 [i_1 + 2] [i_0] [i_0]) > (arr_4 [i_1 - 1] [i_1 + 2] [i_1]))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)22302))))) : (arr_12 [15] [i_1 + 1] [i_1])));
                        var_19 = ((/* implicit */short) (+(arr_4 [i_3 + 1] [i_1 - 1] [i_2 - 1])));
                        var_20 |= ((/* implicit */int) (signed char)49);
                    }
                    arr_18 [i_0] [i_0] [i_0] [i_2 + 1] = ((/* implicit */_Bool) max(((unsigned short)65513), ((unsigned short)127)));
                    arr_19 [i_0] [1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12826)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (max((8257536U), (((/* implicit */unsigned int) (signed char)-85))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (short)-1)) : ((+(2147483644)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 268434944)) > (7157498094722104292ULL)))) : (((((/* implicit */_Bool) ((long long int) 3070281164U))) ? (max((578259599), (((/* implicit */int) (short)-64)))) : (var_1)))))));
}
