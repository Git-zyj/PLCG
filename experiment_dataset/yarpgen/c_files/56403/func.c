/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56403
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
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_2 [i_1]))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) (signed char)120);
                var_15 = ((/* implicit */int) arr_0 [i_0] [i_1 - 3]);
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 3; i_3 < 23; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(unsigned short)8] [i_3 - 2] [i_3] [i_0] [i_0] [(unsigned short)8])) ? (arr_11 [(unsigned short)14] [i_2] [i_2] [i_2] [i_1] [(unsigned short)14]) : (arr_11 [i_3 + 2] [i_1] [i_1 - 2] [i_3 - 3] [i_0 - 2] [(unsigned short)20])))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_2] [i_0] [i_0] [(unsigned short)16])) ? (arr_11 [i_0] [i_0 - 1] [i_2] [i_0] [i_3] [(unsigned char)22]) : (arr_11 [i_0] [(unsigned short)18] [i_0 - 1] [i_1 - 2] [(unsigned short)14] [(unsigned short)2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 + 1] [i_2] [(unsigned char)12] [i_0] [(unsigned short)2])))))))))));
                        var_17 |= ((/* implicit */unsigned short) (+((~(((/* implicit */int) (unsigned char)10))))));
                    }
                    arr_13 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */int) arr_11 [i_1] [i_1 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1]);
                }
                for (unsigned short i_4 = 2; i_4 < 22; i_4 += 1) 
                {
                    arr_17 [i_1] = ((/* implicit */unsigned short) arr_9 [i_0 + 1] [i_1] [i_0 + 1] [i_0]);
                    arr_18 [i_1] [i_1] [15] = arr_2 [i_1];
                }
                for (unsigned short i_5 = 2; i_5 < 22; i_5 += 4) 
                {
                    var_18 = ((/* implicit */_Bool) (unsigned short)55091);
                    arr_21 [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)7))));
                    arr_22 [i_0] [i_1 + 3] [i_1] = ((/* implicit */signed char) (unsigned short)13098);
                }
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((var_8) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) >= (max((((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1))))), ((+(((/* implicit */int) (unsigned short)24543))))))));
}
