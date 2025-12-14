/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77834
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1] [i_1])) ? ((+(1336210784U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_0] [(unsigned char)10] [(short)11])))))))) + (((max((((/* implicit */unsigned long long int) -2067422269)), (18446744073709551589ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                                arr_14 [i_0] [(unsigned short)13] [i_1] [i_0] [(unsigned char)9] [i_0] = ((/* implicit */_Bool) var_8);
                            }
                        } 
                    } 
                    var_10 = ((/* implicit */_Bool) arr_2 [11U]);
                    arr_15 [i_1] [i_1] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1])))));
                    arr_16 [(signed char)12] [i_1] [(signed char)12] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) var_4)))))) ? (((/* implicit */int) arr_7 [i_2] [i_1] [i_0])) : (((/* implicit */int) var_5))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_5 = 1; i_5 < 18; i_5 += 3) 
    {
        arr_19 [(unsigned short)10] = ((/* implicit */short) (-2147483647 - 1));
        arr_20 [i_5 - 1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_18 [i_5 + 1]))) ? ((~(((/* implicit */int) (signed char)103)))) : ((~(((/* implicit */int) arr_17 [i_5 + 4]))))));
    }
    var_11 = ((/* implicit */signed char) ((max((((((/* implicit */int) var_7)) | (((/* implicit */int) var_2)))), (((var_9) % (var_9))))) == (((/* implicit */int) ((unsigned char) var_6)))));
    var_12 = ((/* implicit */unsigned int) max((-13), (-13)));
}
