/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71662
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) ((unsigned char) -1301429799851173218LL)))));
                    arr_7 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((max((arr_0 [i_1] [i_0 + 1]), (min((((/* implicit */long long int) arr_1 [i_1] [i_0])), (var_6))))) / (var_4)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((unsigned short) arr_10 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1])))));
                        arr_12 [i_0] [3LL] = ((((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_3])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) % ((+(var_3))));
                        var_13 = ((/* implicit */unsigned short) arr_8 [i_0 + 1] [i_0] [i_2 - 1] [i_2 - 1]);
                        arr_13 [(unsigned char)10] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_1]);
                    }
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((var_3) | ((~((~((-9223372036854775807LL - 1LL)))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        for (short i_5 = 3; i_5 < 17; i_5 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) max((var_15), (var_4)));
                var_16 = var_6;
                /* LoopNest 3 */
                for (short i_6 = 1; i_6 < 18; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -9223372036854775793LL)) ? (-6421768328126629822LL) : (9223372036854775785LL)))))));
                                arr_28 [i_4] [i_8] [i_8] = ((/* implicit */long long int) var_8);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
