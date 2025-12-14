/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95527
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 8; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_16 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (var_9) : (((/* implicit */int) arr_7 [i_3] [i_3]))))))))));
                                var_17 = ((/* implicit */int) max((var_17), ((((!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (unsigned char)249))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)16876)) : (((/* implicit */int) (unsigned short)40655))))) ? (((/* implicit */int) min((arr_3 [(unsigned short)8] [i_1]), (((/* implicit */short) (unsigned char)236))))) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((unsigned short) (~(-2147483639)))))))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [0] [i_1] = ((/* implicit */long long int) max(((unsigned char)47), ((unsigned char)101)));
                    var_18 |= ((/* implicit */unsigned char) ((((arr_10 [(_Bool)1] [i_1 + 3] [4]) + (arr_10 [(unsigned short)4] [10ULL] [(unsigned short)4]))) * (((arr_10 [8LL] [(unsigned char)4] [(short)10]) / (arr_10 [(_Bool)1] [i_1] [(_Bool)1])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) var_1))), (((int) max((((/* implicit */int) var_13)), (2147483640))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) | (((((/* implicit */_Bool) (((_Bool)1) ? (4294967281U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147)))))) ? (((2147483647) & (-1))) : (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 10; i_5 += 4) 
    {
        for (int i_6 = 3; i_6 < 11; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 3; i_7 < 9; i_7 += 1) 
                {
                    for (int i_8 = 3; i_8 < 12; i_8 += 4) 
                    {
                        {
                            var_21 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)214))) ? (((((/* implicit */_Bool) arr_18 [(unsigned short)11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) : (((((/* implicit */int) arr_20 [(unsigned char)5] [i_8])) | (((/* implicit */int) arr_22 [i_5] [8LL] [i_5]))))))) | ((((_Bool)1) ? (6U) : (4294967292U)))));
                            var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_8))) & (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_0))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))) : (((((/* implicit */int) (_Bool)1)) / (((var_9) | (((/* implicit */int) arr_16 [(unsigned char)0])))))));
                        }
                    } 
                } 
                var_23 &= arr_21 [i_6];
            }
        } 
    } 
}
