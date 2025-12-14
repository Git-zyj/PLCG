/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9465
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((short) ((unsigned short) var_3)));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_16 &= ((/* implicit */unsigned short) ((long long int) ((unsigned char) arr_0 [i_0 - 2] [7LL])));
            arr_5 [i_0] = ((_Bool) ((_Bool) var_15));
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) ((unsigned long long int) ((unsigned short) var_5))));
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) var_5))))));
            arr_7 [i_0] [(unsigned short)10] [i_1] = ((unsigned char) ((unsigned int) arr_3 [i_0 - 1] [i_0 - 3] [i_0]));
        }
        for (unsigned short i_2 = 2; i_2 < 17; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 1; i_3 < 16; i_3 += 3) 
            {
                var_18 = ((/* implicit */unsigned char) ((_Bool) ((unsigned short) -236876956)));
                arr_12 [i_3] [i_3] = ((unsigned char) ((unsigned short) (unsigned char)108));
                var_19 = ((_Bool) ((unsigned int) ((long long int) var_9)));
                arr_13 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) ((_Bool) ((short) (unsigned short)4095)));
                var_20 = ((/* implicit */unsigned short) ((_Bool) ((unsigned short) var_6)));
            }
            /* LoopSeq 3 */
            for (unsigned char i_4 = 3; i_4 < 18; i_4 += 1) 
            {
                var_21 &= ((/* implicit */_Bool) ((int) ((unsigned char) ((unsigned char) arr_16 [i_0] [i_2] [i_0] [i_2]))));
                var_22 = ((/* implicit */unsigned int) ((short) ((short) (unsigned short)4095)));
            }
            for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                var_23 = ((/* implicit */short) ((unsigned short) ((int) var_11)));
                var_24 = ((/* implicit */unsigned short) ((short) ((short) arr_4 [i_0 - 2])));
            }
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                var_25 = ((/* implicit */unsigned short) ((_Bool) ((unsigned char) (_Bool)1)));
                arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((unsigned long long int) var_11)));
                arr_22 [i_2] [i_0 - 2] [i_6 + 1] [18LL] = ((/* implicit */long long int) ((unsigned char) ((int) arr_11 [i_0 + 2])));
            }
        }
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((unsigned int) ((long long int) arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 3]))))));
    }
    for (unsigned short i_7 = 4; i_7 < 6; i_7 += 4) 
    {
        var_27 -= ((_Bool) ((unsigned char) (unsigned short)4095));
        arr_25 [i_7] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned char) var_11)));
        arr_26 [i_7] = ((/* implicit */_Bool) ((long long int) ((unsigned long long int) 0U)));
        arr_27 [i_7] = ((/* implicit */int) ((unsigned short) ((int) arr_16 [i_7 + 1] [i_7] [i_7] [i_7])));
    }
    for (unsigned long long int i_8 = 3; i_8 < 23; i_8 += 3) 
    {
        arr_32 [i_8] [i_8] = ((unsigned short) ((unsigned short) var_11));
        var_28 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) ((_Bool) arr_30 [i_8]))));
    }
    var_29 = ((/* implicit */_Bool) var_15);
}
