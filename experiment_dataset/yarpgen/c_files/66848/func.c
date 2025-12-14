/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66848
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) ((long long int) arr_0 [i_0]));
        arr_2 [i_0] = ((/* implicit */_Bool) var_14);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [19] = ((/* implicit */unsigned short) ((arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_0]) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 2])) : (var_6)));
                    arr_10 [i_0 - 2] [i_1 - 1] [i_0] = ((/* implicit */signed char) var_10);
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 20; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_0 - 2] [i_0] [i_5] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0])) ? (10373690675425314029ULL) : (arr_14 [i_0])));
                                var_17 = ((/* implicit */unsigned char) var_5);
                                arr_20 [i_0] [19] [i_5] [i_5] = ((/* implicit */unsigned char) ((_Bool) var_10));
                            }
                        } 
                    } 
                    arr_21 [i_4 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(var_12)));
                    var_18 = arr_11 [4U] [i_0];
                    arr_22 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) ((-580305458) & (-1392012190)));
                }
            } 
        } 
        arr_23 [i_0] = ((/* implicit */_Bool) (+(arr_6 [i_0 - 1])));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_26 [i_7] [i_7] = ((/* implicit */int) var_2);
        var_19 = ((/* implicit */int) var_14);
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_20 = min((756150), (((/* implicit */int) (unsigned char)252)));
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) 
        {
            for (long long int i_10 = 1; i_10 < 22; i_10 += 1) 
            {
                {
                    arr_34 [i_8] [i_8] [i_10] = ((_Bool) (unsigned char)95);
                    arr_35 [i_8] [i_8] [i_10 - 1] = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_32 [i_10 - 1] [i_8] [i_10 + 1]), (arr_32 [i_10 - 1] [i_8] [i_10 + 1])))), (((((/* implicit */int) arr_32 [i_10 + 1] [i_8] [i_10 - 1])) % (((/* implicit */int) arr_32 [i_10 + 1] [i_8] [i_10 + 1]))))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned char) var_3);
}
