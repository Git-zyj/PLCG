/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97430
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
    var_14 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) max((((signed char) -814008476233420627LL)), (arr_1 [i_0] [i_0 + 2])));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_0 [i_0 - 1] [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [(_Bool)1] [i_1] [(unsigned char)4] [i_0] [i_4] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned int) (-(var_11)))) / (((unsigned int) arr_0 [(unsigned char)0] [(unsigned char)0])))));
                                arr_14 [i_3] [i_0] [i_2] [i_3 - 1] [i_3 - 1] [1ULL] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 3638208771U))))) ^ ((~(((/* implicit */int) arr_1 [i_1 - 2] [i_2 - 2]))))));
                            }
                        } 
                    } 
                    arr_15 [i_0 - 2] [i_0] = ((/* implicit */unsigned short) var_5);
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) arr_0 [i_2] [(signed char)2]))));
                    var_17 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) != (((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned char)249)) + (var_11)))))));
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))) - (min((var_4), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0])))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0 + 2] [i_0])))));
        arr_17 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (max((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (arr_2 [i_0 + 4]))), (((/* implicit */unsigned int) (signed char)1))))));
    }
}
