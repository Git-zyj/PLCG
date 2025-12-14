/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73394
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) 12341135094706147270ULL);
                    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) var_1))));
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-426950889)))) ? ((~(arr_6 [i_0] [i_1] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [(_Bool)0])))));
                    var_12 = ((/* implicit */int) arr_3 [i_1]);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_3 = 4; i_3 < 16; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) 15227470078766644365ULL)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (unsigned short)9946)))))));
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) arr_13 [i_4])) : (arr_4 [(unsigned char)19] [i_3]))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))), (arr_6 [(unsigned char)18] [9] [(unsigned char)11] [9]))))));
            }
        } 
    } 
}
